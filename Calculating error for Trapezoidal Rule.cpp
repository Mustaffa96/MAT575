//Calculating error for Trapezoidal Rule

#include<iostream>
#include<iomanip>
#include<math.h>

//#define f(x)  2*(1-(1/e))

using namespace std;

int main()
{
	 float  e, n, f1, x, a, b, c, d;

     cout<<"Enter lower value: ";
     cin>>a;
     cout<<"Enter upper value: ";
     cin>>b;
     cout<<"Enter subintervals, n: ";
     cin>>n;
     cout<<"Step 1: Identify the interval, [a,b]"<<endl;
     cout<<"["<<a<<","<<b<<"]"<<endl;
     cout<<"Step 2: Identify the given information"<<endl;
     cout<<"n="<<n<<endl;
     cout<<"Step 3: Compute the second derivatives; f''(x)"<<endl;
     cout<<"f'(x)=?"<<endl;
     cout<<"f''(x)=?"<<endl;

     //f1=f(x);
     cout<<"Given Ea= |((b-a)^3/-12n^2)f''(e)| where f''(e) is the second derivatives that have integrated and divide by(b-a)"<<endl;
     cout<<"Please enter the f''(e) value: ";
     cin>>f1;
     cout<<"Ea= |(("<<b<<"-"<<a<<")^3/-12("<<n<<")^2("<<f1<<")|"<<endl;
     c = b-a;
     d = 12*pow(n,2);
     e = (pow(c,3) / d) * f1;
     cout<<"Ea = "<<e<<endl;

	 return 0;
}
