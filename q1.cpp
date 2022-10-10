#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &a, int &b);
void swapTwoValues(int &A, int &B);
void getinput(float &c, float &d);
void swapTwoValues(float A, float B);

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << fixed << setprecision(2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

void getinput(int &a, int &b){
	cout << "Enter two integers separated by a space " << endl;
	cin >> a >> b;
}

void swapTwoValues(int &A, int &B){
	int temp1 = A;
	A = B;
	B = temp1;
}

void getinput(float &c, float &d){
	cout << "Enter two decimal numbers separated by a space " << endl;
	cin >> c >> d;
}

void swapTwoValues(float C, float D){
	int temp2 = C;
	C = D;
	D = temp2;
}
// ******************************
// Implement all your functions here
// ******************************