package main

import "fmt"

func getMyAge() int {
	return 22
}

func main() {
	switch age := getMyAge(); true { // 선언대입문을 통하여 age를 대입해주고 true인 case를 찾아서 실행
	case age < 10:
		fmt.Println("Child")
	case age < 20:
		fmt.Println("Teenager")
	case age < 30:
		fmt.Println("20s")
	default:
		fmt.Println("My age is", age) // age값 사용
	}
}
