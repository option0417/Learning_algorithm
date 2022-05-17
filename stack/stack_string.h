/*
 * =====================================================================================
 *       Filename:  stack_string.h
 *    Description:  
 *        Created:  04/07/2022
 *         Author:  W.D Su
 * =====================================================================================
 */


typedef struct stack Stack;

struct stack {
  // Data Fields
  char** _stringArray;
  int _capacity;
  int _currIdx;

  // Function
  int       (*push) (char*, Stack*);
  char*	    (*pop) (Stack*);
  int       (*size) (Stack*);
  int       (*isFull) (Stack*);
  int       (*capacity) (Stack*);
};

int push(char* val, Stack* stack);
char* pop(Stack* stack);
int size(Stack* stack);
int capacity(Stack* stack);
int isFull(Stack* stack);
Stack* buildStack(int capacity);
