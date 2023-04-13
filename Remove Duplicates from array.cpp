#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Remove Duplicates froma an array
//two pointer

int removeDuplicates(vector<int>&arr) {
	int i = 0;
	for (int j = 1; j < arr.size(); j++) {
		if (arr[i] == arr[j]) {
			arr[i + 1] = arr[j];
			i++;
		}
	}
	return i + 1;
}




int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif



	return 0;
}

