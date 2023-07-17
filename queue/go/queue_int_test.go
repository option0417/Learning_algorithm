package main

import (
	"fmt"
	"testing"
)

func TestEnQueue(t *testing.T) {
	queue := BuildQueue(5)

	for i := 1; i <= 5; i++ {
		queue.enQueue(i)

		if queue.size() != i {
			t.Fatalf("Fail since size of the queue is not equal to %d\n", i)
		}

		if queue.isEmpty() {
			t.Fatalf("Fail since return of isEmpty is not equal to false\n")
		}
		fmt.Printf("EnQueue %d done\n", i)
	}

	if queue.size() != len(queue._valStore) {
		t.Fatalf("Fail since size of the queue is not equal to %d\n", len(queue._valStore))
	}
}

func TestDeQueue(t *testing.T) {
	queue := BuildQueue(5)

	for i := 1; i <= 5; i++ {
		queue.enQueue(i)

		if queue.size() != i {
			t.Fatalf("Fail since size of the queue is not equal to %d\n", i)
		}

		if queue.isEmpty() {
			t.Fatalf("Fail since return of isEmpty is not equal to false\n")
		}
	}

	if queue.size() != len(queue._valStore) {
		t.Fatalf("Fail since size of the queue is not equal to %d\n", len(queue._valStore))
	}

	for i := 1; i <= 5; i++ {
		rtn := queue.deQueue()

		if rtn != i {
			t.Fatalf("Fail since return of deQueue is not equal to %d\n", i)
		}

		if queue.size() != len(queue._valStore)-i {
			t.Fatalf("Fail since size of the queue is not equal to %d\n", len(queue._valStore)-i)
		}
		fmt.Printf("DeQueue %d done\n", rtn)
	}
}
