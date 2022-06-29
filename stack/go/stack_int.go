package main

import "fmt"

type Stack struct {
	size     int
	capacity int
	valStore []int
	currIdx  int
}

// Build stack
func (stack *Stack) build() *Stack {
	stack.valStore = make([]int, stack.capacity)
	return stack
}

// Push value to the stack
func (stack *Stack) push(val int) bool {
	if stack.size < len(stack.valStore) {
		stack.valStore[stack.size] = val
		stack.size += 1
		return true
	} else {
		return false
	}
}

// Pop value from the stack
func (stack *Stack) pop() int {
	if stack.isEmpty() {
		return -1
	} else {
		stack.size--
		return stack.valStore[stack.size+1]
	}
}

// Check the stack is empty or not
func (stack *Stack) isEmpty() bool {
	return true
}

func main() {
	fmt.Println("vim-go")
}
