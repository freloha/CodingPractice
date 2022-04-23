package main

import "fmt"

func main() {
	var a = 123
	var b = 456
	var c = 123456789

	fmt.Printf("%5d, %5d \n", a, b)  // 5칸을 할당할건데 a = 123, 즉 (빈칸빈칸)123
	fmt.Printf("%05d, %05d\n", a, b) //54칸을 할당할건데 빈칸에 0을 추가, 00123
	fmt.Printf("%-5d, %-5d\n", a, b) // -가 붙으면 좌측으로 정렬

	fmt.Printf("%5d, %5d \n", c, c) // 5칸 할당했지만 실제 표현해야되는 수가 크면 그냥 그대로 표현
	fmt.Printf("%05d, %05d\n", c, c)
	fmt.Printf("%-5d, %-5d\n", c, c)
}
