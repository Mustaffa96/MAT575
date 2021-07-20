//Calculating error for Simpson 3/8

#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;

int main()
{
	 float  e, h, f1, a, b, c, d;

     cout<<"Enter lower value: ";
     cin>>a;
     cout<<"Enter upper value: ";
     cin>>b;
     cout<<"Enter stepsize, h: ";
     cin>>h;
     cout<<"Step 1: Identify the interval, [a,b]"<<endl;
     cout<<"["<<a<<","<<b<<"]"<<endl;
     cout<<"Step 2: Identify the given information"<<endl;
     cout<<"h="<<h<<endl;
     cout<<"Step 3: Compute the second derivatives; f''(x)"<<endl;
     cout<<"f'(x)=?"<<endl;
     cout<<"f''(x)=?"<<endl;
     cout<<"f'''(x)=?"<<endl;
     cout<<"f4(x)=?"<<endl;


     cout<<"Given Ea= |((b-a)(h^4)/80)f4(e)| where f4(e) is the fourth derivatives that have integrated and divide by(b-a)"<<endl;
     cout<<"Please enter the f4(e) value: ";
     cin>>f1;
     cout<<"Ea= |(("<<b<<"-"<<a<<")("<<h<<"^4)/80("<<f1<<")|"<<endl;
     c = b-a;
     d = c*pow(h,4);
     e = ( d / 80) * f1;
     cout<<"Ea = "<<e<<endl;

	 return 0;
}
