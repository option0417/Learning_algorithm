package main

import (
	"fmt"
	"testing"
)

func TestPushToStack(t *testing.T) {
	var _capacity int = 5

	stack := &Stack{}
	stack.build(_capacity)

	if _capacity != stack.capacity() {
		t.Fatalf("The capacity of stack is not equal to %d\n", _capacity)
	}

	for i := 1; i <= 5; i++ {
		var isOk bool = stack.push(i)

		if !isOk {
			t.Fatalf("Fail since push value to stack\n")
		}

		if stack.size() != i {
			t.Fatalf("Fail since wrong size of stack\n")
		}

		fmt.Printf("Push %d to stack\n", i)
	}

	if stack.size() != 5 {
		t.Fatalf("Fail since size of stack is not equal to %d\n", 5)
	}
}

func TestPopFromStack(t *testing.T) {
	var _capacity int = 5

	stack := &Stack{}
	stack.build(_capacity)

	if _capacity != stack.capacity() {
		t.Fatalf("The capacity of stack is not equal to %d\n", _capacity)
	}

	for i := 1; i <= 5; i++ {
		var isOk bool = stack.push(i)

		if !isOk {
			t.Fatalf("Fail since push value to stack\n")
		}

		if stack.size() != i {
			t.Fatalf("Fail since wrong size of stack\n")
		}
	}

	for i := 5; i >= 1; i-- {
		rtn := stack.pop()
		if rtn != i {
			t.Fatalf("Fail since value from Pop() is not equal to %d\n", i)
		}

		if stack.size() != i-1 {
			t.Fatalf("Fail since size of stack is not equal to %d\n", i-1)
		}

		fmt.Printf("Pop: %d\n", rtn)
	}

	if stack.size() != 0 {
		t.Fatalf("Fail since size of stack is not equal to %d\n", 0)
	}
}
