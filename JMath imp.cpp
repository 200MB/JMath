#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
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
double JMath::AsquaredMinusBsquared(double a, double b) {
	return (a + b) * (a - b);
}
double JMath::ArithmeticProg(int n, double a1, double d) {
	if (n > 0) {
		return a1 + (d * (n - 1));
	}
	else {
		cout << "Critical Warning(ArithmeticProg) Number of terms is negative";
	}
}
double JMath::ArithmeticProgSum(int n, double a1, double d) {
	if (n > 0) {
		return ((2 * a1 + d * (n - 1)) / 2) * n;
	}
	else {
		cout << "Critical Warning(ArithmeticProgSum) Number of terms is negative";
	}
}
double JMath::GeometricProg(int n, double b1, double q) {
	if (n > 0) {
		return b1 * pow(q, n - 1);
	}
	else {
		cout << "Critical Warning(ArithmeticProgSum) Number of terms is negative";
	}
}
double JMath::GeometricProgMult(int n, double b1, double q) {
	if (n > 0) {
		return (b1 * (pow(q, n) - 1)) / (q - 1);
	}
	else {
		cout << "Critical Warning(ArithmeticProgSum) Number of terms is negative";
	}
}
string JMath::JLog(long double n, long double n1, int loopcount) {
	if (n < 0 || n1 < 0 || loopcount < 0) {
		return "Critical Error(JLog) Can't take negative Integers";
	}
	long double n1dup = n1;
	string number = "";
	int x = 0;
	long double x1;
	for (int i = 0; i < loopcount; i++) {
		while (n1 >= pow(n, x)) {
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
	int y = 0;
	while (pow(n, y) <= n1dup){
		y++;
}
		if (y > 0) {
			number.insert(CountDigit(y), ".");
			return number;
		}
	else if (y == 0) {
		number.insert(1, ".");
		return number;
	}
}
int JMath::CountDigit(int number) {
	return int(log10(number) + 1);
}
int JMath::FindMostFrequent(vector<int>v) {
	if (v.size() == 0) {
		cout << "Fatal Error(FindMostFrequent)-vector is empty" << endl;
		exit(EXIT_FAILURE);
	}
	sort(v.begin(), v.end());
	int init = v[0],count =0,max = 0,u_A;
	for (int i = 0; i < v.size(); i++) {
		if (init != v[i]) {
			if (count >= max) {
				max = count;
				count = 0;
				u_A = init;
				init = v[i];
			}
		}
		if (i + 1 == v.size() && init == v[i]) {
			if (count > max) {
				u_A = init;
			}
		}
		
		count++;
	}
	return u_A;
	
	
	
}
int JMath::FindLeastFrequent(vector<int>v){
	if (v.size() == 0) {
		cout << "Fatal Error(FindLeastFrequent)-vector is empty" << endl;
		exit(EXIT_FAILURE);
	}
	sort(v.begin(), v.end());
	int init = v[0], count = 0, min = INT_MAX, u_A;
	for (int i = 0; i < v.size(); i++) {
		if (init != v[i]) {
			if (count <= min) {
				min = count;
				count = 0;
				u_A = init;
				init = v[i];
			}
		}
		if (i + 1 == v.size() && init == v[i]) {
			if (count < min) {
				u_A = init;
			}
		}

		count++;
	}
	return u_A;
	
}
string JMath::ReverseAstring(string pop) {
	if (pop.size() == 0) {
		cout << "Warning(ReverseAstring)-String is empty" << endl;
	}
	string s = "";
	for (int i = pop.size() - 1; i >= 0; i--) {
		s += pop[i];
	}
	return s;
}
int JMath::AtoBThSystem(int a, int b) {
	if (a == 0) {
		cout << "Fatal Error(errorAtoBthSystem)-Error 0 is impossible to convert" << endl;
		exit(EXIT_FAILURE);
	}
	string s = "";
	while (a > 0) {
		s += to_string(a % b);
		a /= b;
	}
	return stoi(ReverseAstring(s));
}

bool JMath::isPrime(int a) {
	if (a == 1) {
		cout << "Error 1 is an exception" << endl;
		EXIT_FAILURE;
	}
	bool isp = false;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) { 
			return false;
			break;
		}
		else {
			isp = true;
		}
	}
	if (isp == true) {
		return true;
	}
}
vector<int> JMath::Intersection(vector<int>a, vector<int>b) {
	vector<int>c;
	for (int x : a) {
		for (int y : b) {
			if (x == y) {
				c.push_back(x);
			}
		}
	}
	return c;
}
vector<string> JMath::Intersection(vector<string>a, vector<string>b) {
	vector<string>c;
	for (string x : a) {
		for (string y : b) {
			if (x == y) {
				c.push_back(x);
			}
		}
	}
	return c;
}
int JMath::Factorial(int a) {
	if (typeid(a).name() != "int") {
		cout << "Warning(Fact) This method only takes int as argument + '\n'";
		exit(EXIT_FAILURE);
	}
	int nam = 1;
	for (int i = 1; i <= a; i++) {
		nam *= i;
	}
	return nam;
}
string JMath::bin(int a) {
	string a1="";
	int b = 10;
	while (a > 0) {
		int x = a % 10;
		if (x % 2 == 0) {
			a1 += '0';
			a /= 2;
		}
		else {
			a1 += '1';
			a /= 2;
		}
	}
	reverse(a1.begin(), a1.end());
	return a1;
}




		



