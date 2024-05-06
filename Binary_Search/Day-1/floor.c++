#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>arr,int x){
    int s=0,e=arr.size()-1;
    int res=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]<=x){
            res=arr[mid];
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return res;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=floor(arr,target);
    cout<<g<<endl;
    return 0;
}