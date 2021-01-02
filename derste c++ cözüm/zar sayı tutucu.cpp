#include <iostream>
using namespace std;

int a,loop,x;
int dizi[6]={0,0,0,0,0,0};



int main(){
a:
cout<<"lutfen attiginiz zarin sonuclarinin kac tane oldugunu soyleyin\n"<<
"program sizin hangi sayidan kac tane attiginizi belirleyecek\n...";
cin>>loop;
	
while(loop!=0){
	
	
cout<<"lufen sayilarinizi girniniz\n";
cin>>x;


if(x>6 || x<0)
	{
	cout<<"zarin sonucu "<<x<<" gelebilirmi?\n\n\n";
	goto a;
	}




for(a=0;a<=5;a++)
	{
		if (x == a+1)
		{
			dizi[a]++;
		}
	}
	
loop--;}



for(a=1;a<=6;a++)
cout<<"dizinin "<<a<<".elemani "<<dizi[a-1]<<" tanedir\n";


return 0;}
