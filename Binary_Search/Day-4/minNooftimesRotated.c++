#include<bits/stdc++.h>
using namespace std;

int minRotatedno(vector<int>& arr){
    int n=arr.size();
    int ans=INT_MAX;
    int s=0,e=n-1,index=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[s]<=arr[mid]){
            if(ans>arr[s]){
                ans=arr[s];
                index=s;
            }
            s=mid+1;
        }else {
            if(ans>arr[mid]){
                ans=arr[mid];
                index=mid;
            }
            
            e=mid-1;
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=minRotatedno(arr);
    cout<<g<<endl;
}