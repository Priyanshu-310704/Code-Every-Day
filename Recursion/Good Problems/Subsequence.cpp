#include<iostream>
using namespace std;
#include<vector>
void findSubsequence(int arr[],int &n,int k,vector<int> ans,int idx){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
        return;
    }
    if(ans.size()+n-idx<k)return;
    findSubsequence(arr,n,k,ans,idx+1);
    ans.push_back(arr[idx]);
    findSubsequence(arr,n,k,ans,idx+1);

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int>ans;
    findSubsequence(arr,n,k,ans,0);
}