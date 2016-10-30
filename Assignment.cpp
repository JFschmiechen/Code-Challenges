/* 
Author: Schmiechen, James
Assignment: Programming Assignment Three
Course: COMP B12 Instructor: Richard Miles
Date submitted: 2016/10/27 
*/

#include <iostream>
#include <array>

using namespace std;

void calcVolts(double *curPtr, double *resPtr, double *volPtr) {
	for (; *curPtr; ++curPtr, ++resPtr, ++volPtr) {
		*volPtr = (*curPtr * *resPtr);
	}
}

int main() {
	double current[10] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double *curPtr = current;
	double resistance[10] = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	double *resPtr = resistance;
	double voltage[10];
	double *volPtr = voltage;

	calcVolts(curPtr, resPtr, volPtr);

	for (int i = 0; i < 10; i++)
		cout << voltage[i] << endl;

	return 0;
}