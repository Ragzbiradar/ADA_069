#include<iostream>
using namespace std;

class maxof{
	
	int maxi;
	public: int  max(int a[],int n){
		int i;
		for(i=1;i<n;i++){
			if(maxi<a[i]){
				maxi=a[i];
				
			}
			
		}
		return maxi;
	  
	}
	
	
};
int main(){
	maxof m;
	int arr[100],n,maximum,i;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the elements ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	maximum=m.max(arr,n);
	cout<<"maximum is "<<maximum;
	
}
