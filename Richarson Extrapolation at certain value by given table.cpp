/*
Richarson Extrapolation at certain value by given table
Author: Mustaffa
Date: 4th June 2021
*/

#include<iostream>
#include<iomanip>
#include<math.h>

/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/


using namespace std;

int main()
{
    /* Declaring required variables */
    int i,j,n;
    double h, x1, a, b, c, d, f, g, m, w, p, q, v, z;
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
    cin>>x1;

    a = x1 - 2*h;
    b = x1 - h;
    c = x1 + h;
    d = x1 + 2*h;

    cout<<"\n"<<endl;
    cout<<"Apply the Richardson extrapolation formula"<<endl;
    cout<<"f'(x)= f(x-2h)-8f(x-h)+8f(x+h)-f(x+2h) / 12h"<<endl;
    cout<<"f'("<<x1<<") = f("<<x1<<"-"<<"2("<<h<<") - 8f("<<x1<<"-"<<h<<") + 8f("<<x1<<"+"<<h<<") - f"<<x1<<"+ 12("<<h<<")"<<endl;
    cout<<"f'("<<x1<<") = f("<<a<<") - 8f("<<b<<") + 8f("<<c<<") - f("<<d<<")"<<endl;

    cout<<"\n"<<endl;
    cout<<"Plese enter value of f("<<a<<")"<<endl;
    cin>>f;
    cout<<"Plese enter value of f("<<b<<")"<<endl;
    cin>>g;
    cout<<"The value of 8f("<<b<<") is "<<8*g<<endl;

    cout<<"Plese enter value of f("<<c<<")"<<endl;
    cin>>m;
    cout<<"The value of 8f("<<c<<") is "<<8*m<<endl;
    cout<<"Plese enter value of f("<<d<<")"<<endl;
    cin>>q;

    w = 8*g;
    p = 8*m;
    z = 12 *h;

    v = (f - w + p - q) / z;
    cout<<"\n"<<endl;
    cout<<"f'("<<x1<<") = "<<f<<"-"<<w<<"+"<<p<<"-"<<q<<"/"<<12*h<<endl;
    cout<<"f'("<<x1<<") = "<<v<<endl;
    return 0;
}
