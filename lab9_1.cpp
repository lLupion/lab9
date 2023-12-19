#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, inter, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i=1;
	double NewB,interest,Total;
	while (NewB != 0)
	{
		interest = loan*(inter/100);
		Total = interest+loan;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << Total;
		if(Total>=pay){
			cout << setw(13) << left << pay;
			cout << setw(13) << left << Total-pay;
			cout << "\n";
			i++;
			NewB = Total-pay;
			loan = NewB;
		}else{
			pay = Total;
			cout << setw(13) << left << Total;
			cout << setw(13) << left << Total-pay;
			cout << "\n";
			break;
		}
		

	
		
	}
	
		
	
	return 0;
}
