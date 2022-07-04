package main

import "fmt"

type Queue struct {
	_head     int
	_tail     int
	_size     int
	_valStore []int
}

func BuildQueue(_capacity int) *Queue {
	queue := &Queue{}
	queue._head = 0
	queue._tail = 0
	queue._size = 0
	queue._valStore = make([]int, _capacity)
	return queue
}

func (queue *Queue) enQueue(val int) bool {
	if queue._size < len(queue._valStore) {
		queue._valStore[queue._size] = val

		queue._size++
		if queue._tail == len(queue._valStore)-1 {
			queue._tail = 0
		} else {
			queue._tail++
		}
		return true
	}
	return false
}

func (queue *Queue) deQueue() int {
	if queue.isEmpty() {
		return -1
	} else {
		rtn := queue._valStore[queue._head]

		queue._size--

		if queue._head == len(queue._valStore)-1 {
			queue._head = 0
		} else {
			queue._head++
		}
		return rtn
	}
}

func (queue *Queue) isEmpty() bool {
	return queue._size == 0
}

func (queue *Queue) size() int {
	return queue._size
}

func (queue *Queue) capacity() int {
	return len(queue._valStore)
}

func (queue *Queue) show() {
	fmt.Printf("[")
	for _, v := range queue._valStore {
		fmt.Printf(" %d", v)
	}
	fmt.Printf(" ]\n")
}
