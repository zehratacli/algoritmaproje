#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayilar[]={1,5,6,4,8,5,2,9,2,5};
	int enbuyuk = sayilar[0];
    int enkucuk = sayilar[0];
	int toplam=0;
	int boyut=10;
	int tekDizi[boyut], ciftDizi[boyut]; 
    int tekSayac = 0, ciftSayac = 0; 
	
     
    for (int i = 0; i < 10; i++) {
        toplam += sayilar[i]; 
    }
    

    cout << "Dizinin ortalamasý " << toplam/10 << endl;
	    
	    
	    for(int i=1;i<10;i++)
	    {
	    	if(sayilar[i] > enbuyuk)
	    	{
	    		enbuyuk=sayilar[i];
			}
			if(sayilar[i]<enkucuk)
			{
				enkucuk=sayilar[i];
			}
		}
		cout<<"En büyük sayi : "<<enbuyuk<<endl;
		cout<<"En küçük sayi : "<<enkucuk<<endl;
		
		
		
		for (int i = 0; i < boyut; i++) 
		{
        if (sayilar[i] % 2 == 0) 
		{
            ciftDizi[ciftSayac] = sayilar[i];
            ciftSayac++;
        }
	     else {
            tekDizi[tekSayac] = sayilar[i];
            tekSayac++;
       		 }
    	}
    	
    	cout << "Tek sayilar: ";
    	for (int i = 0; i < tekSayac; i++) 
		{
        cout << tekDizi[i] << " ";
    	}	
    	cout << endl;

    	cout << "Cift sayilar: ";
    	for (int i = 0; i < ciftSayac; i++)
		 {
        cout << ciftDizi[i] << " ";
    	}
    	cout << endl;
		
		return 0;
	   
}
