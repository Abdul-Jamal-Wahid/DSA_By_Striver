#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>arr,int target){
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=binary(arr,target);
    cout<<g<<endl;
    return 0;
}