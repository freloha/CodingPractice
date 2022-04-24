package main

import "fmt"

func main() {
	a := [2][5]int{
		{1, 2, 3, 4, 5},
		{5, 6, 7, 8, 9},
	}
	for _, arr := range a { // 1차 배열에 대한 범위
		for _, v := range arr { // 2차 배열에 대한 범위
			fmt.Print(v, " ")
		}
		fmt.Println()
	}
}
