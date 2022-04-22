// https://www.youtube.com/watch?v=3J_S6fFCsaw
// 형변환 예제
package main

import (
	"fmt"
	"strconv"
)

func main() {
	a := 3 // int - 64 bit != int_64

	var b float64 = 3.5

	var c int = int(b) // float 형의 b를 int 형으로 타입 캐스트
	d := float64(a) * b

	var e int64 = 7
	f := a * int(e)

	fmt.Println(a, b, c, d, e, f)

	var g string = strconv.Itoa(a) // 여러 패키지에서 메소드를 가져오는 법, Itoa = integer to string, Atoi = string to integer
	fmt.Println(g)
}
