#include<iostream>
using namespace std;
#include<vector>
// #include<climits>
void subArray(int arr[],int &n,vector<int> v,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
        return;
    }
    subArray(arr,n,v,idx+1);
    if(v.size()==0||v[v.size()-1]==arr[idx-1]){
        v.push_back(arr[idx]);
        subArray(arr,n,v,idx+1);
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Iterative method
    // int sum=0;  
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int mini=INT_MAX;
    //         for(int k=i;k<=j;k++){
    //             // cout<<arr[k]<<" ";
    //             mini=min(mini,arr[k]);
    //         }
    //         sum+=mini;
    //         cout<<mini<<endl;
    //     }
    // }
    // cout<<"sum : "<<sum;
    subArray(arr,n,{},0);

}