#include<iostream>
using namespace std;
#include<vector>
void combinationSum(int arr[],int n,vector<vector<int>> &ans,vector<int> v,int idx,int target){
    if(target<0){
        return;
    }
    if(target==0){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combinationSum(arr,n,ans,v,i,target-arr[i]);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    vector<vector<int>> ans;
    vector<int> v;
    combinationSum(arr,n,ans,v,0,target);
    for(auto v:ans){
        for(auto ele:v){
            cout<<ele<<" ";
        }cout<<endl;
    }
}