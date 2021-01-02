#include <iostream>
using namespace std ;

int a,b,x;


int main (){
cout<<"ne kadar genis bir yilan olsun";
cin>>a;
cout<<"ne kadar uzun bir yilan olsun";
cin>>b;


do{

for(int i=0;i<=a;i++){
	for(int k=a;k>=k-k+i;k--)
	{
		cout<<" ";			
	}
	cout<<"*"<<endl;

	
}	

		
for(int i=1;i<=a;i++)

{
	
	
	for(int j=0 ; j<i ; j++)
	{
	cout<<" ";
	}
	
		for(int k=a;k>=a;k--)
	{
		cout<<"*";			
	}
cout<<endl;	
}
x--;	
}

while(x!=0);

return 0;}
