#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

void allsort(string &nums, vector<string> &ans, int num) {
	for (int i = num; i < nums.size(); i++) {
		if (i == nums.size() - 1)ans.push_back(nums);
		else {
			string temp = nums;
			swap(temp[num], temp[i + 1]);
			allsort(temp, ans, i + 1);
		}
	}
}

int main() {
	string num;
	int length;
	vector<string> ans;
	getline(cin, num);
	for (int i = 0; i < num.size(); i++) {
		string help = num;
		swap(help[0], help[i]);
		allsort(help, ans, 1);
	}
	for (auto i : ans) {
		printf("%s\n", i.c_str());
	}
	system("pause");
	return 0;
}