#include<iostream>
using namespace std;
class sqrtsearch{
	int s=0,e,mid,n,sqrt;
	public:
	sqrtsearch(int a){
		n=a;
		e=n;
	}
	int square(){
		while(s<=e){
			mid=(s+e)/2;
			int sqr=mid*mid;
			if(sqr==n){
				sqrt=mid;
				break;
			}
			else if (sqr<n){
				s=mid+1;
				sqrt=mid;
			}
			else if (sqr>n){
				e=mid-1;
			}
		}
		return sqrt;
	}
};
int main(){
	int number,root;
	cout<<"enter the number";
	cin>>number;
	sqrtsearch s(number);
	root=s.square();
	cout<<"root is "<<root;
	return 0;
	
}
