#include <iostream>
using namespace std;

class CMyAverage {
public:
	double operator()(int a1, int a2, int a3) {
		return (double) (a1 + a2 + a3) / 3;
	}
};

int main() {
	CMyAverage average;
	cout<<average(3,2,3);

	return 0;
}
