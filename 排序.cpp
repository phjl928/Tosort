//排序
//說明：輸入四個數字，程式會將四個數字排序好
#include<iostream> 
using namespace std;
int main()
{
	cout<<"輸入四個整數"<<endl;
	int n1,n2,n3,n4; 
	int c;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	
	if (n4<n3)
	{c=n4;
	 n4=n3;
	 n3=c;}
	if (n3<n2)
	{c=n3;
	 n3=n2;
	 n2=c;}
    if (n2<n1)
	{c=n2;
	 n2=n1;
	 n1=c;}
	 
	if(n4<n3)	
	{c=n4;
	 n4=n3;
	 n3=c;}
	if (n3<n2)
	{c=n3;
	 n3=n2;
	 n2=c;}
	 
    if(n4<n3)	
	{c=n4;
	 n4=n3;
	 n3=c;}
	
	cout<<"正確排序由小到大是"<<endl<<n1<<endl<<n2<<endl<<n3<<endl<<n4<<endl;
	
	
	return 0;
}

