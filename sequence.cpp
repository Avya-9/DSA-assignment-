#include<iostream>
using namespace std;
int main(){
	int arr[8]={1,2,3,4,6,7,8,9};
	int l,r,mid;
	/*for(int i=0;i<8;i++){
		if(arr[i]!=i+1){
			cout<<i+1<<" not present";
			break;
		}
	}*/
	l=0;
	r=6;
	while(l<=r){
	mid=(l+r)/2;
		if(arr[mid]!=mid+1){
		cout<<mid+1<<"number not found ";
		break;
	}
	if(arr[mid]>mid+1){
		r=mid;

	}
	else{
		l=mid;
		}
	}
}
