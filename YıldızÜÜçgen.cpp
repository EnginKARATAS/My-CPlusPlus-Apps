#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
for(int j=0;j<=32;j+=2)
	{

	for(int i=0;i<=32-j;i+=2)
		{
		cout<<" ";
		}				
	for(int i=-1;i<j;i++)
		{		
		cout<<"*";
		}
		
		cout<<endl;
					
	}


	
	
	
	return 0;}

