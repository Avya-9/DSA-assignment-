#include<iostream>
using namespace std;
int main()
{
	int l,r;
	int num, mid;
	int arr[7]={3,4,5,6,7,8,9};
	cout<<"enter number";
	cin>>num;
	l=0;
	r=6;
	while(l<=r){
	mid=(l+r)/2;
		if(arr[mid]==num){
		cout<<"number found at"<<mid+1;
		break;
	}
	if(arr[mid]>num){
		r=mid;
	
	}
	else{
		l=mid;
		}
	}
	
	
}
