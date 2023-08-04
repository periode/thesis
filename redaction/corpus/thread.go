package main

import (
	"fmt"
	"math/rand"
	"time"
)

func recall(date int) {
	random_delay := (rand.Int() % 5) + 1
	time.Sleep(time.Second * time.Duration(random_delay))
	fmt.Println(date)
}

func main() {
	go recall(2046)
	go recall(2047)

	fmt.Println("We're done!")
}
