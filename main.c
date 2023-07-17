/*
 * =====================================================================================
 *       Filename:  main.c
 *    Description:  Just a main file for testing
 *         Author:  W.D Su
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack/stack_string.h"

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
