package main

import "fmt"

func main() {
	a := 3

	switch a { // go 언어에서는 break를 사용하지 않아도 case 하나 실행 후 자동으로 switch문 빠져나감
	case 1:
		fmt.Println("a == 1")
		break
	case 2:
		fmt.Println("a == 2")
		break
	case 3:
		fmt.Println("a == 3")
		fallthrough // fallthrough는 case 3을 실행하더라도 다음 case까지 실행
	case 4:
		fmt.Println("a == 4")
	default:
		fmt.Println("a > 4")
	}
}
