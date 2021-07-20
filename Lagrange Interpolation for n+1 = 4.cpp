// Lagrange Interpolation k =0,1,2,3
// Author: Mustaffa
// Date: 7 May 2021

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int i,j,k,n,a;
    cout<<"\nEnter the no. of data pairs to be entered:\n";        //To find the size of arrays
    cin>>n;
    cout<<"n + 1 = "<<n<<endl;
    cout<<"k = from 0 to "<<n-1<<endl;
    double x[n],y[n];
    cout<<"\nEnter the x-axis values:\n";                //Input x-values
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the y-axis values:\n";                //Input y-values
    for (i=0;i<n;i++)
        cin>>y[i];
    double xsum=0,ysum=0;                //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate sigma(xi)
        ysum=ysum+y[i];                        //calculate sigma(yi)

    }

    cout<<"Find Lk(x) for each k = 0,1,,2..."<<endl;
    cout<<"k=0: \n";
    cout<<"L0(x) = "<<setw(2)<<"(x - "<<x[1]<<")"<<"(x - "<<x[2]<<")"<<"(x - "<<x[3]<<")"<<setw(2)<<" / "<<"( "<<x[0]-x[1]<<" )"<<"( "<<x[0]-x[2]<<")"<<"( "<<x[0]-x[3]<<")"<<endl;
    cout<<"k=1: \n";
    cout<<"L1(x) = "<<setw(2)<<"(x - "<<x[0]<<")"<<"(x - "<<x[2]<<")"<<"(x - "<<x[3]<<")"<<setw(2)<<" / "<<"( "<<x[1]-x[0]<<" )"<<"( "<<x[1]-x[2]<<")"<<"( "<<x[1]-x[3]<<")"<<endl;
    cout<<"k=2: \n";
    cout<<"L2(x) = "<<setw(2)<<"(x - "<<x[0]<<")"<<"(x - "<<x[1]<<")"<<"(x - "<<x[3]<<")"<<setw(2)<<" / "<<"( "<<x[2]-x[0]<<" )"<<"( "<<x[2]-x[1]<<")"<<"( "<<x[2]-x[3]<<")"<<endl;
    cout<<"k=3: \n";
    cout<<"L2(x) = "<<setw(2)<<"(x - "<<x[0]<<")"<<"(x - "<<x[1]<<")"<<"(x - "<<x[2]<<")"<<setw(2)<<" / "<<"( "<<x[3]-x[0]<<" )"<<"( "<<x[3]-x[1]<<")"<<"( "<<x[3]-x[2]<<")"<<endl;

    cout<<"Expand the equation above"<<endl;
    cout<<" \n";
    cout<<"Applying the Lagrange Interpolation Formula:"<<endl;
    cout<<"Pk{x} = [Summation]fk(x)Lk(x)"<<endl;
    cout<<"P2{x} = f(x0)L0(x)+f(x1)L1(x)+f(x2)L2(x)+f(x3)L3(x)"<<endl;
    cout<<"= "<<setw(1)<<y[0]<<"L0(x) + "<<setw(1)<<y[1]<<"L1(x) + "<<setw(1)<<y[2]<<"L2(x) + "<<y[3]<<"L3(x) "<<endl;
    cout<<"Please expand the equation if it is necessary"<<endl;


    return 0;
}
