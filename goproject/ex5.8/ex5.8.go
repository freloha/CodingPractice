package main

import (
	"bufio"
	"fmt"
	"os"
)

/*
go는 선언한 변수는 무조건 써야된다
*/

func main() {
	stdin := bufio.NewReader(os.Stdin) // := 은 선언대입문, 선언과 대입을 한번에 함

	var a int
	var b int

	n, err := fmt.Scanln(&a, &b) // Scanln은 두 가지 값을 출력함, := 는 선언 및 초기화

	if err != nil {
		fmt.Println(err)
		stdin.ReadString('\n')
	} else {
		fmt.Println(n, a, b)
	}

	n, err = fmt.Scanln(&a, &b) // Scanln은 두 가지 값을 출력함, 여기서는 초기화만

	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(n, a, b)
	}
}
