//Parabola Fit
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays
    cin>>n;
    double x[n],y[n],a,b,c,d;
    cout<<"\nEnter the x-axis values:\n";                //Input x-values
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>y[i];
    double xsum=0,x2sum=0,x3sum=0,x4sum=0,ysum=0,xysum=0,x2ysum=0;                //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate sigma(xi)
        ysum=ysum+y[i];                        //calculate sigma(yi)
        x2sum=x2sum+pow(x[i],2);                //calculate sigma(xi^2)
        x3sum=x3sum+pow(x[i],3);                //calculate sigma(xi^3)
        x4sum=x4sum+pow(x[i],4);                //calculate sigma(xi^4)
        x2ysum=x2ysum+pow(x[i],2)*y[i];          //calculate sigma(xi^2*yi)
        xysum=xysum+x[i]*y[i];                   //calculate sigma(xi*yi)
    }
    d=(n*(x2sum*x4sum-x3sum*x3sum))-(xsum*(xsum*x4sum-x2sum*x3sum))+(x2sum*(xsum*x3sum-x2sum*x2sum));
    a=(ysum*(x2sum*x4sum-x3sum*x3sum))-(xsum*(xsum*x4sum-x2sum*x3sum))+(x2sum*(xsum*x3sum-x2sum*x2sum))/d;     //calculate slope
    b=(n*(xysum*x4sum-x3sum*x2sum))-(ysum*(ysum*x4sum-x3sum*x2ysum))+(x2sum*(xsum*x2ysum-xysum*x2sum))/d;    //calculate intercept
    c=(n*(x2sum*x2ysum-xysum*x3sum))-(xsum*(xsum*x2ysum-xysum*x2sum))+(ysum*(xsum*x3sum-x2sum*x2sum))/d;

    double y_fit[n];                        //an array to store the new fitted values of y
    for (i=0;i<n;i++)
        y_fit[i]=a*x[i]+b;                    //to calculate y(fitted) at given x points
    cout<<"S.no"<<setw(5)<<"x"<<setw(19)<<"y(observed)"<<setw(16)<<"xi^2"<<setw(16)<<"xi^3"<<setw(16)<<"xi^4"<<setw(16)<<"xi*yi"<<setw(16)<<"xi^2yi"<<setw(16)<<"y(fitted)"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    for (i=0;i<n;i++)
        cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<pow(x[i],2)<<setw(18)<<pow(x[i],3)<<setw(18)<<pow(x[i],4)<<setw(18)<<x[i]*y[i]<<setw(18)<<pow(x[i],2)*y[i]<<setw(18)<<y_fit[i]<<endl;    //print a table of x,y(obs.) and y(fit.)
    cout<<"\nThe linear fit line is of the form:\n\n"<<a<<" + "<<b<<"x + "<<c<<" x^2"<<endl;        //print the best fit line
    return 0;
}
