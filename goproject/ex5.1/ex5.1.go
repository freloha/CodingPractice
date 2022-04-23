package main

import "fmt"

func main() {
	var a int = 10
	var b int = 20
	var f float64 = 3233333.43

	fmt.Print("a :", a, "b :", b)
	fmt.Println("a :", a, "b :", b, "f :", f) // 3.23333343e+06 : 지수표현으로 표현됨
	fmt.Printf("a : %d, b : %d, f : %f", a, b, f)
}
