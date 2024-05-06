#include<bits/stdc++.h>
using namespace std;
int firstIndex(vector<int>arr,int elem){
    int res=-1;
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==elem){
            res=mid;
            e=mid-1;
        }else {
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return res;
}
int lastIndex(vector<int>arr,int elem){
    int res=-1;
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==elem){
            res=mid;
            s=mid+1;
        }else {
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
    int g=lastIndex(arr,target)-firstIndex(arr,target);
    cout<<g+1<<endl;
    return 0;
}