// *** 무치형 Void ***

int main() {
	// void my_void; => error: void형은 메모리 차지하지 않으므로 선언X

	int i = 123;
	float f = 123.456f;

	void* my_void;
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}