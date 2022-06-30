package main

import (
	"fmt"
	"testing"
)

func TestHelloWorld(t *testing.T) {
	stack := &Stack{}
	stack.build(5)

	if 5 != stack.capacity() {
		t.Fatalf("The capacity of stack is not equal to %d\n", 5)
	}

	stack.push(1)
	stack.push(3)
	stack.push(5)
	stack.push(7)
	stack.push(9)

	if stack.size() != 5 {
		t.Fatalf("The size of stack is not equal to %d\n", 5)
	}

	rtn := stack.pop()
	if rtn != 9 {
		t.Fatalf("The value from Pop() is not equal to %d\n", 9)
	}
	fmt.Printf("Pop: %d\n", rtn)

	rtn = stack.pop()
	if rtn != 7 {
		t.Fatalf("The value from Pop() is not equal to %d\n", 7)
	}
	fmt.Printf("Pop: %d\n", rtn)

	rtn = stack.pop()
	if rtn != 5 {
		t.Fatalf("The value from Pop() is not equal to %d\n", 5)
	}
	fmt.Printf("Pop: %d\n", rtn)

	rtn = stack.pop()
	if rtn != 3 {
		t.Fatalf("The value from Pop() is not equal to %d\n", 3)
	}
	fmt.Printf("Pop: %d\n", rtn)

	rtn = stack.pop()
	if rtn != 1 {
		t.Fatalf("The value from Pop() is not equal to %d\n", 1)
	}
	fmt.Printf("Pop: %d\n", rtn)
}
