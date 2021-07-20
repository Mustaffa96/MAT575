#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include <cstdlib>
#include<math.h>

using namespace std;

void Trapezoidal(){
    int i,j,k,n;
    double h;
    cout<<"\nEnter the no. of subinterval, h:\n";        //To find the size of arrays
    cin>>h;
    cout<<"\nEnter the no. of data pairs to be entered or ordinates(please add 1 is lower limit start with zero):\n";        //To find the size of arrays
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

    a = h / 2;
    d = a * b;


    cout<<"S.no"<<setw(5)<<"x"<<setw(19)<<"y"<<setw(16)<<"C"<<setw(16)<<"YxC"<<setw(16)<<endl;
    cout<<"-----------------------------------------------------------------\n";
    for (i=0;i<n;i++)
        cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<c[i]<<setw(18)<<y[i]*c[i]<<endl;    //print a table of x,y(obs.) and y(fit.)
    cout<<"\nThe trapezoidal Rule formula:\n\n"<<"h/2(f0+2f1+2f2+2f3+etc...)"<<endl;        //print the formula
    cout<<"\nPlease insert total y*coefficient:\n\n"<<endl;        //print the question ask user to insert yc calculated manually
    cin>>b;
    cout<<"\nThe trapezoidal Rule formula:\n\n"<<a<<"["<<b<<"]"<<endl;        //print the value
    cout<<"\nThe answer is:\n\n"<<a*b<<endl;        //print the value

}

void error(){
	 float  e, n, f1, x, a, b, c, d;

     cout<<"Enter lower value: ";
     cin>>a;
     cout<<"Enter upper value: ";
     cin>>b;
     cout<<"Enter subintervals, n: ";
     cin>>n;
     cout<<"Step 1: Identify the interval, [a,b]"<<endl;
     cout<<"["<<a<<","<<b<<"]"<<endl;
     cout<<"Step 2: Identify the given information"<<endl;
     cout<<"n="<<n<<endl;
     cout<<"Step 3: Compute the second derivatives; f''(x)"<<endl;
     cout<<"f'(x)=?"<<endl;
     cout<<"f''(x)=?"<<endl;

     //f1=f(x);
     cout<<"Given Ea= |((b-a)^3/-12n^2)f''(e)| where f''(e) is the second derivatives that have integrated and divide by(b-a)"<<endl;
     cout<<"Please enter the f''(e) value: ";
     cin>>f1;
     cout<<"Ea= |(("<<b<<"-"<<a<<")^3/-12("<<n<<")^2("<<f1<<")|"<<endl;
     c = b-a;
     d = 12*pow(n,2);
     e = (pow(c,3) / d) * f1;
     cout<<"Ea = "<<e<<endl;


}

int main(int argc, char *argv[])
{
	system("cls");
  	cout<<"\t\t\t\t*\t*";
  	cout<<"\t\t\t\t**\t**";
   	cout<<"\t\t\t\t***\t***";
   	cout<<"\t\t\t\t****\t****";
   	cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   	cout<<"\t\t\t\t*******\t*******";
   	cout<<"\t\t\t\t*******\t*******";
   	cout<<"\t\t\t\t******\t******";
   	cout<<"\t\t\t\t*****\t*****";
   	cout<<"\t\t\t\t****\t****";
   	cout<<"\t\t\t\t***\t***";
   	cout<<"\t\t\t\t**\t**";
   	cout<<"\t\t\t\t*\t*";
	int option;

	for(;;)
	{

		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
		cout<<"\n\t1. Trapezoidal Calculator";
		cout<<"\n\t2. ERROR for Trapezoidal Rule";
		cout<<"\n\t3. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
			        Trapezoidal();
					break;

			case 2: system("cls");
			        error();
					break;

            case 3:
					cout<<"\n\tGood Bye!";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
