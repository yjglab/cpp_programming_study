#include <iostream>

using namespace std;

// *** 인터페이스 클래스 ***
// => 내부에 들어있는 함수들이 모두 순수 가상 함수인 클래스
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

int main() {
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}