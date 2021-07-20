//Calculating error for 3 point forward difference not given [x0,x1]

#include<iostream>
#include<iomanip>
#include<math.h>


#define f(x) 2/(pow(1+x,3))

using namespace std;

int main()
{
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)/6| where |f(x3)|</=M"<<endl;
     cout<<"For "<<x0<<"< x <"<<x0+2*h<<" => "<<f(x0)<<" < f(x3) < "<<f(x0+2*h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")/3|"<<endl;
     e = (pow(h,2)*m)/3;
     cout<<"E < "<<e<<endl;

	 return 0;
}
