#include<iostream>
using namespace std;

class myclass{
	public: int num,n,i,j;
	int max;
	public: int  max(int a[],int n){
		max=a[0];
		for(i=1;i<n;i++){
			if(max<a[i]){
				max=a[i];
				
			}
			
		}
		return max;
	  
	}
	
	
};
int main(){
	int arr[100],n,num,maximu;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the "
}