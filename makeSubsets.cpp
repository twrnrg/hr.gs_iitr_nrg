#include<iostream>

using namespace std;


vector<vector<int>> result;

void makeSubsets(vector<int> &arr, int index, vector<int> &ans){
	if(index == arr.size()){
		result.push_back(ans);
		return;
	}
	ans.push_back(arr[index]);
	// 1 2 3 4
	makeSubsets(arr, index+1, ans);
	ans.pop_back();
	// 1 2 3 4
	makeSubsets(arr, index+1, ans);
}


int main(){


	vector<int> v{1, 2, 3, 4};
	vector<int> helper;
	makeSubsets(v, 0, helper);
	return result;

	 // 1 2 3 4 5 
}