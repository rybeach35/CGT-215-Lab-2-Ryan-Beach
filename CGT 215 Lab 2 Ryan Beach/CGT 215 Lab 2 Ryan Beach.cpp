#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	std::cout << "Hello my name is Ryan and I am going to solve the equation Ax+B = 0\n";
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;
	X = ((-1 * B) / A);
	cout << "And X=" << X << endl;
}
