#include<iostream>
using namespace std;
class occurance{
    int n,arr[100],count=0,first=-1,last=-1,element;
 public:
        occurance(int a){
        n=a;//size
    }
    void input(){
        cout<<"enter sorted array";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"enter key element";
        cin>>element;//key element
        }
    void findoccurance(){
        int s=0,e=n,mid;
        while(s<=e){
            mid=(s+e)/2;
            if(arr[mid]<element){
                s=mid+1;
            }
            else if(arr[mid]>element){
                e=mid-1;
            }
            else if(arr[mid]==element){
                    first=mid;
                    last=mid;
                    for(int i=mid;i>=0;i--){
                        if(arr[i]==element){
                            count++;
                            first=i;
                        }


                    }
                    for(int j=mid+1;j<=n;j++){
                        if(arr[j]==element){
                                count++;
                                last=j;

                    }
            }
            break;
        }



    }
        cout<<first<<"\n"<<last<<"\n"<<count;
    }
};
int main(){
        int n;
        cout<<"enter the size";
        cin>>n;
        occurance o(n);
        o.input();
        o.findoccurance();
        return 0;

}
