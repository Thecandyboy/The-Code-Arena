#include <deque>
#include <vector>
#include <iostream>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        int n = nums.size();
        std::deque <int> que;

        int out_s = n - k + 1;
        std::vector<int> max_sl_win;
        
        for (int i=0;i<k;i++){
            // add the first que first element largest
            // pop back last elements until last element larger than new
            while(!que.empty() && nums[que.back()] < nums[i]){
                que.pop_back();
            }
            que.push_back(i);
        }
        max_sl_win.push_back(nums[que.front()]);

        for (int i=k;i<n;i++){
            // if largest element is first then remove delete the front element
            if (que.front() == i-k){
                que.pop_front();
            }
            while(!que.empty() && nums[que.back()] < nums[i]){
                que.pop_back();
            }
            que.push_back(i);
            max_sl_win.push_back(nums[que.front()]);
        }
        
        
        return max_sl_win;
    }
};