#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include <cstdlib>
#include<math.h>
using std::cout;
using std::endl;
using std::cin;
using std::setw;
using namespace std;

void RichardTab(){
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
}

void RichTriCent(){
     #define f(x) (1+x)*exp(x);
	 /* Declaring required variables */
	 float h1, h2, x1, f1, a, b, c, d, fa, fb, a1, b1, h3, h4, h5, fc, fd;
	 int step = 1;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 up:
	 cout<<"Enter h1: ";
     cin>>h1;
     cout<<"Enter h2: ";
     cin>>h2;
     cout<<"Enter value to compute, x: ";
     cin>>x1;

	 /* Calculating Functional Value */
	 f1 = f(x1);

     a = f(x1 + h1);
     a1 = f(x1 - h1);
     b = f(x1 + h2);
     b1 = f(x1 - h2);
     c = 2 * h1;
     d = 2 * h2;

     fa = (a - a1) / c;
     fb = (b - b1) / d;

   /* Implementing three-point central difference */
     cout<< endl<<"****************"<< endl;
	 cout<<"three-point central difference Method"<< endl;
	 cout<<"*************************************"<< endl;
	 cout<<"\n"<<endl;

	 cout<<"Using three-point central difference formula,"<<endl;
	 cout<<"h = "<<h1<<endl;
	 cout<<"f("<<x1<<") = "<<a<<" - "<<a1<<" / 2("<<h1<<")"<<endl;
	 cout<<"f("<<x1<<") = "<<fa<<endl;

	 cout<<"h = "<<h2<<endl;
	 cout<<"f("<<x1<<") = "<<b<<" - "<<b1<<" / 2("<<h2<<")"<<endl;
	 cout<<"f("<<x1<<") = "<<fb<<endl;

     h3 = h1 / h2;
     h4 = pow(h3,2);
     h5 = h4 - 1;

     fc = fb - fa;
     fd = fb + (fc/h5);

     cout<<"\n"<<endl;
	 cout<<"Applying Richardson extrapolation,,"<<endl;
	 cout<<"f("<<x1<<") = R2+((R2-R1)/(h2/h1)^2 - 1)"<<endl;
	 cout<<"f("<<x1<<") = "<<fb<<"+"<<fc<<"/"<<h4<<" - 1"<<endl;
	 cout<<"f("<<x1<<") = "<<fd<<endl;

}

void error(){
	 #define f(x) sin(x)  //adjustable but put 5x differentiate equation
	 float x0, x, m, e, h;

     cout<<"Enter lower value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^4(M)/30| where |f5'(x)|</=M"<<endl;
     cout<<"For "<<x0-2*h<<"< x <"<<x0+2*h<<" => "<<f(x0-2*h)<<" < f5'(x) < "<<f(x0+2*h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^4)("<<m<<")/30|"<<endl;
     e = (pow(h,4)*m)/30;
     cout<<"E < "<<e<<endl;
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

		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
		cout<<"\n\t1. Richardson Extrapolation by table given";
		cout<<"\n\t2. Richardson Extrapolation by refer to 3 point Central Difference";
		cout<<"\n\t3. ERROR for Richarson Extrapolation (need to edit f(x) in sourcecode)";
		cout<<"\n\t4. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
			        RichardTab();
					break;

			case 2: system("cls");
			        RichTriCent();
					break;

			case 3: system("cls");
			        error();
                    break;

            case 4:
					cout<<"\n\tGood Bye!";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
