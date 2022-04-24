package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	stdin := bufio.NewReader(os.Stdin) // ??
	for {
		fmt.Println("입력하세요.")
		var number int
		_, err := fmt.Scanln(&number) // _ : 입력값 크기, err : 에러메세지
		if err != nil {               // number가 숫자이기 때문에 숫자가 아니면 에러
			fmt.Println("숫자를 입력하세요.")

			stdin.ReadString('\n') // 키보드 버퍼를 지운다
			continue
		}
		fmt.Printf("입력하신 숫자는 %d 입니다.\n", number)
		if number%2 == 0 { // 짝수인지 판별
			break
		}
	}
	fmt.Println("for문이 종료됐습니다.")
}
