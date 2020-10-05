#include<iostream>
using namespace std;
int main()
{
	cout<<"Basit Hesap Makinesi  "<<endl;
	cout<<" islemler: "<<endl;
	cout<<"     "<<endl;
	cout<<"1.topla"<<endl;
	cout<<"2.cikar"<<endl;
	cout<<"3.carp"<<endl;
	cout<<"4.bol"<<endl;
	int sayi1,sayi2,islem;
	cout<<" 1.sayi gir: ";
	cin>>sayi1;
	cout<<" 2.sayi gir: ";
	cin>>sayi2;	
	cout<<" islem gir: ";
	cin>>islem;	
	switch(islem)
	{
		case 1:
			cout<<"snc: "<<sayi1+sayi2<<endl;
			break;
	    
	    case 2:
			cout<<"snc: "<<sayi1-sayi2<<endl;
			break;
		
		case 3:
			cout<<"snc: "<<sayi1*sayi2<<endl;
			break;
		
		case 4:
			cout<<"snc: "<<sayi1/sayi2<<endl;
			break;		
	}
	return 0;
}
