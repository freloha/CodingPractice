package main

import "fmt"

func main() {
	a := [5]int{1, 2, 3, 4, 5}
	b := [5]int{500, 400, 300, 200, 100}

	for i, v := range a {
		fmt.Printf("a[%d] = %d\n", i, v)
	}

	fmt.Println()

	for i, t := range b {
		fmt.Printf("b[%d] = %d\n", i, t)
	}

	b = a // 모든 요솟값을 배열에 복사

	fmt.Println()

	for i, g := range b {
		fmt.Printf("b[%d] = %d\n", i, g)
	}
}
