/*
 * =====================================================================================
 *       Filename:  queue_int.h
 *    Description:  A simple implementation of Queue 
 *        Created:  07/04/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

typedef struct queue Queue;

struct queue {
    // Data Fields
    unsigned int _capacity;
    unsigned int _size;
    unsigned int _head;
    unsigned int _tail;
    unsigned int* _valueStore;

    // Functions
    int             (*enQueue) (unsigned int, Queue*);
    unsigned int    (*deQueue) (Queue*);
    int             (*isEmpty) (Queue*);
    unsigned int    (*size) (Queue*);
    unsigned int    (*capacity) (Queue*);
    void            (*show) (Queue*);
};

Queue* buildQueue(unsigned int capacity);
int enQueue(unsigned int value, Queue* queue);
unsigned int deQueue(Queue* queue);
int isEmpty(Queue* queue);
unsigned int size(Queue* queue);
unsigned int capacity(Queue* queue);
void show(Queue* queue);
