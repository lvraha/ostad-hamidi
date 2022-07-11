#include <iostream>
using namespace std;
void tmp()
{
	int arrye1[10];
	int arrye2[10];
	int temp ;
	for(int i=0 ;i<10;i++)
	{
		cin>>arrye1[i];
		cin>>arrye2[i];
	}
	for(int i=0;i<10;i++)
	{
		temp=arrye1[i];
		arrye1[i]=arrye2[i];
		arrye2[i]=temp;
		
	}
	for(int i=0;i<10;i++)
	{
		cout <<arrye1[i];
	}
	for(int i=0;i<10;i++)
	{
		cout <<arrye2[i];
	}
}
int main()
{
  cout << tmp ;
	return 0;
}