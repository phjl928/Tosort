//�Ƨ�
//�����G��J�|�ӼƦr�A�{���|�N�|�ӼƦr�ƧǦn
#include<iostream> 
using namespace std;
int main()
{
	cout<<"��J�|�Ӿ��"<<endl;
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
	
	cout<<"���T�ƧǥѤp��j�O"<<endl<<n1<<endl<<n2<<endl<<n3<<endl<<n4<<endl;
	
	
	return 0;
}

