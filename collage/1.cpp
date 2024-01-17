#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]+nums[i+1]==target){
                cout<<i<<i+1;
            }
        }
        
    }
};
int main(){
    vector<int> a;
    int target=6;
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);
    //a.push_back(15);
    Solution n;
    n.twoSum(a,target);
}