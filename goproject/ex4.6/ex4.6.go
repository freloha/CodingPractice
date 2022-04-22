package main

import "fmt"

var g int = 10

func main() {
	var m int = 20

	{
		var s int = 50
		fmt.Println(m, s, g)
	} // 이 구문 밖으로 나오면 변수의 범위가 벗어나므로

	m = s + 20 // 여기서 s를 인식하지 못함, 없기 떄문
}
