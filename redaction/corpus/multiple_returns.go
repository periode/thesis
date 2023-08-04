package main

func getNumbers() (int, float64, int) {
	return 1, 2.0, 3
}

func main() {
	first, _, third := getNumbers()
}
