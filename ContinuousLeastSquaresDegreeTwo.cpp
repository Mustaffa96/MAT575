//Polynomial Fit
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x0, x1;
    double  a, b, c, d, l, m, n, k, p, D, q, r, s, x, y, z;



    cout<<"Please insert x0 value: "<<endl;
    cin>>x0;

    cout<<"Please insert x1 value: "<<endl;
    cin>>x1;

    cout<<"The normal equations in matrix form is: "<<endl;
    cout<<"dx= "<<x1 - x0<<setw(15)<<"xdx= "<<(pow(x1,2)*0.5) - (pow(x0,2)*0.5)<<setw(9)<<"x2dx= "<<(pow(x1,3)*0.3333) - (pow(x0,3)*0.3333)<<setw(9)<<"a0 = "<<setw(9)<<exp(x1) - exp(x0)<<endl;
    cout<<"xdx= "<<(pow(x1,2)*0.5) - (pow(x0,2)*0.5)<<setw(13)<<"x2dx= "<<(pow(x1,3)*0.3333) - (pow(x0,3)*0.3333)<<setw(9)<<"x3dx= "<<(pow(x1,4)*0.25) - (pow(x0,4)*0.25)<<setw(9)<<"a1 = "<<setw(9)<<(exp(x1) * x1 - exp(x1)) - (exp(x0) * x0 - exp(x0))<<endl;
    cout<<"x2dx= "<<(pow(x1,3)*0.3333) - (pow(x0,3)*0.3333)<<setw(9)<<"x3dx= "<<(pow(x1,4)*0.25) - (pow(x0,4)*0.25)<<setw(9)<<"x4dx= "<<(pow(x1,5)*0.2) - (pow(x0,5)*0.2)<<setw(9)<<"a2 = "<<(pow(x1,2) * exp(x1) - 2 * (exp(x1)*x1 - exp(x1))) - (pow(x0,2) * exp(x0) - 2 * (exp(x0) * x0 - exp(x0)))<<endl;

    cout<<"Please store value in matrix below follow by horizontally: \n"<<endl;
    cout<<"dx "<<"xdx "<<"x2dx "<<"a0 \n";
    cin>>a>>b>>c>>d;
    cout<<"xdx "<<"x2dx "<<"x3dx "<<"a1 \n";
    cin>>l>>m>>n>>k;
    cout<<"x2dx "<<"x3dx "<<"x4dx "<<"a2 \n";
    cin>>p>>q>>r>>s;


 D = (a*n*q+b*l*r+c*m*p) - (a*m*r+b*p*n+c*l*q);
 x = ((b*r*k+c*m*s+d*n*q)-(b*n*s+c*q*k+d*m*r))/D;
 y = ((a*n*s+c*p*k+d*l*r)-(a*r*k+c*l*s+d*n*p))/D;
 z = ((a*q*k+b*l*s+d*m*p)-(a*m*s+b*p*k+d*l*q))/D;


    cout<<"\n";
    cout<<"The value of coefficient is: "<<setw(2)<<"a0= "<<x<<setw(5)<<"a1= "<<y<<setw(5)<<"a2= "<<z<<endl;
    cout<<"Thus, the least squares function is: "<<endl;
    cout<<"P2(X)= "<<x<<" + "<<y<<"x + "<<z<<"x^2"<<endl;
    cout<<"\n";
    return 0;
    }
