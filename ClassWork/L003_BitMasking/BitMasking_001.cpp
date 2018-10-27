#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;


//simple.
int countBits(int n){
	int count=0;
	while(n!=0){
		count++;
		n>>=1;
	}
	return count;
}

//simple
int countSetBits(int n){
	int count=0;
	while(n!=0){
		count+=(n&1);
		n>>=1;
	}
	return count;
}


// on->on,off->on
int OnOffBit(int n,int k){
     int mask=1<<k;
     n|=(mask);
     return n;
}

//on->off,off->off

int OffOnBit(int n,int k){
	int mask=1 << k;
	n=(n&(~mask));
	return n;
}

bool checkOnOff(int x, int bitno) {
	int mask = 1;
	mask <<= bitno;
	return ((x & mask) == 0)?false:true;
}

bool IsPowOf2(int n) {

	return (n != 0) && (n & (n - 1)) == 0;
}

bool IsPowOf4(int n) {

	if (IsPowOf2(n)) {
		int count = 0;
		while (n != 1) {
			n >>= 1;
			count++;
		}

		return (count & 1) == 1 ? false : true;
	}
	return false;
}


    // clear the lowest set bit of x
int ClearLowestSetBit(int n) {
	return n & (n - 1);
}

	// extracts_the_lowest_set_bit_of_x_(all_others_are_clear)._Pretty_patterns_when_applied_to_a_linear_sequence.
int ExtractLowestSetBit(int n) {
	return n & ~(n - 1);
}

	// extracts_the_lowest_set_bit_of_x_(all_others_are_clear)._Pretty_patterns_when_applied_to_a_linear_sequence.
int ExtractLowestSetBit_2(int n) {
	return n & -n;
}

int countOfBitsByAbsortion(int n) {
	int count = 0;
	while (n != 0) {
			n = n & (n - 1); // jump on set bit only.
			count++;
		}

		return count;
	}


int revesebit(int n) {
	int ans = 0;
	while (n != 0) {
		ans |= n & 1;
		n = n >> 1;
		ans <<= 1;
	}

	return ans;
}

void swap(int x, int y) {
		x = x ^ y;
		y = x ^ y;
		x = x ^ y;

}













void solve(){
	cout<<countBits(4)<<endl;
	cout<<countSetBits(4)<<endl;
	cout<<OnOffBit(4,1)<<endl;
	cout<<OffOnBit(4,1)<<endl;
    cout<<(boolalpha)checkOnOff(4,1)<<endl;


}



int main(){

    solve();
	return 0;

}
