#include<iostream>
using namespace std;
int main()
{
	int matrix[100][100], m, n ,i ,j, sum=0;
	cout<<"Enter rows of matrix: ";
	cin>>m;
	cout<<"Enter columns of matrix: ";
	cin>>n;
 
	cout<<"Enter matrix elements: "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
 
	for(i=0;i<m;i++)
	{
			sum=sum+matrix[i][i];
	}
 
	cout<<"Sum of diagonal elements: "<<sum;
 
	return 0;	
}
