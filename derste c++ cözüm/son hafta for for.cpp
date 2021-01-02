#include <iostream>
using namespace std;

int main(){
	int ci,j,i;//tanýmlamalar
	const int c=3,r=5;
	int m[r][c]={{3,5,4},{3,2,1},{5,3,4},{2,1,3},{4,4,4}};
	int a[r]={0,0,0,0,0};
	int b[c]={3,5,4};
	ci=0;
	
	for ( i=0;i<r;i++){//iþlem döngüsü
		for( j=0;j<c;j++)
			{			
			a[i]=a[i]+m[i][j];  b[j]=b[j]+m[i][j];
			}
		a[i]=a[i]/c;
	}
	
	
	
	for(j=0;j<c;j++)//c iþlem döngüsü
		{
		ci=ci+b[j]; ci=ci/c;
		}
		
		
		
	for(i=0;i<r;i++){//m matrisi ekrana yazdýr
		for(j=0;j<c;j++)
		{
			cout<<m[i][j]<<" , ";			
		}
	cout<<"\t"<<a[i]<<endl;
	}
	 
	 
	 
	for(j=0;j<c;j++)//b dizisini ekrana yazdýr
		{
			cout<<"B["<< j<< "] ="<<b[j]<<" , ";
		}
	cout<<"\t"<<endl;

	
	
	
	return 0;
}
