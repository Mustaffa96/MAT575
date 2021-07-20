//least-squares to fit a function 1/y=Ax+B
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays
    cin>>n;
    double x[n],y[n],a,b;
    cout<<"\nEnter the x-axis values:\n";                //Input x-values
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>y[i];
    double xsum=0,x2sum=0,ysum=0,ynewsum=0,xysum=0;                //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate sigma(xi)
        ysum=ysum+y[i];                        //calculate sigma(yi)
        x2sum=x2sum+pow(x[i],2);                //calculate sigma(x^2i)
        ynewsum=ynewsum+(1 / y[i]);                //calculate ln y
        xysum=xysum+x[i]*(1 / y[i]);                    //calculate sigma(xi*yi)
    }
    b=(n*xysum-xsum*ynewsum)/(n*x2sum-xsum*xsum);            //calculate slope
    a=(x2sum*ynewsum-xsum*xysum)/(x2sum*n-xsum*xsum);            //calculate intercept
    double y_fit[n];                        //an array to store the new fitted values of y
    for (i=0;i<n;i++)
        y_fit[i]=a*x[i]+b;                    //to calculate y(fitted) at given x points
    cout<<"S.no"<<setw(5)<<"x"<<setw(19)<<"x^2"<<setw(19)<<"y"<<setw(19)<<"1/yi"<<setw(19)<<"x*1/yi"<<endl;
    cout<<"-----------------------------------------------------------------\n";
    for (i=0;i<n;i++)
        cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<pow(x[i],2)<<setw(18)<<y[i]<<setw(18)<<(1 / y[i])<<setw(18)<<x[i]*(1 / y[i])<<endl;//print a table of x,y(obs.) and y(fit.)
        cout<<"\nThe value of a0 and a1 are:\n\n"<<a<<" and "<<b<<endl;        //print the best fit line
    cout<<"\nThe linear fit line is of the form:\n\n"<<exp(a)<<" + "<<b<<" x "<<endl;        //print the best fit line
    return 0;
}
