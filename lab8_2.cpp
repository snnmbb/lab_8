#include<iostream>
using namespace std;

void printO(int M,int N)
{
	if(M>0&&N>0)
	{
		for(int m = 0; m<M ; m++)
		{
			for(int n = 0; n<N ; n++)
			{
				cout<<"O";
			}
			cout<<"\n";
		}
	}
	else
	{
		cout<<"Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

