package main

import (
	"fmt"
	"os/exec"
)

func main() {
	d, _ := exec.LookPath("date")
	fmt.Printf("Today is %s", d)
}
