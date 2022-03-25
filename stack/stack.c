/*
 * =====================================================================================
 *       Filename:  stack.c
 *    Description:  An implementation for Stack use integer array only 
 *        Created:  03/25/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

struct stack {
  int top;
  int* store;
};

typedef struct stack Stack;

bool push(int val, Stack* stack) {
  if (isFull(stack))
    return false;
  else
    stack->store[top--] = val;

  return true;
}

int pop(Stack* stack) {
  return 0;
}

bool isFull(Stack* stack) {
  return true;
}

int capacity(Stack* stack) {
  return 0;
}
