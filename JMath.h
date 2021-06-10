#pragma once
#include <vector>
using namespace std;
class JMath {
public:
	
	/// <summary>
	/// outputs the Discriminant,x,x1 value as a string 
	/// </summary>
	/// <param name="a b c"></param>
	void quad(double a,double b,double c);
	
	/// <summary>
	/// returns (a+b)^2
	/// </summary>
	/// <param name="first and second integer"></param>
	/// <returns></returns>
	double AplusBSquared(double a, double b);
	/// <summary>
	/// returns (a-b)^2
	/// </summary>
	/// <param name="first and second integer"></param>
	/// <returns></returns>
	double AminusBSquared(double a, double b);
	/// <summary>
	/// Calculates the Arithmetical progression
	/// </summary>
	/// <param name="1.Number of terms 2.initial term 3.common difference"></param>
	double AsquaredMinusBsquared(double a, double b);
	double ArithmeticProg(int n,double a1,double d);
	/// <summary>
	/// calculates the sum From a1 to n (d considered)
	/// </summary>
	/// <param name="1.Number of terms 2.initial term 3.common difference"></param>
	/// <returns></returns>
	double ArithmeticProgSum(int n, double a1, double d);
	/// <summary>
	/// Calculates the Geometrical progression
	/// </summary>
	/// <param name="1.Number of terms 2.initial term 3.common difference"></param>
	double GeometricProg(int n, double b1, double q);
	/// <summary>
	/// calculates the multiplication From b1 to n (q considered)
	/// </summary>
	/// <param name="1.Number of terms 2.initial term 3.common difference"></param>
	/// <returns></returns>
	double GeometricProgMult(int n, double b1, double q);
	/// <summary>
	/// calculates the Logn^(n1)
	/// example:JLog(2,4,1) will return 2 because 2 ^ 2 = 4
	/// </summary>
	/// <param name="The last parameter is a loopcount (how precise do you want your results to be)"></param>
	/// <param name="for example JLog(2,7,3) would only show 2.807 and JLog(2,7,4) 2.8074 (it is adviced to not go over 6)"></param>
	/// <returns></returns>
	string JLog(long double n,long double n1,int loopcount);
	/// <summary>
	/// outputs the amount of digits present in the number
	/// </summary>
	/// <param name="number"></param>
	/// <returns></returns>
	int CountDigit(int number);
	/// <summary>
	/// Finds the most repeated number in a vector
	/// </summary>
	/// <param name="Vector"></param>
	/// <returns></returns>
	vector<int> FindMostFrequent(vector<int>s);
};
