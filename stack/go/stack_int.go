package main

import "fmt"

type Stack struct {
	_size    int
	valStore []int
	currIdx  int
}

// Build stack
func (stack *Stack) build(capacity int) *Stack {
	stack.valStore = make([]int, capacity)
	return stack
}

// Push value to the stack
func (stack *Stack) push(val int) bool {
	if stack._size < len(stack.valStore) {
		stack.valStore[stack._size] = val
		stack._size += 1
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
		stack._size--
		return stack.valStore[stack._size]
	}
}

// Check the stack is empty or not
func (stack *Stack) isEmpty() bool {
	return stack._size == 0
}

// Show size of the stack
func (stack *Stack) size() int {
	return stack._size
}

// Show value store
func (stack *Stack) show() {
	fmt.Printf("[")
	for _, v := range stack.valStore {
		fmt.Printf(" %d", v)
	}
	fmt.Printf(" ]\n")
}

// Show stack capacity
func (stack *Stack) capacity() int {
	return len(stack.valStore)
}

func main() {
	stack := &Stack{}
	stack.build(5)

	stack.push(1)
	stack.push(3)
	stack.push(5)
	stack.push(7)
	stack.push(9)

	fmt.Printf("Pop1: %d\n", stack.pop())
	fmt.Printf("Pop2: %d\n", stack.pop())
	fmt.Printf("Pop3: %d\n", stack.pop())
	fmt.Printf("Pop4: %d\n", stack.pop())
	fmt.Printf("Pop5: %d\n", stack.pop())
}
