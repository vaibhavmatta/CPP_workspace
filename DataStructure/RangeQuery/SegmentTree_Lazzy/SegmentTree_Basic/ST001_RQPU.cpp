#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi tree;
int n;

//util.========================================================

int getlog(int n, bool floor) {
	int log = 0;
	while ((1 << log) < n) {
		log++;
	}
	if (floor && (1 << log) > n) {
		log--;
	}
	return log;
}

int construction(int* arr, int si, int ei, int idx) {
	if (si == ei) {
		tree[idx] = arr[si];
		return arr[si];
	}

	int mid = (si + ei) >> 1;
	tree[idx] = construction(arr, si, mid, (idx << 1) + 1) + construction(arr, mid + 1, ei, (idx << 1) + 2);
	return tree[idx];
}

ll query(int si, int ei, int idx, int u, int v) {
	if (si >= u && ei <= v) {
		return tree[idx];
	} else if (u > ei || v < si) {
		return 0;
	} else {
		int mid = (si + ei) >> 1;
		return query(si, mid, (idx << 1) + 1, u, v) + query(mid + 1, ei, (idx << 1) + 2, u, v);
	}
}

ll query(int u, int v) {
	if (u > v) swap(u, v);

	return query(0, n - 1, 0, u, v);
}

void update(int si, int ei, int idx, int i, int data) {
	int mid = (si + ei) >> 1;
	if (si == i && ei == i) {
		tree[idx] = data;
		return;
	} else if (i >= si && i <= mid) {
		update(si, mid, (idx << 1) + 1, i, data);
	} else if (i > mid && i <= ei) {
		update(mid + 1, ei, (idx << 1) + 2, i, data);
	}

	tree[idx] = tree[(idx << 1) + 1] + tree[(idx << 1) + 2];

}

void update(int i, int data) {
	update(0, n - 1, 0, i, data);

}



void segmentTree(int* arr, int n) {
	int height = getlog(n, false);
	tree.resize((1 << height + 1));

	construction(arr, 0, n - 1, 0);
}



void solve() {
	int arr[] = { 1, 3, 5, 7, 9, 11 };
	n = sizeof(arr) / sizeof(arr[0]);

	segmentTree(arr, n);

	cout << (query(1, 3)) << endl;
	update(1, 10);
	cout << (query(1, 3)) << endl;
	cout << "asjbdas" << endl;

}

int main() {
	// freopen("C:/Users/Rijnesh/Cpp/input.txt", "r", stdin);
	// freopen("C:/Users/Rijnesh/Cpp/output.txt","w",stdout);
	solve();
	return 0;
}