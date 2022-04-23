package main

import "fmt"

func main() {
	var a int
	var b int

	n, err := fmt.Scan(&a, &b) // Scan이면 2번 엔터, Scanln이면 한줄에 입력을 두 개 해줘야 함
	// err의 값이 nil이 아니면 에러, nill이면 정상 동작
	// 반환값 n은 성공적으로 입력한 개수, err은 입력 시 발생한 에러

	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(n, a, b)
	}
}
