#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(NULL));
	float sayilar[500];
	for (int i=0;i<500;i++)
	{
	 sayilar[i]=(rand() % (100 - 0+1)+0)+((float)rand()/(float)RAND_MAX);
	 cout<<sayilar[i]<<endl;
	}	
}
