/*
Richarson Extrapolation depend on 3-point central difference
Author: Mustaffa
Date: 4th June 2021
*/

#include<iostream>
#include<iomanip>
#include<math.h>

/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/

#define f(x) (1+x)*exp(x);

using namespace std;

int main()
{
	 /* Declaring required variables */
	 float h1, h2, x1, f1, a, b, c, d, fa, fb, a1, b1, h3, h4, h5, fc, fd;
	 int step = 1;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 up:
	 cout<<"Enter h1: ";
     cin>>h1;
     cout<<"Enter h2: ";
     cin>>h2;
     cout<<"Enter value to compute, x: ";
     cin>>x1;

	 /* Calculating Functional Value */
	 f1 = f(x1);

     a = f(x1 + h1);
     a1 = f(x1 - h1);
     b = f(x1 + h2);
     b1 = f(x1 - h2);
     c = 2 * h1;
     d = 2 * h2;

     fa = (a - a1) / c;
     fb = (b - b1) / d;

   /* Implementing three-point central difference */
     cout<< endl<<"****************"<< endl;
	 cout<<"three-point central difference Method"<< endl;
	 cout<<"*************************************"<< endl;
	 cout<<"\n"<<endl;

	 cout<<"Using three-point central difference formula,"<<endl;
	 cout<<"h = "<<h1<<endl;
	 cout<<"f("<<x1<<") = "<<a<<" - "<<a1<<" / 2("<<h1<<")"<<endl;
	 cout<<"f("<<x1<<") = "<<fa<<endl;

	 cout<<"h = "<<h2<<endl;
	 cout<<"f("<<x1<<") = "<<b<<" - "<<b1<<" / 2("<<h2<<")"<<endl;
	 cout<<"f("<<x1<<") = "<<fb<<endl;

     h3 = h1 / h2;
     h4 = pow(h3,2);
     h5 = h4 - 1;

     fc = fb - fa;
     fd = fb + (fc/h5);

     cout<<"\n"<<endl;
	 cout<<"Applying Richardson extrapolation,,"<<endl;
	 cout<<"f("<<x1<<") = R2+((R2-R1)/(h2/h1)^2 - 1)"<<endl;
	 cout<<"f("<<x1<<") = "<<fb<<"+"<<fc<<"/"<<h4<<" - 1"<<endl;
	 cout<<"f("<<x1<<") = "<<fd<<endl;
	 return 0;
}
