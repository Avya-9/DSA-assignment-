#include<iostream>
using namespace std;
int main()
{
	int x;
	int arr[7]={64,34,25,12,22,11,90};
	for(int k=0;k<5;k++){
		for(int i=0;i<6;i++){
		if (arr[i]>arr[i+1]){
			x=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=x;
		}
		}
	}
	
		for(int j=0;j<7;j++){
			cout<<arr[j]<<"   ";
		}
	}
