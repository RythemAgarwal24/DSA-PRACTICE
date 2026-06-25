//kadanes algorithm
#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int maximumSum (vector<int>& nums){
  int currsum = 0, maxsum = INT_MIN;
  for(int val: nums){
    currsum += val;
    maxsum = max(currsum, maxsum);
    if(currsum<0){
      currsum = 0;
    }
  }
  return maxsum;
}

int main(){
  vector<int>nums = {3,-4,5,-1,7,8};

  int result = maximumSum(nums);
  cout<<"the maximum sum of the subarray is "<<result<<endl;

  return 0;
}
