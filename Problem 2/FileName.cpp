#include<iostream>

using namespace std;

int main()
{
	//Problem 2:The  arithmetic  mean  of  two  numbers  is  the  result  of  dividing  their  sum  by  2.  
	//The geometric  mean  of  two  numbers  is  the  square  root  of  their  product.  
	//The  harmonic  mean  of  two numbers  is  the  arithmetic  mean  of  their  reciprocals. 
	//Write  an C++  Programto  that takes  two floating-point numbers as inputs and displays these three means.

	float n1, n2, arithmeticmean, geometricmean, harmonicmean;

	cout << "Enter the fisrst number: ";
	cin >> n1;

	cout << "Enter the second number: ";
	cin >> n2;

	arithmeticmean = (n1 + n2) / 2;
	geometricmean = sqrt(n1 * n2);
	harmonicmean = (1 / n1) + (1 / n2);

	cout << endl << "The arithmetic mean is: " << arithmeticmean << endl;
	cout << "The geometric mean is: " << geometricmean << endl;
	cout << "The harmonic mean is: " << harmonicmean << endl;

		return 0;
}