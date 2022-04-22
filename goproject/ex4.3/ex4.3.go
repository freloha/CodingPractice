package main

import "fmt"

func main() {
	var a int = 3
	b := 4
	var c int // 초기화 안했을 경우 자동으로 0으로 초기화

	var d bool // bool의 기본값은 false

	var e = "Hello"
	f := 3.14

	fmt.Println(a, b, c, d, e, f)
}
