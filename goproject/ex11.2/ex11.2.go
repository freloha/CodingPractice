package main

import (
	"fmt"
	"time"
)

func main() {
	i := 1
	for {
		time.Sleep(time.Second) // 초단위로 한번 쉼
		fmt.Println(i)
		i++
		if i == 10 {
			break
		}
	}
}
