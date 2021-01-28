// function의 선언 부분은 .h파일로 정리
// function의 body 부분은 .cpp파일로 정리


// header guard : 함수 선언 중복 방지 (#ifndef myfunc // #define myfunc // #endif)
#pragma once 

// function forward declaration (없어도 실행은 되는 것 같음..)
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);

// function definition
int add(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}

int sub(int a, int b) {
	return a - b;
}