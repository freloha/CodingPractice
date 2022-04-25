package main

import (
	"fmt"
	"net/http"
)

/*
웹 서버는 각 URL에 해당하는 핸들러들을 등록한 다음 HTTP에 요청이 왔을 때, URL에 해당하는 핸들러를 선택해서 실행
multiplexer는 여러 입력 중 하나를 선택해서 반환하는 디지털 장치, 라우터(Router)라고도 함
*/

func main() {
	mux := http.NewServeMux() // ListenAndServe() 함수에 두 번째 인수로 nill을 넣으면 DefaultServeMux를 사용함
	mux.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprint(w, "Hello World") // 인스턴스 핸들러 등록
	})
	mux.HandleFunc("/bar", func(w http.ResponseWriter, r *http.Request) {
		fmt.Fprint(w, "Hello Bar")
	})

	http.ListenAndServe(":3000", mux) // mux 인스턴스 사용
}
