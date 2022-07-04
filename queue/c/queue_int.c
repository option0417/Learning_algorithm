/*
 * =====================================================================================
 *       Filename:  queue_int.c
 *    Description:  A simple implementation of Queue
 *        Created:  07/04/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue_int.h"

Queue* buildQueue(unsigned int _capacity) {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    queue->_capacity = _capacity;
    queue->_size = 0;
    queue->_head = 0;
    queue->_tail = 0;
    queue->_valueStore = (unsigned int*) malloc(sizeof(unsigned int) * _capacity);

    queue->enQueue = enQueue;
    queue->deQueue = deQueue;
    queue->isEmpty = isEmpty;
    queue->size = size;
    queue->capacity = capacity;
    queue->show = show;
    return queue;
}

int enQueue(unsigned int value, Queue* queue) {
    if (queue->_size < queue->_capacity) {
        queue->_valueStore[queue->_tail] = value;
        queue->_size++;
        
        if (queue->_tail == (queue->_capacity - 1)) {
            queue->_tail = 0;
        } else {
            queue->_tail++;
        }
        return 0;
    } else {
        return -1;
    }
}

unsigned int deQueue(Queue* queue) {
    if (queue->_size == 0) {
        return -1;
    } else {
        unsigned int rtn = queue->_valueStore[queue->_head];
        queue->_size--;
        
        if (queue->_head == (queue->_capacity - 1)) {
            queue->_head = 0;
        } else {
            queue->_head++;
        }
        return rtn;
    }
}

int isEmpty(Queue* queue) {
    return queue->_size == 0;
}

unsigned int size(Queue* queue) {
    return queue->_size;
}

unsigned int capacity(Queue* queue) {
    return queue->_capacity;
}

void show(Queue* queue) {
    printf("[ ");
    for (int i = 0; i < queue->_capacity; i++) {
        printf(" %d", queue->_valueStore[i]);
    }
    printf(" ]\n");
    return;
}

int main(int argc, char* argv[]) {
    Queue* queue = buildQueue(5);

    for (int i = 1; i <= 5; i++) {
        queue->enQueue(i, queue);
        printf("Size of Queue: %d\n", queue->size(queue));
        queue->show(queue);
    }

    printf("\n\n");
    
    for (int i = 1; i <= 5; i++) {
        unsigned int rtn = queue->deQueue(queue);
        printf("deQueue return %d\n", rtn);
        queue->show(queue);
    }

    return 0;
}
