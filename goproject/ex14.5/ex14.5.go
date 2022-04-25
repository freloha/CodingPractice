package main

import "fmt"

type User struct {
	Name string
	Age  int
}

func NewUser(name string, age int) *User {
	var u = User{name, age}
	return &u
}

func main() {
	userPointer := NewUser("AAA", 23) // Go 언어는 탈출검사(escape analysis)를 통하여 힙에 저장할지, 스택에 저장할지 결정
	// 스택보다 힙에 저장하는 것이 효율적

	fmt.Println(userPointer)
}
