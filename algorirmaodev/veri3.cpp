#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int sayi[500],ort;
	for(int i=0;i<500;i++)
	{
		sayi[i]=rand() % (35 - 10+1)+10;
		cout<<sayi[i]<<endl;
		ort +=sayi[i];
	}	
	if(20<=ort && 30>=ort)
		{
			cout<<"Ortalama:  "<<ort;
		}
		else{
			 cout<<"Ortalama 20 ve 30 aralýðýnda olmalý";
		}	
}
