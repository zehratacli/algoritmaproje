#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	 int matrisa[3][3];
	  int matrisb[3][3];
	  int toplam[3][3];
	  int carpim[3][3];
	 cout<<"3x3 A matrisininn elemanlarýný giriniz :"<<endl;
	 for(int i = 0; i < 3;i++)
	 {
	 	for(int j=0; j<3;j++)
	 	{
	 		cout<<"Eleman [" << i + 1 << "][" << j + 1 << "]: ";
	 		cin>>matrisa[i][j];
		 }
	 }
	 for (int i=0; i<3;i++)
	 {
	 	for( int j=0; j<3; j++)
	 	{
	 		cout<<matrisa[i][j]<<" ";
	 			
		 }
		 cout<<endl;
	 }
	 
	cout<<"3x3 B matrisinin elemanlarýný giriniz :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		   cout<<"Eleman [" << i + 1 << "][" << j + 1 << "]: ";
	 		cin>>matrisb[i][j];
		}

	}
	for (int i=0; i<3;i++)
	 {
	 	for( int j=0; j<3; j++)
	 	{
	 		cout<<matrisb[i][j]<<" ";
	 			
		 }
		 cout<<endl;
	 }
	 
	 cout<<"TOPLAM : "<<endl;
	 for(int i=0 ; i < 3 ;i++)
	 {
	 	
	 	for (int j=0 ; j<3 ; j++)
	 	{
	 		toplam[i][j]=matrisa[i][j]+matrisb[i][j];
	 		cout<<toplam[i][j]<<" ";
		 }
	  cout<<endl;
	 }
	 cout<<"CARPIM "<<endl;
	 for(int satir=0;satir<3;satir++)
	 {
	 	for(int i=0;i<3;i++)
	 	{
	 		int carp=0;
	 		for(int j=0;j<3;j++)
	 		{
	 			carp +=matrisa[satir][j]*matrisb[j][i];
			 }
	 		cout<<carp<<" ";
	 		
	 		
		 }
		 cout<<endl;
	 	
	 }
          
	 //deta yapamadým
}
