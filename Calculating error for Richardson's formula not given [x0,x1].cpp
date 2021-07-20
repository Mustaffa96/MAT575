//Calculating error for Richardson's formula not given [x0,x1]

#include<iostream>
#include<iomanip>
#include<math.h>


#define f(x) sin(x)

using namespace std;

int main()
{
	 float x0, x, m, e, h;

     cout<<"Enter lower value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^4(M)/30| where |f5'(x)|</=M"<<endl;
     cout<<"For "<<x0-2*h<<"< x <"<<x0+2*h<<" => "<<f(x0-2*h)<<" < f5'(x) < "<<f(x0+2*h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^4)("<<m<<")/30|"<<endl;
     e = (pow(h,4)*m)/30;
     cout<<"E < "<<e<<endl;

	 return 0;
}
