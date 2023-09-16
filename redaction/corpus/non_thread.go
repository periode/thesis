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
	recall(2045)
	recall(2046)

	fmt.Println("We're done!")
}

//-- outputs
// 2045
// 2046
// We're done!
