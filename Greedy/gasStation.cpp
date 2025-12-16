#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=-1;
        int TotalGas=0;
        int TotalCost=0;
        for(int i=0;i<gas.size();i++)TotalGas+=gas[i];
        for(int i=0;i<cost.size();i++)TotalCost+=cost[i];
        if(TotalGas<TotalCost)return start;//If total gas is less then Total Cost there is no possible way that it will create a circular loop so return -1
        start=0; // sure that there will be a solution
        int tank=0;
        for(int i=0;i<gas.size();i++){
            tank+=gas[i]-cost[i];
            if(tank<0){// if negative it can't be the starting point
                tank=0;
                start=i+1;
            }
        }
        return start;
    }
};