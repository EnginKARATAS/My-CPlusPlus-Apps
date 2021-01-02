#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int x;
void bubbleSort(int arr[],int n)
{
	if(n==1)
	return;
	
	for(int i=0;i<n-1;i++)//bu forun içinde küçükle büyüðün yerlerini deðiþtirdik
	{
		if(arr[i] > arr[i+1])
		{
		x=arr[i];
		arr[i+1]=arr[1];
		arr[1]=x;
		}
	}
  bubbleSort(arr,n-1);
}


void printarray(int arr[] , int n)
{
	for(int i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<endl;
		
		
	}	
	
	
}

int main(){
	int arr[]={64,34,25,12,22,11,90};
	int n =sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	cout<<printarray(arr,n);
	return 0;
	}
		
	return 0;}



