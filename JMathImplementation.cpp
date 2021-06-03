#include <iostream>
#include <string>
#include <math.h>
#include "JMath.h"
using namespace std;
void JMath::quad(double a, double b, double c) {
	double Discriminant;
	double x, x1;
	Discriminant = pow(b, 2) - (4 * a * c);
	x = (-b + sqrt(Discriminant)) / 2 * a;
	x1 = (-b - sqrt(Discriminant)) / 2 * a;
	
	
	if (Discriminant == 0){
		cout << "Discriminant is 0" << endl
			<< "X = " << x << endl;
	}
	else if (Discriminant < 0) {
		cout << "Discriminant is lesser than 0 Therefore no X" << endl;
	}
	else {
		cout << "Discriminant = " << Discriminant << endl
			<< "The first X = " << x << endl
			<< "The second X = " << x1 << endl;
	}

}

double JMath::AplusBSquared(double a, double b) {
	return pow(a, 2) + (2 * a * b) + pow(b, 2);
}
double JMath::AminusBSquared(double a, double b) {
	return pow(a, 2) - (2 * a * b) + pow(b, 2);
}
double JMath::ArithmeticProg(int n, double a1, double d) {
	if (n > 0) {
		return a1 + (d * (n - 1));
	}
	else {
		cout << "Error(ArithmeticProg) Number of terms is negative";
	}
}
double JMath::ArithmeticProgSum(int n, double a1, double d) {
	if (n > 0) {
		return ((2 * a1 + d * (n - 1)) / 2) * n;
	}
	else {
		cout << "Error(ArithmeticProgSum) Number of terms is negative";
	}
}
double JMath::GeometricProg(int n, double b1, double q) {
	if (n > 0) {
		return b1 * pow(q, n - 1);
	}
	else {
		cout << "Error(ArithmeticProgSum) Number of terms is negative";
	}
}
double JMath::GeometricProgMult(int n, double b1, double q) {
	if (n > 0) {
		return (b1 * (pow(q, n) - 1)) / (q - 1);
	}
	else {
		cout << "Error(ArithmeticProgSum) Number of terms is negative";
	}
}
string JMath::JLog(long double n,long double n1,int loopcount) {
	if (n < 0 || n1 < 0 || loopcount < 0) {
		return "Error(JLog) Can't take negative Integers";
	}
	long double n1dup = n1;
	string number = "";
	int x = 0;
	long double x1;
	for (int i = 0; i < loopcount; i++) {
		while (n1>= pow(n, x)) {
			x++;
		}
		x -= 1;
		if (pow(n, x) == n1) {
			return to_string(x);
		}
		else {
			number += to_string(x);
			x1 = n1 / pow(n, x);
			n1 = pow(x1, 10);
			x = 0;
		}
	}
	
	
	while (pow(n, x) <= n1dup) {
		x++;
	}
	
	number.insert(x-1, ".");
	return number;

}




