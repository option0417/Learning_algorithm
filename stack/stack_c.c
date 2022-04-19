/*
 * =====================================================================================
 *       Filename:  stack_c.c
 *    Description:  
 *        Created:  04/07/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack_c.h"


int size(Stack* stack) {
    return stack->currIdx + 1;
}

int capacity(Stack* stack) {
    return stack->_capacity;
}

int isFull(Stack* stack) {
    return stack->capacity(stack) - stack->size(stack) == 0 ? 1 : 0;
}

int push(Value* val, Stack* stack) {
    if (stack->isFull(stack)) {
        return 0;
    } else {
        stack->valArray[++stack->currIdx] = val;
        return 1;
    }
}

Value* pop(Stack* stack) {
  if (stack->size(stack) == 0) {
    return NULL;
  } else {
    return stack->valArray[stack->currIdxx--];
  }
}
