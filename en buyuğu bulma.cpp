// en buyugunu bulma 
#include <iostream>
 
using namespace std; 

main()
{

int i,x; 
int a[5]; 


for(i=0;i<5;i++){

	cin >> a[i]; 
	x=a[0]; }
for (i=1;i<5;i++) 
if(x<a[i]) x=a[i]; 
cout << endl; 
cout << "En Buyuk Sayi= " << x << endl; 
return 0; 
} 
