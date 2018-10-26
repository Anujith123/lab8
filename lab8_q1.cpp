// including library
#include<iostream> 

// using namespace
using namespace std;

int sum(int arr[20],int n){
	
	int s=0;
	for(int i=0;i<n;i++)
	{
		//insert the number
		cout<<"Enter number to be added: "<<endl;
		cin>>arr[i];
		//keeps adding values to variable s
		s=s+arr[i];  
	}

	return s;
}

int main()
{
	//variable declaration
	int n,arr[20];   
	//asks user for the size of array
	cout<<"Enter array size: "<<endl;
	cin>>n;
	//calling function
	cout<<"Sum: "<<sum(arr,n)<<endl;      
	//closing program
	return 0;
}
