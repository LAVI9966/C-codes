#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ans;
        for(int i=0;i<=nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
        
    }
};
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    Solution obj1;
    vector<int> ans = obj1.twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}