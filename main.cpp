#include<iostream>
using namespace std;

class maxof{
	int arr[100],size,i;
	public: 
	void input(){
		 cout<<"enter the size\n";
		 cin>>size;
		 cout<<"enter the elements\n";
		 for(i=0;i<size;i++){
		cin>>arr[i];
	    }
	}
	int  max(){
		int maxi;
		maxi=arr[0]; 
		for(i=1;i<size;i++){
			if(maxi<arr[i]){
				maxi=arr[i];
				
			}
		}
		return maxi;
	}
};
int main(){
	maxof m;
	int maximum;
	m.input();
	maximum=m.max();
	cout<<"largest is "<<maximum;
}

