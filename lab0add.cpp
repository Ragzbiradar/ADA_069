#include<iostream>
#include<stdio.h>
using namespace std;
class searchof{
    int element,n;
    int arr[100];
public:
    void input(){
    int i=0;
    cin>>n;
    cin>>element;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    }
    int searchof1(){
        bool flag=false;
        int pos;
        for(int i=0;i<n;i++){
            if(arr[i]==element){
                flag=true;
                pos=i;
                break;
            }
            else{
                pos=-1;
            }
        }
        return pos;
    }


};
int main(){
    int t,position;
    searchof s;
    freopen("input.txt","r",
            stdin);
    cin>>t;
    while(t--){
        s.input();
        position=s.searchof1();
        if(position==-1){
            cout<<"-1"<<"\n";
        }
        else{
            cout<<"1\n";
        }
    }
    return 0;
}
