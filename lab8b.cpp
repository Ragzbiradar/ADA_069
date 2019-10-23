#include<bits/stdc++.h>
using namespace std;
void heapconstruct(int arr[],int n){
    int s;
    for(int i=floor(n/2);i>=1;i--){
        int f=i;
        int ele=arr[f];
        bool heap=false;
        while(!heap && (2*f)<=n){
            s=2*f;
            if(s<n){
                if(arr[s]>arr[s+1]){
                    s=s+1;
                }
                if(ele<=arr[s]){
                    heap=true;
                }
                else{
                    arr[f]=arr[s];
                    f=s;

                }
            }

        }
        arr[f]=ele;
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i];
    }

}
int main(){
    int a[40],n;
    cin>>n;
    cout<<"enter array";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    heapconstruct(a,n);

}