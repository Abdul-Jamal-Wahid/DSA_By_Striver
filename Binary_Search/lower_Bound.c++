#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr,int x){
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=x){
            return mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return arr.size();
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=lowerBound(arr,target);
    cout<<g<<endl;
    return 0;
}