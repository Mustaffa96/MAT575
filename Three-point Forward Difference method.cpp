//Three-point Forward Difference method
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n;
    double h, a, b, c, d, a1, a2, b2, ab, h2;
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
    cout<<"f'(x) = -3f(x) + 4f(x+h) - f(x+2h) / 2h"<<endl;
    cout<<"f("<<a<<") = "<<"-3f("<<a<<")+ 4f("<<a+h<<") - f("<<a + 2*h<<") / "<<2*h<<endl;
    cout<<"Please enter value f("<<a<<") : "<<endl;
    cin>>a1;
    cout<<"-3f(x) = "<<-3 * a1<<endl;
    cout<<"Please enter value f("<<(a + h)<<") : "<<endl;
    cin>>b;
    cout<<"4f(x) = "<<4 * b<<endl;
    cout<<"Please enter value f("<<a + 2*h<<") : "<<endl;
    cin>>c;

    a2 = -3 * a1;
    b2 = 4* b;
    ab = a2 + b2;
    h2 = 2*h;
    d = (ab - c) / h2;
    cout<<"f("<<a<<") = "<<d<<endl;
    return 0;
}
