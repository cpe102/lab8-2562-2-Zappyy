#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan,pay,inter;
	int year=1;
	cout <<"Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin >>inter;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;
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
	double prev = loan*(inter/100);
	if(loan > pay)
		{
		while(loan+prev-pay>=0 && loan!=0)
			{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year++; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << prev;
		cout << setw(13) << left << loan+prev;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << loan+prev-pay;
		cout << "\n";
		loan = loan+prev-pay;
		prev = loan*(inter/100);
		if(loan+prev < pay)
		{
			pay = loan+prev;
		}
			}
		}else if(loan+prev < pay)
		{
		pay = loan+prev;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year++; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << prev;
		cout << setw(13) << left << loan+prev;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << loan+prev-pay;
		cout << "\n";
		loan = loan+prev-pay;
		prev = loan*(inter/100);
		}
	return 0;
}
