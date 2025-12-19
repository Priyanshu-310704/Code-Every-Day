#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        vector<int> maxtriplet(3,0);
        for(auto v:triplets){
            if(v[0]<=target[0] && v[1]<=target[1] && v[2]<=target[2]){
                maxtriplet[0]=max(maxtriplet[0],v[0]);
                maxtriplet[1]=max(maxtriplet[1],v[1]);
                maxtriplet[2]=max(maxtriplet[2],v[2]);
            }
        }
        if(target[0]==maxtriplet[0]&&target[1]==maxtriplet[1]&&target[2]==maxtriplet[2])return true;
        return false;
    }
};