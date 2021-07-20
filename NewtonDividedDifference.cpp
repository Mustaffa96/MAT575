// NewtonDividedDifference(For 5 number of Data only)
// Author: Mustaffa
// Date: 5 May 2021

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
    double xsum=0,ysum=0;                //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                        //calculate sigma(xi)
        ysum=ysum+y[i];                        //calculate sigma(yi)


    }
    double xy1,xy2,xy3,xy4,x1y1,x1y2,x1y3,x1y4,x2y1,x2y2,x2y3,x2y4,x3y1,x3y2,x3y3,x3y4;
        xy1 = (y[1]-y[0])/(x[1]-x[0]);
        xy2 = (y[2]-y[1])/(x[2]-x[1]);
        xy3 = (y[3]-y[2])/(x[3]-x[2]);
        xy4 = (y[4]-y[3])/(x[4]-x[3]);

        x1y1 = (xy2-xy1)/(x[2]-x[0]);
        x1y2 = (xy3-xy2)/(x[3]-x[1]);
        x1y3 = (xy4-xy3)/(x[2]-x[0]);
        x1y4 = 0;

        x2y1 = (x1y2-x1y1)/(x[3]-x[0]);
        x2y2 = (x1y3-x1y2)/(x[4]-x[1]);
        x2y3 = 0;
        x2y4 = 0;

        x3y1 = (x2y2-x2y1)/(x[4]-x[0]);
        x3y2 = 0;
        x3y3 = 0;
        x3y4 = 0;


    cout<<"-----------------------------------------------------------------\n";
    for (i=0;i<n;i++)

      cout<<"\n"<<endl;
      cout<<" 1DD = "<<xy1<<setw(3)<<" 2DD = "<<x1y1<<setw(3)<<" 3DD = "<<x2y1<<setw(3)<<" 4DD = "<<x3y1<<endl;
      cout<<" 1DD = "<<xy2<<setw(3)<<" 2DD = "<<x1y2<<setw(3)<<" 3DD = "<<x2y2<<setw(3)<<" 4DD = "<<x3y2<<endl;
      cout<<" 1DD = "<<xy3<<setw(3)<<" 2DD = "<<x1y3<<setw(3)<<" 3DD = "<<x2y3<<setw(3)<<" 4DD = "<<x3y3<<endl;
      cout<<" 1DD = "<<xy4<<setw(3)<<" 2DD = "<<x1y4<<setw(3)<<" 3DD = "<<x2y4<<setw(3)<<" 4DD = "<<x3y4<<endl;
      cout<<"\n"<<endl;

      cout<<"Newton forward Divided Difference Interpolation Formula for:"<<endl;
      cout<<" n=1: "<<setw(1)<<" P1(x)= "<<" "<<y[0]<<" + "<<xy1<<"(x-x0) + "<<setw(3)<<x1y1<<"(x-x0)(x-x1) + "<<setw(3)<<x2y1<<"(x-x0)(x-x1)(x-x2) + "<<setw(3)<<x3y1<<endl;
      cout<<" n=2: "<<setw(1)<<" P2(x)= "<<" "<<y[1]<<" + "<<xy2<<"(x-x1) + "<<setw(3)<<x1y2<<"(x-x1)(x-x2) + "<<setw(3)<<x2y2<<endl;
      cout<<" n=3: "<<setw(1)<<" P3(x)= "<<" "<<y[2]<<" + "<<xy3<<"(x-x2) + "<<setw(3)<<x1y3<<"(x-x2)(x-x3) "<<endl;
      cout<<"\n"<<endl;

      cout<<"Newton backward Divided Difference Interpolation Formula for:"<<endl;
      cout<<" n=5: "<<setw(1)<<" P5(x)= "<<" "<<y[4]<<" + "<<xy4<<"(x-x4) + "<<setw(3)<<x1y3<<"(x-x4)(x-x3) + "<<setw(3)<<x2y2<<"(x-x4)(x-x3)(x-x2) + "<<setw(3)<<x3y1<<endl;
      cout<<" n=4: "<<setw(1)<<" P4(x)= "<<" "<<y[3]<<" + "<<xy3<<"(x-x3) + "<<setw(3)<<x1y2<<"(x-x3)(x-x2) + "<<setw(3)<<x2y1<<"(x-x3)(x-x2)(x-x1) + "<<setw(3)<<endl;
      cout<<" n=3: "<<setw(1)<<" P5(x)= "<<" "<<y[2]<<" + "<<xy2<<"(x-x2) + "<<setw(3)<<x1y1<<"(x-x2)(x-x1)  "<<endl;
      cout<<"\n"<<endl;

    return 0;
}
