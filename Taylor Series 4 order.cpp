/*Calculating 4th order Taylor Series*/
/*Author: Mustaffa*/
/*Date: 5th July 2021*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define h 0.1

double f(double x,double y) {
   return y + exp(x);
      }
double ff(double x,double y) {
   return f(x,y) + exp(x);
     }
double fff(double x, double y) {
   return ff(x,y) + 2*exp(x);
       }
double ffff(double x, double y) {
   return  fff(x,y) + 3*exp(x);
       }
void taylor(double x,double y[]) {
    int i;
    cout << "i\t\tx\t\ty " << endl;
    for ( i=0;i<=4;i++)    {
        y[i+1]=y[i]+h*f(x,y[i] ) + (h*h/2)*ff(x,y[i]) + (pow(h,3)/6)*fff(x,y[i])+ (pow(h,4)/24)*ffff(x,y[i]) ;
           cout << i << "\t\t" << setprecision(1)<<fixed << x << "\t\t" <<  setprecision(5) << fixed << y[i] << endl;
        x= x+ h;   }
                      }
int main() {
double x0,y[100];
cout << "Enter x0 and y0 : ";
cin >> x0 >> y[0];
cout<<"y(x+h) = y(x)+hy'(x) + h^2/2!y''(x) + h^3/3!y3(x) + h^4/4!y4(x)"<<endl;
cout<<"\n";
cout<<"y'(x)=f(x,y)= y+exp(x)"<<endl;
cout<<"f(0,1)= "<<f(x0,y[0])<<endl;
cout<<"y''(x)=f'(x,y)= f(x,y) + exp(x)"<<endl;
cout<<"f'(0,1)= "<<ff(x0,y[0])<<endl;
cout<<"y3(x)=f''(x,y)= ff(x,y) + 2*exp(x)"<<endl;
cout<<"f''(0,1)= "<<fff(x0,y[0])<<endl;
cout<<"y4(x)=f'''(x,y)= fff(x,y) + 3*exp(x)"<<endl;
cout<<"f'''(0,1)= "<<ffff(x0,y[0])<<endl;
cout<<"\n";
cout<<"y("<<x0+h<<") = "<<y[0]<<"+"<<h*f(x0,y[0])<<"+"<<(h*h/2)*ff(x0,y[0])<<"+"<<(pow(h,3)/6)*fff(x0,y[0])<<"+"<<(pow(h,4)/24)*ffff(x0,y[0])<<endl;
cout<<"y("<<x0+h<<") = "<<y[0]+h*f(x0,y[0])+(h*h/2)*ff(x0,y[0])+(pow(h,3)/6)*fff(x0,y[0])+(pow(h,4)/24)*ffff(x0,y[0])<<endl;
cout<<"\n";
taylor(x0,y);
return 0;
}
