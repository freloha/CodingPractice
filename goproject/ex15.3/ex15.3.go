package main

import "fmt"

func main() {
	var char rune = '한'

	fmt.Printf("%T\n", char) // char 변수의 타입을 출력, rune 타입은 int32 타입과 같음, 결과 int32
	fmt.Println(char)        // char 값 출력, 결과 54620
	fmt.Printf("%c\n", char) // 문자 출력, 결과 한

	str1 := "가나다라마"
	str2 := "abcde"

	fmt.Printf("len(str1) = %d\n", len(str1)) //utf-8에서 한글은 글자당 3바이트를 차지
	fmt.Printf("len(str2) = %d\n", len(str2)) //utf-8에서 영어는 1바이트 차지
}
