#include<bits/stdc++.h>
using namespace std;
int searchRotated(vector<int>arr,int x){
    int s=0,e=arr.size()-1;
    while(s<=e){
        int  mid=s+(e-s)/2;
        if(arr[mid]==x){
            return mid;
        }if(arr[s]==arr[mid] && arr[mid]==arr[e]){
            s+=1,e-=1;
            continue;
        }
        if(arr[s]<=arr[mid]){
            if(arr[s]<=x && x<=arr[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }else{
            if(arr[mid]<=x && x<=arr[e]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int  main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g=searchRotated(arr,x);
    cout<<g<<endl;
    return 0;
}