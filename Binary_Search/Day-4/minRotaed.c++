#include<bits/stdc++.h>
using namespace std;

int minRotated(vector<int>& arr){
    int n=arr.size();
    int ans=INT_MAX;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[s]<=arr[mid]){
            ans=min(ans,arr[s]);
            s=mid+1;
        }else {
            ans=min(ans,arr[mid]);
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=minRotated(arr);
    cout<<g<<endl;
}