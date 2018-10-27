#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printIncreasing(int n) {
	if (n == 0) {
		return;
	}

	printIncreasing(n - 1);
	cout << n << endl;
}

void printDecreasing(int n) {
	if (n == 0) {
		return;
	}
	cout << n << endl;
	printDecreasing(n - 1);

}

void PrintDecreasingIncreasing(int n) {
	if (n == 1) {
		cout << 1 << endl;
		return;
	}
	cout << n << endl;
	PrintDecreasingIncreasing(n - 1);
	cout << n << endl;
}

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	return n * factorial(n - 1);
}

ll pow(int a, int b) {
	if (b == 0 || a == 1) {
		return 1;
	}

	ll res = pow(a, b / 2);
	res *= res;
	if (b & 1) { //odd
		res *= a;
	}

	return res;


}


int TowerOfHanoi(int n, string src, string desti, string help) {
	if (n == 0) {
		return 0;
	}

	int count = 0;

	// n-1_disk_ko_src_se_uthake_help_pe_rakhdo_by_using_desti.therefor_src_is_src_and_help_become_desti_and_desti_is_help.
	count += TowerOfHanoi(n - 1, src, help, desti);

	cout << n << "th disk from " << src << " to " << desti << endl;

	// n-1_disk_ko_help_se_uthake_desti_pe_rakhdiya_by_using_src.therefor_help_become_src_and_src_become_help_and_desti_is_still_desti.
	count += TowerOfHanoi(n - 1, help, desti, src);

	return count + 1;

}



void solve()
{

	// printIncreasing(10);
	// printDecreasing(10);
	// PrintDecreasingIncreasing(10);

	// cout<<factorial(5);
	// cout<<pow(2,9);

	cout << TowerOfHanoi(3, "A", "B", "C") << endl;





}

int main()
{
	// 1. Lecture 7
	// 1.1 Recursion intro - Functions, PMI
	// 1.2 Recursion questions
	// 1.2.1 PrintDecreasing
	// 1.2.2 PrintIncreasing
	// 1.2.3 PrintDecreasingIncreasing
	// 1.2.4 Factorial
	// 1.2.5 Power
	// 1.2.6 Tower of Hanoi


	// freopen("C:/Users/Rijnesh/Cpp/input.txt", "r", stdin);
	freopen("C:/Users/Rijnesh/Cpp/output.txt","w",stdout);


	solve();

	return 0;
}
