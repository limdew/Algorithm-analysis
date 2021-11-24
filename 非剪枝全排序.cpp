#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

/*
可自行直接调试
字符串全排序
不剔除重复结果
递归添加结果字符串
*/

void allsort(string &nums, vector<string> &ans, int num) {//具体递归实现
	for (int i = num; i < nums.size(); i++) {
		if (i == nums.size() - 1)ans.push_back(nums);//递归到最后一位则将字符串导入至结果数组
		else {
			string temp = nums;//声明副本字符串
			swap(temp[num], temp[i + 1]);
			allsort(temp, ans, i + 1);//用副本字符串进行递归
		}
	}
}

int main() {
	string num;//给定字符串
	int length;
	vector<string> ans;//最终结果
	getline(cin, num);
	for (int i = 0; i < num.size(); i++) {
		string help = num;//声明副本字符串
		swap(help[0], help[i]);
		allsort(help, ans, 1);//进行递归
	}
	for (auto i : ans) {
		printf("%s\n", i.c_str());
	}
	system("pause");
	return 0;
}
