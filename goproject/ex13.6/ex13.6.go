package main

import (
	"fmt"
	"unsafe"
)

type User struct {
	Age   int32   //32비트, 4바이트
	Score float64 //64비트, 8바이트
}

type paddingUser struct { //8바이트 이하의 작은 필드들은 몰아서 배치하면 효율적인 메모리 사용이 가능하다
	A int8
	B int8
	C int8
	D int
	E int
}

func main() {
	user := User{23, 77.2}
	fmt.Println(unsafe.Sizeof(user)) // unsafe.Sizeof(변수) : 해당 변수의 메모리 공간 크기를 반환

	/*
		결과같은 16, 메모리 정렬로 인해 해당 구조체는 12바이트지만 64비트(8바이트)씩 정렬하므로
		12 -> 16바이트씩 정렬
		Age를 저장한 메모리에는 4바이트의 빈공간이 발생하게 되는데 이를 메모리 패딩(Memory Padding) 이라고 함
	*/
	paddingUser := paddingUser{1, 2, 3, 4, 5}
	fmt.Println(unsafe.Sizeof(paddingUser)) // unsafe.Sizeof(변수) : 해당 변수의 메모리 공간 크기를 반환
}
