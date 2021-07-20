//Simpson 1/3 Rule Calculator with the given data in question
//Author: Mustaffa
//Date: 18 June 2021
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n;
    double h;
    cout<<"\nEnter the no. of step size:\n";        //To find the size of arrays
    cin>>h;
    cout<<"\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays
    cin>>n;
    double x[n],y[n],c[n],a,b,d;
    cout<<"\nEnter the x-axis values:\n";                //Input x-values
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>y[i];
    cout<<"\nEnter the coefficient values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>c[i];
    double xsum=0,ysum=0,csum=0,ycsum=0;                //variables for sums of xi,yi,c..etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate (xi)
        ysum=ysum+y[i];                        //calculate (yi)
        csum=csum+c[i];                        //calculate coefficient
        ycsum=ycsum+y[i]*c[i];                 //calculate y*coefficient
    }

    a = h / 3;
    d = a * b;


    cout<<"S.no"<<setw(5)<<"x"<<setw(15)<<"y"<<setw(16)<<"C"<<setw(16)<<"YxC"<<setw(16)<<endl;
    cout<<"-----------------------------------------------------------------\n";
    for (i=0;i<n;i++)
        cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<c[i]<<setw(18)<<y[i]*c[i]<<endl;    //print a table of x,y(obs.) and y(fit.)
    cout<<"\nThe Simpson 1/3 Rule formula:\n\n"<<"h/3(f0+4f1+2f2+4f3+etc...)"<<endl;        //print the formula
    cout<<"\nPlease insert total y*coefficient:\n\n"<<endl;        //print the question ask user to insert yc calculated manually
    cin>>b;
    cout<<"\nThe Simpson 1/3 Rule formula:\n\n"<<a<<"["<<b<<"]"<<endl;        //print the value
    cout<<"\nThe answer is:\n\n"<<a*b<<endl;        //print the value
    return 0;
}
