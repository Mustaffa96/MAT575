/* Program: Degree Two
   Legendre Polynomials
   Author: Mustaffa
   Date: May 02, 2021 */
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

/* Defining equation to be solved.
   Change this equation to solve another problem. */
#define    f(x)    exp((x+1) / 2)
#define    g(x)    x * exp((x+1) / 2)
#define    h(x)    ( (3* pow(x,2) - 1)/2) * exp((x+1) / 2)


using namespace std;

int main()
{
	 double x0, x1, a1, a2, a3, b1, b2, b3, c1, c2, c3, lower, upper, integration=0.0, integration1=0.0, integration2=0.0, stepSize, k, k0, k1, k2, e, e1, e2;
	 int i, subInterval;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

     /* Inputs */
	 cout<<"Enter first value: ";
	 cin>>x0;
	 cout<<"Enter second value: ";
	 cin>>x1;

	 cout<<"when x = "<<x0<<setw(3)<<": t= -1 thus"<<setw(3)<<x0<<" ="<<"a(-1)+b"<<endl;
	 cout<<"when x = "<<x1<<setw(3)<<": t= 1 thus"<<setw(3)<<x1<<" ="<<"a(1)+b"<<endl;

     cout << "From the answer above, enter 3 values for coefficients of first equation : \n";
     cin >> a1 >> b1 >> c1;
     cout << "From the answer above, enter 3 values for coefficients of second equation : \n";
     cin >> a2 >> b2 >> c2;
     double x = (c1*b2 - c2*b1) /(a1*b2 - b1*a2);
     double y = (c1*a2 - c2*a1) /(b1*a2 - b2*a1);

     cout<<"\n"<<endl;
     cout<<"x = "<<setw(2)<<x<<"t + "<<setw(2)<<y<<endl;
     cout<<"\n"<<endl;
     cout<<"We will insert x into f(x)equation"<<endl;

     cout<<"\n:"<<endl;
     /* Input */
     cout<<"Enter lower limit of integration: ";
     cin>>lower;
     cout<<"Enter upper limit of integration: ";
     cin>>upper;
     cout<<"Enter number of sub intervals: ";
     cin>>subInterval;

     /* Calculation */

     /* Finding step size */
     stepSize = (upper - lower)/subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);
    integration1 = g(lower) + g(upper);
    integration2 = h(lower) + h(upper);

    for(i=1; i<= subInterval-1; i++)
    {
        k = lower + i*stepSize;
        integration = integration + 2 * (f(k));
        integration1 = integration1 + 2 * (g(k));
        integration2 = integration2 + 2 * (h(k));
    }

    integration = integration * stepSize/2;
    integration1 = integration1 * stepSize/2;
    integration2 = integration2 * stepSize/2;

    cout<< endl<<"Required value of integration of f(x) is: "<< integration;
    cout<< endl<<"Required value of integration of f(x) * x is: "<< integration1;
    cout<< endl<<"Required value of integration of f(x) * (1/2 * (3*x-1)) is: "<< integration2;

    cout<<"\n"<<endl;
    cout<<"Re-insert the f(x) integration value"<<endl;
    cin>>e;
    cout<<"Re-insert the f(x) * x integration value"<<endl;
    cin>>e1;
    cout<<"Re-insert the f(x) * (1/2 * (3*x-1)) integration value"<<endl;
    cin>>e2;
    cout<<"Enter k0 value: ";
    cin>>k0;
    cout<<"Enter k1 value: ";
    cin>>k1;
    cout<<"Enter k2 value: ";
    cin>>k2;
    cout<<"\n"<<endl;

    double p =((2*k0+1) / 2) * e;
    double q =((2*k1+1) / 2) * e1;
    double r =((2*k2+1) / 2) * e2;
    cout<<"a0 = "<<p<<setw(2)<<"a1 = "<<q<<setw(2)<<"a2 = "<<r<<endl;
    cout<<"\n"<<endl;


    cout<<"Thus: f(t)= a0P0 + a1P1 + a2P2"<<endl;
    cout<<"f(t) = "<<p<<setw(2)<<" + "<<setw(2)<<q<<"t"<<setw(2)<<" + "<<r<<setw(1)<<"* (1/2 * (3*t-1))"<<endl;

	 return 0;
}
