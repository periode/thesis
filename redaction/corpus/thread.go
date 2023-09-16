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
	go recall(2045)
	go recall(2046)

	fmt.Println("We're done!")
}

/*
-- possible output #1:
2045
2046
We're done!

-- possible output #2:
2046
2045
We're done!
*/
