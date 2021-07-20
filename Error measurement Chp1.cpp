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

void error()
{
    system("cls");
    double e, x , xb;
    cout<<"Insert exact value, x: "<<endl;
    cin>>x;
    cout<<"Insert approximate value, xbar: "<<endl;
    cin>>xb;
    e = x - xb;
    cout<<"Error = "<<e<<endl;
}

void AbsoluteError()
{
    double E, X , Xb;
    system("cls");
    cout<<"Insert exact value x: "<<endl;
    cin>>X;
    cout<<"Insert approximate value, xbar: "<<endl;
    cin>>Xb;
    E = X - Xb;
    cout<<"Absolute Error = "<<E<<endl;
}

void RelativeError()
{
    double e, x , xb, e1;
    e = x - xb;
    system("cls");
    cout<<"Insert exact value: "<<endl;
    cin>>x;
    cout<<"Insert approximate value: "<<endl;
    cin>>xb;
    e1 = e / x;
    cout<<"Relative Error = "<<e1<<endl;
}

void PercentageRelativeError()
{
    double e, x , xb, e1, e2;
    system("cls");
    cout<<"Insert exact value: "<<endl;
    cin>>x;
    cout<<"Insert approximate value: "<<endl;
    cin>>xb;
    e = x - xb;
    e1 = e / x;
    e2 = e1 * 100;
    cout<<"Relative Error = "<<e2<<"%"<<endl;
}

void FindApproximate()
{
    double sd, x, n1, n2;
    system("cls");
    cout<<"|(x-p)/x|<0.5x10^-sd"<<endl;
    cout<<"Insert significant digit value: "<<endl;
    cin>>sd;
    cout<<"Insert exact value given: "<<endl;
    cin>>x;
    cout<<"| ("<<x<<"- p) / "<<x<<"<5x10^"<<-sd<<endl;
    cout<<"-5x10^"<<-sd<<"<| ("<<x<<"- p) / "<<x<<"|<5x10^"<<-sd<<endl;
    cout<<"-5x10^"<<-sd<<" x "<<x<<"-"<<x<<"<p<"<<"-5x10^"<<-sd<<" x "<<x<<"+"<<x<<endl;
    n1=(5*pow(10,-sd) * x) - x;
    n2=(5*pow(10,-sd) * x) + x;
    cout<<n1<<"<p<"<<n2<<endl;
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
		cout<<"\n\t1. ERROR";
		cout<<"\n\t2. ABSOLUTE ERROR";
		cout<<"\n\t3. RELATIVE ERROR";
		cout<<"\n\t4. PERCENTAGE RELATIVE ERROR";
		cout<<"\n\t5. FIND APPROXIMATE BASED ON GIVEN EXACT VALUE AND SIGNIFICANT FIGURE";
		cout<<"\n\t6. EXIT";
		cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";

		cout<<"\n\tOption: ";
		cin>>option;

		switch(option)
		{
			case 1: system("cls");
			        error();
					break;

			case 2: system("cls");
			        AbsoluteError();
					break;

			case 3: system("cls");
			        RelativeError();
                    break;

            case 4: system("cls");
			        PercentageRelativeError();
					break;

            case 5: system("cls");
			        FindApproximate();
					break;

            case 6:
					cout<<"\n\tGood Bye!";
					exit(0);

			default :cout<<"Invalid Input...\n";
		}

	}
}
