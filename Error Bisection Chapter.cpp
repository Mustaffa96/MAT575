#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include <cstdlib>
#include<math.h>
using std::cout;
using std::endl;
using std::cin;

void error()
{
    system("cls");
    double a, b, n, e;
    cout<<"Insert minimum value, a: "<<endl;
    cin>>a;
    cout<<"Insert maximum value, b: "<<endl;
    cin>>b;
    cout<<"Insert iteration, n: "<<endl;
    cin>>n;
    e = (b - a)/pow(2,n);
    cout<<"Error = "<<e<<endl;
}

void numIteration()
{
    double a, b, x, n;
    cout<<"insert minimum value, a: "<<endl;
    cin>>a;
    cout<<"insert maximum value, b: "<<endl;
    cin>>b;
    cout<<"\nidentify the interval: ["<<a<<","<<b<<"]"<<endl;
    cout<<"insert significant figure, 10^-x, x: "<<endl;
    cin>>x;
    cout<<"\nSolve for n: "<<endl;
    cout<<"\nE<(b-a)/2^n "<<endl;
    cout<<"\nE<10^"<<-x<<endl;
    cout<<"\n| "<<b<<"-"<<a<<"/2^n|<10^-"<<x<<endl;
    cout<<"\n2^n>"<<b-a<<"/"<<"10^"<<-x<<endl;
    cout<<"\n2^n>"<<(b-a)/pow(10,-x)<<endl;
    cout<<"\nnlog2>log"<<(b-a)/pow(10,-x)<<endl;
    n=log10((b-a)/pow(10,x))/log10(2);
    cout<<"\nn> "<<n<<endl;
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
		cout<<"\n\t1. Bisection Error";
		cout<<"\n\t2. Determine approximately how many iterations with 10^n accuracy";
		cout<<"\n\t3. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
			        error();
					break;

			case 2: system("cls");
			        numIteration();
					break;

            case 3:
					cout<<"\n\tGood Bye!";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
