#include<iostream>
#include<iomanip>
#include<math.h>


/* Defining ordinary differential equation to be solved */
#define f(x,y) 2*x*y + y

using namespace std;

using namespace std;
int main()
{
 float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
 int i, n;

 cout<<"Enter Initial Condition"<< endl;
 cout<<"x0 = ";
 cin>> x0;
 cout<<"y0 = ";
 cin >> y0;
 cout<<"Enter calculation point xn = ";
 cin>>xn;
 //cout<<"Enter number of steps: ";
 //cin>> n;
 cout<<"Enter number of steps size: "; //if number of steps not given
 cin>>h;

 /* Calculating step size (h) */
 //h = (xn-x0)/n;

 cout<<"Step 1: Identify dy/dx = y'(x)"<<endl;
 cout<<" "<<endl;
 cout<<"Step 2: Rewrite y'(x) = f(x,y)"<<endl;
 cout<<" "<<endl;
 cout<<"Step 3: Identify x0, y0, y(x0) and h"<<endl;
 cout<<"x0 = "<<x0<<", "<<"y0 = "<<y0<<"h = "<<h<<endl;
 cout<<" "<<endl;

  k1 = h * (f(x0, y0));
  k2 = h * (f((x0+h/2), (y0+k1/2)));
  k3 = h * (f((x0+h/2), (y0+k2/2)));
  k4 = h * (f((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/6;
  yn = y0 + k;

 cout<<"Step 4: Compute k1,k2,k3 and k4"<<endl;
 cout<<"k1 = "<<h<<"(f("<<x0<<","<<y0<<")) = "<<k1<<endl;
 cout<<"k2 = "<<h<<"(f("<<x0<<"+"<<h<<"/2"<<","<<y0<<"+"<<k1<<"/2)) = "<<k2<<endl;
 cout<<"k3 = "<<h<<"(f("<<x0<<"+"<<h<<"/2"<<","<<y0<<"+"<<k2<<"/2)) = "<<k3<<endl;
 cout<<"k4 = "<<h<<"(f("<<x0<<"+"<<h<<","<<y0<<"+"<<k3<<")) = "<<k4<<endl;
 cout<<" "<<endl;
 cout<<"Step 5: Apply RK4 method"<<endl;
 cout<<"k = (k1+2*k2+2*k3+k4)/6 = "<<k<<endl;
 cout<<" "<<endl;


 /* Runge Kutta Method */
 /*cout<<"\nx0\ty0\tyn\n";
 cout<<"------------------\n";
 for(i=0; i <= n; i++)
 {
  k1 = h * (f(x0, y0));
  k2 = h * (f((x0+h/2), (y0+k1/2)));
  k3 = h * (f((x0+h/2), (y0+k2/2)));
  k4 = h * (f((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/6;
  yn = y0 + k;
  cout<< x0<<"\t"<< y0<<"\t"<< yn<< endl;
  x0 = x0+h;
  y0 = yn;
 }*/

 /* Displaying result */
 cout<<"\nValue of y at x = "<< xn<< " is " << y0+k;

 return 0;
}
