#include <iostream>

using namespace std;

// *** �������̽� Ŭ���� ***
// => ���ο� ����ִ� �Լ����� ��� ���� ���� �Լ��� Ŭ����
class IErrorLog {
public:
	virtual bool reportError(const char* errorMsg) = 0;
	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog {
public:
	bool reportError(const char* errorMsg) override {
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog {
public :
	bool reportError(const char* errorMsg) override {
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log) {
	log.reportError("Runtime Error!!");
}

int main5() {
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log); // Writing error to a file
	doSomething(console_log); // Printing error to a console

	return 0;
}