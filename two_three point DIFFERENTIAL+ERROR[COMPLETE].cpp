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

void TwoForward(){
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
}

void TwoBackward(){
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
    cout<<"Using the backward difference two-point formula"<<endl;
    cout<<"f'(x) = f(x) - f(x-h) / h"<<endl;
    cout<<"f("<<a<<") = "<<"f("<<a<<") - f("<<a-h<<") / "<<h<<endl;
    cout<<"Please enter value f("<<a-h<<") : "<<endl;
    cin>>b;
    cout<<"Please enter value f("<<a<<") : "<<endl;
    cin>>c;

    d = (c-b) / h;
    cout<<"f("<<a<<") = "<<d<<endl;
}


void TriForward(){
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
}


void TriBackward(){
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
    cout<<"f'(x) = 3f(x) - 4f(x+h) + f(x+2h) / 2h"<<endl;
    cout<<"f("<<a<<") = "<<"3f("<<a<<") - 4f("<<a-h<<") + f("<<a - 2*h<<") / "<<2*h<<endl;
    cout<<"Please enter value f("<<a<<") : "<<endl;
    cin>>a1;
    cout<<"3f(x)= "<<3*a1<<endl;
    cout<<"Please enter value f("<<(a-h)<<") : "<<endl;
    cin>>b;
    cout<<"4f(x)= "<<4*b<<endl;
    cout<<"Please enter value f("<<a - 2*h<<") : "<<endl;
    cin>>c;

    a2 = 3 * a1;
    b2 = 4 * b;
    ab = a2 - b2;
    h2 = 2*h;
    d = (ab + c) / h2;
    cout<<"f("<<a<<") = "<<d<<endl;
}

void TriCentral(){
    int i,j,k,n;
    double h, a, b, c, d, h2;
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
        xsum=xsum+x[i];
        ysum=ysum+y[i];
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
    cout<<"f'(x) = f(x+h) - f(x-h) / 2h"<<endl;
    cout<<"f("<<a<<") = "<<"f("<<a+h<<") - f("<<a-h<<") / "<<2*h<<endl;
    cout<<"Please enter value f("<<a+h<<") : "<<endl;
    cin>>b;
    cout<<"Please enter value f("<<a-h<<") : "<<endl;
    cin>>c;

    h2 = 2*h;
    d = (b-c) / h2;
    cout<<"f("<<a<<") = "<<d<<endl;
}

void ErrorTwoFor(){
     #define f(x) 2/(pow(1+x,3)) //adjustable
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)| where |f(x2)|</=M"<<endl;
     cout<<"For "<<x0<<"< x <"<<x0+h<<" => "<<f(x0)<<" < f(x2) < "<<f(x0+h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")|"<<endl;
     e = (pow(h,2)*m);
     cout<<"E < "<<e<<endl;
}

void ErrorTwoBack(){
     #define f(x) 2/(pow(1+x,3)) //adjustable
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)| where |f(x2)|</=M"<<endl;
     cout<<"For "<<x0-h<<"< x <"<<x0<<" => "<<f(x0-h)<<" < f(x2) < "<<f(x0)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")|"<<endl;
     e = (pow(h,2)*m);
     cout<<"E < "<<e<<endl;
}

void ErrorTriFor(){
     #define f(x) 2/(pow(1+x,3))  //adjustable
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)/6| where |f(x3)|</=M"<<endl;
     cout<<"For "<<x0<<"< x <"<<x0+2*h<<" => "<<f(x0)<<" < f(x3) < "<<f(x0+2*h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")/3|"<<endl;
     e = (pow(h,2)*m)/3;
     cout<<"E < "<<e<<endl;

}

void ErrorTriBack(){
     #define f(x) 2/(pow(1+x,3)) //adjust based on question
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)/6| where |f(x3)|</=M"<<endl;
     cout<<"For "<<x0-2*h<<"< x <"<<x0<<" => "<<f(x0-2*h)<<" < f(x3) < "<<f(x0)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")/6|"<<endl;
     e = (pow(h,2)*m)/3;
     cout<<"E < "<<e<<endl;

}

void ErrorTriCent(){
     #define f(x) 2/(pow(1+x,3)) //adjustable
	 float x0, x, m, e, h;

     cout<<"Enter x value: ";
     cin>>x0;
     cout<<"Enter step size: ";
     cin>>h;


     cout<<"Given E</= |-h^2(M)/6| where |f(x3)|</=M"<<endl;
     cout<<"For "<<x0-h<<"< x <"<<x0+h<<" => "<<f(x0-h)<<" < f(x3) < "<<f(x0+h)<<endl;
     cout<<"Thus M will be:(insert the highest value)"<<endl;
     cin>>m;
     cout<<"E < |("<<h<<"^2)("<<m<<")/6|"<<endl;
     e = (pow(h,2)*m)/6;
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

		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
		cout<<"\n\t1. Two-point Forward Difference ";
		cout<<"\n\t2. Two-point Backward Difference ";
		cout<<"\n\t3. ERROR for Two-point Forward Difference (Please EDIT Equation in sourcecode)";
		cout<<"\n\t4. ERROR for Two-point Backward Difference (Please EDIT Equation in sourcecode)";
		cout<<"\n\t5. Three-point FORWARD Difference, not given [x0,x1]";
		cout<<"\n\t6. Three-point BACKWARD Difference, not given [x0,x1]";
		cout<<"\n\t7. Three-point CENTRAL Difference, not given [x0,x1]";
		cout<<"\n\t8. ERROR for THREE-point Forward Difference (Please EDIT Equation in sourcecode)";
		cout<<"\n\t9. ERROR for THREE-point Backward Difference (Please EDIT Equation in sourcecode)";
		cout<<"\n\t10. ERROR for THREE-point Central Difference (Please EDIT Equation in sourcecode)";
		cout<<"\n\t11. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
			        TwoForward();
					break;

			case 2: system("cls");
			        TwoBackward();
					break;

			case 3: system("cls");
			        ErrorTwoFor();
                    break;

            case 4: system("cls");
			        ErrorTwoBack();
					break;

            case 5: system("cls");
			        TriForward();
					break;

            case 6: system("cls");
			        TriBackward();
					break;

            case 7: system("cls");
			        TriCentral();
					break;

            case 8: system("cls");
			        ErrorTriFor();
					break;

            case 9: system("cls");
			        ErrorTriBack();
					break;

            case 10: system("cls");
			        ErrorTriCent();
					break;

            case 11:
					cout<<"\n\tGood Bye!";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
