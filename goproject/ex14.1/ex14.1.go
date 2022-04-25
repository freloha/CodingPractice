package main

import "fmt"

func main() {
	/*
		변수 대입이나 함수 인수 전달은 항상 값을 복사하기 때문에 많은 메모리 공간을 사용하며 복사할 때 발생하는 성능 문제
	*/
	var a int = 500
	var p *int // 포인터의 기본 값은 nil이다
	p = &a     // a의 주소값을 p에 복사

	fmt.Printf("p의 값 : %p\n", p) // 주소값 표시할 땐 %p
	fmt.Printf("p가 가리키는 메모리의 값 : %d\n", *p)

	*p = 100 // p가 가리키는 메모리 공간의 값을 100으로 변경
	fmt.Printf("p가 가리키는 메모리의 값 : %d\n", *p)
}
