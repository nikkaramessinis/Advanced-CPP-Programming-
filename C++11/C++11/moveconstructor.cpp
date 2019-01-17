#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *_pBuffer{nullptr};
public:
	Test() {
		_pBuffer = new int[SIZE] {};

	}

	Test(int i) {
		_pBuffer = new int[SIZE] {};


		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {
		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);

	}
	Test(Test &&other) {
		cout << "Move constructor" << endl;
		_pBuffer = other._pBuffer;
		other._pBuffer = nullptr;
	}
	Test &operator=(const Test &other) {
	}
	~Test() {
		
		delete[] _pBuffer;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};


ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}
Test getTest() {
	return Test();
}


int main() {
	vector<Test> vec;
	vec.push_back(Test());


	while (1);
	return 0;
}