#include<iostream>
using namespace std;
class rotatesearch{
    int arr[100],k,n,pivot,pos;
public:
    void input(){
        cout<<"enter the size of array \n";
        cin>>n;
        cout<<"enter the array elements\n";
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0){
                pivot=arr[i];
                pos =i;
            }
            else {
                if(pivot>arr[i]){
                     pivot=arr[i];
                        pos =i;
                }
            }
        }
        cout<<"pivot \n"<<pivot<<"\npos ="<<pos<<"\n";
        cout<<"enter the value of key =";
        cin>>k;
    }
    void bnrysearch(){
        int start,e,mid,index=-1;
        if(arr[0]<=k){
            start=0;
            e=pos;
        }
        else{
            start=pos;
            e=n-1;
        }
        while(start<=e){
            mid=(start+e)/2;
            if(arr[mid]==k){
                index=mid;
                break;
            }
            else if(arr[mid]>k){
                if(e==0){e=n-1;}
                else {e =mid-1;}
            }
            else if(arr[mid]<k){
                if(start==n-1){start=0;}
                else {start=mid+1;}
            }
        }
        if(index==-1){
            cout<<"not found";
        }
        else {
            cout<<"fount at index  "<<index;
        }

    }
};
int main(){
    rotatesearch rs;
    rs.input();
    rs.bnrysearch();
    return  0;
    
}
