package main

import "fmt"

const epsillon = 0.000001

func equal(a, b float64) bool { // func <함수명>(파라미터 or 매개변수) 반환타입
	if a > b {
		if a-b <= epsillon {
			return true
		} else {
			return false
		}
	} else {
		if b-a <= epsillon {
			return true
		} else {
			return false
		}
	}
}

func main() {
	var a float64 = 0.1
	var b float64 = 0.2
	var c float64 = 0.3

	// %d : 10진수, %f : 실수, %s : 문자열

	fmt.Printf("%0.18f + %0.18f = %0.18f\n", a, b, a+b)
	fmt.Printf("%0.18f == %0.18f : %v\n", c, a+b, equal(a+b, c)) // %v : 데이터 타입에 맞춰서 기본 형태로 출력합니다.

	a = 0.0000000000004
	b = 0.0000000000002
	c = 0.0000000000007

	fmt.Printf("%g == %g : %v\n", c, a+b, equal(a+b, c))
}
