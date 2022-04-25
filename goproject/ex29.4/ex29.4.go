package main

import "net/http"

func main() {
	http.Handle("/", http.FileServer(http.Dir("static")))                                      // '/' 경로에 대한 요청이 올 때, static 폴더 아래에 있는 파일들을 제공하는 파일 서버
	http.Handle("/static/", http.StripPrefix("/static/", http.FileServer(http.Dir("static")))) // URL에서 /static/을 제거한 후 파일을 찾음, http.StripPrefix()함수는 URL 제거 함수
	http.ListenAndServe(":3000", nil)
}
