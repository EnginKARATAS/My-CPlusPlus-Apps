 
#include <iostream> 
#include<locale.h> 
 
using namespace std;  
int main()
{ 
setlocale(LC_ALL, "Turkish");
int t=0,n=5,j,i;

for(i=0 ;i<=n;i++)
{
	for( j=i ; j<=n ; j++ )
	{
	t=t+i+j;
	
	
	}



	
}

cout<<t;	
	


return 0 ;
}

