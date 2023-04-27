package main

import (
	"fmt"
)

func recall(date int) {
	fmt.Println(date)
}
func main() {
	go recall(2046)

	fmt.Println("We're done!")
}
