package main

import (
	"fmt"
	"testing"
)

func TestEnQueue(t *testing.T) {
	queue := buildQueue(5)

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
}

func TestDeQueue(t *testing.T) {
	queue := buildQueue(5)

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
		queue.show()
		rtn := queue.deQueue()

		fmt.Printf("%d\n", rtn)
		if rtn != i {
			t.Fatalf("Fail since return of deQueue is not equal to %d\n", i)
		}

		if queue.size() != len(queue._valStore)-i {
			t.Fatalf("Fail since size of the queue is not equal to %d\n", len(queue._valStore)-i)
		}
	}
}
