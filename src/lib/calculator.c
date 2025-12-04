#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}

int _mod(int a, int b) {
	return a%b;
}

double _pow(double a, double b) {
	double result = 1.0;
	for(int i = 0; i < (int)b; i++) {
		result *= a;
	}
	return result;
}
	