/*
 * =====================================================================================
 *       Filename:  stack_c.c
 *    Description:  
 *        Created:  04/07/2022
 *         Author:  W.D Su
 * =====================================================================================
 */

typedef struct {
  void* val;
} Value;

bool push(Value* val);
Value* pop();
int size();

typedef struct {
  // Data
  Value* values;
  int size;
  int currSize;

  // Function
  bool      (*push) (Value*);
  Value*    (*pop) (void);
  int       (*size) (void);
}


