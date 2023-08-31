#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;

	cout << "Hello my name is Ryan and I am going to solve the equation Ax+B = 0 for x\n";

	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << "\n\n";

	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << "\n\n";

	cout << "Solving " << A << "x+" << B << "=0 for x . . .\n\n";

	X = ((-1 * B) / A);

	cout << "The answer is x= " << X << endl;
}
