#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int sayi[500];
	for(int i=0;i<500;i++)
	{
		sayi[i]=rand() % (100 - 0+1)+0;
		cout<<sayi[i]<<endl;
	}
}
