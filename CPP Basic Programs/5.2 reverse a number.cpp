#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int r=0;
	while(n>0){
		int lastdigit=n%10;
		r=r*10+lastdigit;
		n=n/10;
	}
	cout<<r;
	return 0;
}