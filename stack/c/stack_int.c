  /*
   * =====================================================================================
   *       Filename:  stack.c
   *    Description:  An example for stack implementation
   *        Created:  03/31/2013
   *         Author:  W.D Su
   * =====================================================================================
   */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* createStack(int capacity) {
	Stack* this = (Stack*)malloc(sizeof(Stack));
	this->initialCapacity = initialCapacity;
	this->push = push;
	this->pop = pop;
	this->top = top;
	this->size = size;

	this->initialCapacity(capacity, this);
	return this;
}

void initialCapacity(int capacity, Stack* this) {
	this->valueList = (int*)malloc(capacity * sizeof(int));
	this->valueSize = capacity;
}

void push(int value, Stack* this) {
	if (this->currValueSize < this->valueSize) {
		this->valueList[this->currValueSize++] = value;
	} else {
		printf("Stack Full, Max Size : %d, Current Size : %d\n", this->valueSize, this->currValueSize);
	}
}

int pop(Stack* this) {
	if (this->currValueSize > 0) {
		return this->valueList[--this->currValueSize];
	} else {
		printf("Stack Empty\n");
		return -1;
	}
}

int top(Stack* this) {
	if (this->currValueSize > 0) {
		return this->valueList[this->currValueSize - 1];
	} else {
		printf("Stack Empty\n");
		return -1;
	}
}

int size(Stack* this) {
	return this->currValueSize;
}
