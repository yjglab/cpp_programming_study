// function�� ���� �κ��� .h���Ϸ� ����
// function�� body �κ��� .cpp���Ϸ� ����


// header guard : �Լ� ���� �ߺ� ���� (#ifndef myfunc // #define myfunc // #endif)
#pragma once 

// function forward declaration (��� ������ �Ǵ� �� ����..)
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