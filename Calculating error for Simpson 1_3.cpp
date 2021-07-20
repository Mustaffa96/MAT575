//Calculating error for Simpson 1/3

#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;

int main()
{
	 float  e, n, f1, a, b, c, d;

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
     cout<<"f'''(x)=?"<<endl;
     cout<<"f4(x)=?"<<endl;


     cout<<"Given Ea= |((b-a)^5/-180n^4)f4(e)| where f4(e) is the fourth derivatives that have integrated and divide by(b-a)"<<endl;
     cout<<"Please enter the f4(e) value: ";
     cin>>f1;
     cout<<"Ea= |(("<<b<<"-"<<a<<")^5/-180("<<n<<")^4("<<f1<<")|"<<endl;
     c = b-a;
     d = 180*pow(n,4);
     e = (pow(c,5) / d) * f1;
     cout<<"Ea = "<<e<<endl;

	 return 0;
}
