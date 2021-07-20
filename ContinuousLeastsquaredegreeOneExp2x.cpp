//Continuous least square degree one exp2x
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x0, x1;
    double a1, b1, c1, a2, b2, c2;


    cout<<"Please insert x0 value: "<<endl;
    cin>>x0;

    cout<<"Please insert x1 value: "<<endl;
    cin>>x1;

    cout<<"The normal equations in matrix form is: "<<endl;
    cout<<"dx= "<<(x1 - x0)<<setw(15)<<"xdx= "<<pow(x1,2)*0.5 - pow(x0,2)*0.5<<setw(9)<<"a0 = "<<1/2*exp(2*x1) - 1/2*exp(2*x0)<<endl;
    cout<<"xdx= "<<(pow(x1,2)*0.5) - (pow(x0,2)*0.5)<<setw(13)<<"x2dx= "<<(pow(x1,3)*0.3333) - (pow(x0,3)*0.3333)<<setw(9)<<"a1 = "<<setw(9)<<1/4*(exp(2*x1)*2*x1-exp(2*x1)) - 1/4*(exp(2*x0)*2*x0-exp(2*x0))<<endl;

    cout << "Enter 3 values for coefficients of first equation : \n";
    cin >> a1 >> b1 >> c1;
    cout << "Enter 3 values for coefficients of second equation : \n";
    cin >> a2 >> b2 >> c2;
    double x = (c1*b2 - c2*b1) /(a1*b2 - b1*a2);
    double y = (c1*a2 - c2*a1) /(b1*a2 - b2*a1);


    cout<<"\n";
    cout<<"The value of coefficient is: "<<setw(2)<<"a0= "<<x<<setw(5)<<"a1= "<<y<<endl;
    cout<<"Thus, the least squares function is: "<<endl;
    cout<<"P2(X)= "<<x<<" + "<<y<<"x + "<<endl;
    cout<<"\n";
    return 0;
    }
