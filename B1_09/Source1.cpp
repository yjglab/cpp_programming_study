// *** ��ġ�� Void ***

int main() {
	// void my_void; => error: void���� �޸� �������� �����Ƿ� ����X

	int i = 123;
	float f = 123.456f;

	void* my_void;
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}