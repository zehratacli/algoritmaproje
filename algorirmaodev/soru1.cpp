#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{ 
	int cirolar[5][12];
	int ortciro[5],yil;
	srand(time(NULL));
	cout<<"Ortalama ciro"<<endl;
	for(int i=0; i<5; i++)
	{
		int toplam = 0;
		for(int j=0;j<12;j++)
		{
			cirolar[i][j]=rand()%(5000 - 100 + 1)+100;
		    toplam += cirolar[i][j];
		}
		ortciro[i]=toplam/12;
		cout<<i + 1<<".yil "<<ortciro[i]<<endl;		
	}
	cout<<"bir yil giriniz : "<<endl;
	cin>>yil;
	yil -=1;
	for (int i=0;i<12;i++)
	{
		if(ortciro[yil]<cirolar[yil][i])
		{
			cout<<i+1<<". ay :"<<cirolar[yil][i]<<endl;
		}
	}
	
	cout<<"bir yil giriniz : "<<endl;
	cin>>yil;
	yil -=1;
	int toplam = 0;	
	int ort1,ort2,ort3,ort4;
	for (int i = 0; i < 12; i++)
	{
		if (i < 3) 
		{
		   toplam += cirolar[yil][i]; 
		   ort1=toplam/4;	
		} 
		else if (3<=i && i<6)
		{
			toplam += cirolar[yil][i];
			ort2=toplam/4;
		}
		else if(6<=i && i<9)
		{
			toplam += cirolar[yil][i];
			ort3=toplam/4;
		}
		else if(9 <= i && i<12 )
		{
			toplam += cirolar[yil][i];
			ort4=toplam/4;
		}	
	}
	cout<<"1.ceyrek "<<ort1<<endl;
	cout<<"2.ceyrek "<<ort2<<endl;
	cout<<"3.ceyrek "<<ort3<<endl;
	cout<<"4.ceyrek "<<ort4<<endl;
	
	
} 
