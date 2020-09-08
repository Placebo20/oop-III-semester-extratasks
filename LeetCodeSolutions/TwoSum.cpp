#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					nums.clear();
					nums.push_back(i);
					nums.push_back(j);
				}
			}
		}
		return nums;
	}

	void Print(vector<int> nums, int target) {
		cout << "Vector: [ ";
		for (int i = 0; i < nums.size(); i++) {
			cout << nums[i] << " ";
		}
		cout << "]" << endl;
		cout << "Target: " << target << endl;
		cout << "============================================" << endl;
	}
};

int main() {
	vector<int> nums = { 3,3 };
	int target = 6;
	Solution obj;
	obj.Print(nums, target);
	obj.TwoSum(nums, target);
	obj.Print(nums, target);
	return 0;
}