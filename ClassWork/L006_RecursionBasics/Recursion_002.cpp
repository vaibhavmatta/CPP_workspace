#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void PrintTriangle(int n, int crow, int ccol) {
	if (crow > n) {
		return;
	}

	if (ccol > crow) {
		cout << endl;
		PrintTriangle(n, crow + 1, 1);
		return;
	}

	cout << "*";
	PrintTriangle(n, crow, ccol + 1);

}

void PrintInvertedTriangle(int n, int crow, int ccol) {
	if (crow > n) {
		return;
	}

	if (ccol > crow) {
		PrintInvertedTriangle(n, crow + 1, 1);
		if (crow < n) cout << endl;
		return;
	}


	PrintInvertedTriangle(n, crow, ccol + 1);
	cout << "*";
}

void display(int* arr, int n, int vidx) {
	if (vidx == n) return;

	cout << arr[vidx] << " ";
	display(arr, n, vidx + 1);

}

void Reversedisplay(int* arr, int n, int vidx) {
	if (vidx == n) return;

	Reversedisplay(arr, n, vidx + 1);
	cout << arr[vidx] << " ";
}

int max(int* arr, int n, int vidx) {
	if (n == vidx) return INT_MIN;
	return max(max(arr, n, vidx + 1), arr[vidx]);

}

int min(int* arr, int n, int vidx) {
	if (n == vidx) return INT_MAX;
	return min(min(arr, n, vidx + 1), arr[vidx]);

}

bool find(int* arr, int n, int vidx, int data) {
	if (n == vidx) return false;
	if (arr[vidx] == data) return true;
	return find(arr, n, vidx + 1, data);

}

pair<int , int> maxmin(int* arr, int n, int vidx) {
	if (n == vidx) {
		pair<int, int> pp(INT_MAX, INT_MIN);
		return pp;
	}

	pair<int, int> mp;
	pair<int, int > rp = maxmin(arr, n, vidx + 1);
	mp.first = min(rp.first, arr[vidx]);
	mp.second = max(rp.second, arr[vidx]);
	return mp;

}

int firstIndex(int* arr, int n, int vidx, int data) {
	if (n == vidx) return -1;
	if (arr[vidx] == data) return vidx;
	return firstIndex(arr, n, vidx + 1, data);
}

int lastIndex(int* arr, int n, int vidx, int data) {
	if (n == vidx) return -1;
	int recAns = lastIndex(arr, n, vidx + 1, data);
	if (recAns != -1) return recAns;
	if (arr[vidx] == data) return vidx;
	else return -1;
}

vector<int> allIndices(int* arr, int n, int idx, int data, int count) {
	if (n == idx) {
		vector<int> barr(count, 0);
		return barr;
	}

	if (data == arr[idx]) {
		vector<int> rarr = allIndices(arr, n, idx + 1, data, count + 1);
		rarr[count] = idx;
		return rarr;
	} else {
		return allIndices(arr, n, idx + 1, data, count);
	}
}







void solve() {
	// PrintTriangle(5, 1, 1);
	// PrintInvertedTriangle(5,1,1);

	int arr[] = {1, 2, 3, -4, 115, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	// display(arr, n, 0); cout<<endl;
	// Reversedisplay(arr, n, 0); cout<<endl;
	// cout << max(arr, n, 0) << endl;
	// cout << min(arr, n, 0) << endl;
	// cout << (boolalpha) << find(arr, n, 0, 6) << endl;

	// pair<int, int > pp = maxmin(arr, n, 0);
	// cout << pp.first << " " << pp.second << endl;

	// cout << firstIndex(arr, n, 0, 11111) << endl;
	// cout << lastIndex(arr, n, 0, 8) << endl;

	// vector<int> ans = allIndices(arr, n, 0, 8, 0);
	// for (int i = 0; i < ans.size(); i++) {
	// 	cout << ans[i] << " ";
	// } cout << endl;

}

int main() {

	freopen("C:/Users/Rijnesh/Cpp/input.txt", "r", stdin);
	// freopen("C:/Users/Rijnesh/Cpp/output.txt", "w", stdout);

	// 1. Lecture 8
	// 1.1 PrintTriangle
	// 1.2 PrintInvertedTriangle
	// 1.2 Array Recursion
	// 1.2.1 display
	// 1.2.2 reverse display
	// 1.2.3 max
	// 1.2.4 find
	// 1.2.5 firstIndex
	// 1.2.6 lastIndex
	// 1.2.7 allIndices
	// 1.2.8 inverse
	// 1.2.9 bubbleSort
	// 1.2.10 selectionSort


	solve();
	return 0;
}