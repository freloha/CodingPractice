// https://www.youtube.com/watch?v=-oqy4PAxC1k

package main

import "fmt" // import는 Java와 비슷

func main() {
	var a int = 10                    // 선인 및 초기화 방법 : var (변수명) (타입명) = 값, 타입은 메모리의 사이즈를 의미하기도 한다. int는 4바이트, 32비트
	var msg string = "Hello Variable" // 우변의 값을 좌변의 메모리에 넣는다.

	a = 20
	msg = "Good Morning"
	fmt.Println(msg, a) // msg 값 출력 후 한칸 띄고 a를 출력
}
