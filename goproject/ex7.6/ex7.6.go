package main

import "fmt"

/*
재귀함수에 관련된 코드
*/

func printNo(n int) {
	if n == 0 {
		return
	}
	fmt.Println(n)
	printNo(n - 1)
	fmt.Println("After", n)
}

func main() {
	printNo(3)
}
