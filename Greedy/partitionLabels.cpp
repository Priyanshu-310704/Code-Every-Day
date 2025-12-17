//LEETCODE 763
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        // Fill the last occurence of every char in map
        for(int i=s.size()-1;i>=0;i--){
            if(!mp.count(s[i])){
                mp[s[i]]=i;
            }
        }

        vector<int>ans;
        int x=0;
        int last=mp[s[x]];
        for(int i=0;i<s.size();i++){
            if(i==last){// if i reaches the last index that means every char before that index is inside it.
                int num=last-x+1;
                ans.push_back(num);
                x=i+1;
                last=mp[s[x]];
            }
            if(mp[s[i]]>last){// this means that ith char is out of the last index so we will slide the last index to mp[s[i]].
                last=mp[s[i]];
            }

        }
        return ans;
    }
};