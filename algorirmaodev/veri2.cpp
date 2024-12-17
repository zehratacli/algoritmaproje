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
	sayi[i]=rand() % (35 - 25+1)+25;
	cout<<sayi[i]<<endl;
	}
}
