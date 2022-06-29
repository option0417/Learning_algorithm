/*
 * =====================================================================================
 *       Filename:  stack_string.c
 *    Description:  
 *        Created:  04/07/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack_string.h"

Stack* buildStack(int _capacity) {
  Stack* stack = (Stack*) malloc(sizeof(Stack));

  char** _stringArray = (char**) malloc(sizeof(char**) * _capacity);

  stack->_capacity = _capacity;
  stack->_currIdx = -1;
  stack->_stringArray = _stringArray;
  
  stack->push = push;
  stack->pop = pop;
  stack->size = size;
  stack->isFull = isFull;
  stack->capacity = capacity;
  
  return stack;
}

int size(Stack* stack) {
    return stack->_currIdx + 1;
}

int capacity(Stack* stack) {
    return stack->_capacity;
}

int isFull(Stack* stack) {
    return stack->capacity(stack) - stack->size(stack) == 0 ? 1 : 0;
}

int push(char* _string, Stack* stack) {
    if (stack->isFull(stack)) {
        return 0;
    } else {
        printf("Push [%s] to stack\n", _string);
        stack->_currIdx++;
        //stack->_stringArray[stack->_currIdx] = _string;
        stack->_stringArray++;
	*(stack->_stringArray) = _string;
	//*(stack->_stringArray + stack->_currIdx) = _string;
        return 1;
    }
}

char* pop(Stack* stack) {
  if (stack->size(stack) == 0) {
	return NULL;
  } else {
	//char* rtn = stack->_stringArray[stack->_currIdx];
        //stack->_currIdx--;
	char* rtn = *(stack->_stringArray);
        stack->_stringArray--;
	stack->_currIdx--;
	return rtn;
  }
}


int main(int argc, char* argv[]) {
  char* str1 = "Hello";
  char* str2 = ", ";
  char* str3 = "World";

  Stack* stack = buildStack(3);
  
  printf("Capacity: %d\n", stack->capacity(stack));
  printf("Size: %d\n", stack->size(stack));
  printf("Is full? %d\n", stack->isFull(stack));

  if (stack->push(str1, stack) == 1) {
    printf("Push ok\n");
  } else {
    printf("Push fail\n");
  }

  if (stack->push(str2, stack) == 1) {
    printf("Push ok\n");
  } else {
    printf("Push fail\n");
  }

  if (stack->push(str3, stack) == 1) {
    printf("Push ok\n");
  } else {
    printf("Push fail\n");
  }

  printf("Capacity: %d\n", stack->capacity(stack));
  printf("Size: %d\n", stack->size(stack));
  printf("Is full? %d\n", stack->isFull(stack));

  printf("Pop1: %s\n", stack->pop(stack));
  printf("Pop2: %s\n", stack->pop(stack));
  printf("Pop3: %s\n", stack->pop(stack));

  printf("Capacity: %d\n", stack->capacity(stack));
  printf("Size: %d\n", stack->size(stack));
  printf("Is full? %d\n", stack->isFull(stack));
  return 0;
} 
