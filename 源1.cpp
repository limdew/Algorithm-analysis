#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

/*
������ֱ�ӵ���
�ַ���ȫ����
���޳��ظ����
�ݹ���ӽ���ַ���
*/

void allsort(string &nums, vector<string> &ans, int num) {//����ݹ�ʵ��
	for (int i = num; i < nums.size(); i++) {
		if (i == nums.size() - 1)ans.push_back(nums);//�ݹ鵽���һλ���ַ����������������
		else {
			string temp = nums;//���������ַ���
			swap(temp[num], temp[i + 1]);
			allsort(temp, ans, i + 1);//�ø����ַ������еݹ�
		}
	}
}

int main() {
	string num;//�����ַ���
	int length;
	vector<string> ans;//���ս��
	getline(cin, num);
	for (int i = 0; i < num.size(); i++) {
		string help = num;//���������ַ���
		swap(help[0], help[i]);
		allsort(help, ans, 1);//���еݹ�
	}
	for (auto i : ans) {
		printf("%s\n", i.c_str());
	}
	system("pause");
	return 0;
}