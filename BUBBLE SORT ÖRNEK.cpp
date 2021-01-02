#include <iostream>

//Bubble sort
int main(int argc, char** argv) {
	int a[5]={15,52,85,96,86};
	int n=5;
	int i,j;
	int temp;
	for(i=0;i<n-1;i++){
		for(j=(i+1);j<n;j++)
		{
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	for(i=0;i<5;i++){
	cout<<endl<<a[i];
	}
	return 0;
}
