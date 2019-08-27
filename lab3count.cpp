#include<iostream>
using namespace std;
class sort1{
    public:
    int arr[100],c[100],low,high,n;
    void input(){
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the unsorted element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    low=0;
    high=n;
    }
};
class selesort :public sort1{
    int c[],counts=0;
    public:
        void selesort1(){
            for(int i=0;i<n;i++){
                c[i]=arr[i];
            }
            cout<<"********before";
        int i,j,temp;
        for( i=0;i<=n-2;i++){
            int min=i;
            for(j=i+1;j<=n-1;j++){
                if(c[j]<c[min]){
                    min=j;
                    counts++;
                }
                }
            temp=c[i];
                c[i]=c[min];
                c[min]=temp;
                cout<<"after\n";
        }
        cout<<"the number of comparisons in selection sort="<<counts<<"\n";
}
};
class bblsort :public sort1{
    int c[],counts=0;
    public:
void bblsort1(){
     for(int i=0;i<n;i++){
                c[i]=arr[i];}
        int i,j,temp;
        for(i=0;i<=n-2;i++){
            for(j=0;j<=n-2-i;j++){
                if(c[j+1]<c[j]){
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;
                    counts++;
                }
            }
        }
        cout<<"number of comparisons in bubble sort "<<counts<<"\n";
        }
};
class mergesort  :public sort1{
    int cc[],counts=0;
      int combine(int a[],int low,int mid,int high){
           for(int i=0;i<n;i++){
                cc[i]=a[i];}
     int c[100];
     int i=low,j=mid+1,k=low;
     while(i<=mid && j<=high){
        if(cc[i]<cc[j]){
            c[k++]=cc[i++];
            counts++;

        }
        else{
            c[k++]=cc[j++];
        }
     }
     if(i>mid){
        while(j<=high){
            c[k++]=cc[j++];
        }
     }
     if(j>high){
        while(i<=mid){
            c[k++]=cc[i++];
        }
     }
     for(int t=0;t<=high;t++){
        a[t]=c[t];
     }
     return counts;
     }
public:     void split(int a[],int low,int high){
    if(low<high){
     int  mid=((low+high)/2);
     split(a,low,mid);
     split(a,mid+1,high);
    int counts= combine(a,low,mid,high);
     }
     cout<<"number of comparisons in bubble sort "<<counts<<"\n";}
};
int main(){
    sort1 s1;
    selesort ss;
    bblsort bs;
    mergesort ms;
    s1.input();
    //ss.selesort1();
    //bs.bblsort1();
    ms.split(s1.arr,s1.low,s1.high);
    return  0;
}
