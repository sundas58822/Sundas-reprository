#include<iostream>
using namespace std;
int main(){
	int n;
	long factorial = 1.0;
	cout<<"Enter a poasitive integer:"<<endl;
	cin>>n;

	if(n<0)
	cout<<"Error! Factorial of a negative number doesnot exit";
	else{
		int i=1;
	do
		{
		factorial *=i;
		i++;
	}while(i<=n);
		cout<<"Factorial of "<<n<<" = " <<factorial;
	}
	return 0;	
}
