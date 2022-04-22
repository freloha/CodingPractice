package main

import "fmt"

func main() {
	var a int16 = 3456   // a는 int16타입 - 2바이트 정수
	var b int8 = int8(a) // int16 -> int8, 문제가 발생, 16비트로 표현한 것을 8비트로 변환하게 되면 표현 방식에 차이가 발생하므로 원하는 값이 나오지 않음

	fmt.Println(b)
}
