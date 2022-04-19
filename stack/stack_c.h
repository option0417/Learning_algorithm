/*
 * =====================================================================================
 *       Filename:  stack_c.h
 *    Description:  
 *        Created:  04/07/2022
 *         Author:  W.D Su
 * =====================================================================================
 */


// Define Value as container for any data-type
typedef struct {
  void* val;
} Value;

typedef struct stack Stack;

struct stack {
  // Data Fields
  Value* valArray;
  int _capacity;
  int currIdx;

  // Function
  int       (*push) (Value*, Stack*);
  Value*    (*pop) (Stack*);
  int       (*size) (Stack*);
  int       (*isFull) (Stack*);
  int       (*capacity) (Stack*);
};

int push(Value* val, Stack* stack);
Value* pop(Stack* stack);
int size(Stack* stack);
int capacity(Stack* stack);
int isFull(Stack* stack);
