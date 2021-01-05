#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{	
	
	double loan,rate,paid,PrevBalance,Interest,Total,Payment,NewBalance;
	int year=1;

	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>paid;
	

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	PrevBalance=loan;
	Interest = loan*(rate/100);
	NewBalance = loan;
	
	

	while(NewBalance>0)
	{	
		if(paid>loan)
		{	
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year;
			cout << setw(13) << left << PrevBalance;
			cout << setw(13) << left << Interest;
			Total = PrevBalance+Interest;
			cout << setw(13) << left << Total;
			Payment = Total;
			cout << setw(13) << left << Payment;
			NewBalance = 0;
			cout << setw(13) << left << NewBalance;
			cout << "\n";
		}
		
		else
		{
			year++;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year;
			PrevBalance=NewBalance;
			cout << setw(13) << left << PrevBalance;
			Interest=PrevBalance*(rate/100);
			cout << setw(13) << left << Interest;
			Total = PrevBalance+Interest;

			if(Total>=100)
			{
				cout << setw(13) << left << Total;
				Payment = paid;
				cout << setw(13) << left << Payment;
				NewBalance = Total - Payment;
				cout << setw(13) << left << NewBalance;
			}	
			else
			{
				cout << setw(13) << left << Total;
				Payment = Total;
				cout << setw(13) << left << Payment;
				NewBalance = Total - Payment;
				cout << setw(13) << left << NewBalance;
			}
		}
		cout << "\n";
		
	}

	return 0;
}
