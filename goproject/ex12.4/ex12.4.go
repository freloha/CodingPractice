package main

import "fmt"

func main() {
	var t [5]float64 = [5]float64{24.0, 25.9, 27.8, 26.9, 26.2}

	for i, v := range t { // t 배열의 순회를 v를 통해서 함, 진행될 때마다 i 증가
		fmt.Println(i, v)
	}
}
