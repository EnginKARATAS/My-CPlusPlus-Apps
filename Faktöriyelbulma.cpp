#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
setlocale (LC_ALL
,"Turkish");
long x,i,sayi;
long fakt=1;
cout<<"kaç faktöriyel olsun?"<<endl;
cin>>sayi;
for(i=0;i<sayi;sayi--)
{

	fakt=fakt*sayi;
	
}
cout<<fakt;


	
	
return 0;}
    
	
	
	
	
	







