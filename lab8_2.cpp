#include<iostream>
using namespace std;
void printO(int N,int M)
{
	if(!(N <= 0 || M <= 0))
	{
		for (int y = 0;y < N;y++)
		{
			for (int x = 0;x < M;x++)
			{
				cout << "O";
			}
		cout << "\n";
		}
	}
	else
	{
		cout << "Invalid Input";
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
