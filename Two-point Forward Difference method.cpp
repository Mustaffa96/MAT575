//Two-point Forward Difference method
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n;
    double h, a, b, c, d;
    cout<<"\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays
    cin>>n;
    double x[n], y[n];
    cout<<"\nEnter the x-axis values:\n";                //Input x-values
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>y[i];
    cout<<"\n"<<endl;
    double xsum=0, ysum=0;                //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate sigma(xi)
        ysum=ysum+y[i];                        //calculate sigma(yi)
    }

    cout<<"S.no"<<setw(5)<<"x"<<setw(19)<<"y"<<setw(16)<<endl;
    cout<<"-----------------------------------------------------------------\n"<<endl;;
    for (i=0;i<n;i++)
       cout<<i+1<<"."<<setw(8)<<x[i]<<setw(19)<<y[i]<<setw(16)<<endl;

    cout<<"\n"<<endl;
    cout<<"Please enter the value of step size, h:"<<endl;
    cin>>h;
    cout<<"Please enter the point x that needs to be evaluated, x=:"<<endl;
    cin>>a;
    cout<<"Using the forward difference two-point formula"<<endl;
    cout<<"f'(x) = f(x+h) + f(x) / h"<<endl;
    cout<<"f("<<a<<") = "<<"f("<<a+h<<") + f("<<a<<") / "<<h<<endl;
    cout<<"Please enter value f("<<a+h<<") : "<<endl;
    cin>>b;
    cout<<"Please enter value f("<<a<<") : "<<endl;
    cin>>c;

    d = (b-c) / h;
    cout<<"f("<<a<<") = "<<d<<endl;
    return 0;
}
