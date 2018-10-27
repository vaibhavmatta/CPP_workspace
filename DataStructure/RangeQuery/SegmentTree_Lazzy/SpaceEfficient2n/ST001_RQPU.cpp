#include <iostream>

using namespace std;

typedef long long ll;

const int N = 1e6;
int tree[N];
int n;

void segmentTree(){
    // move upward and update parents.
	for(int i=n-1;i>0;i--){
		tree[i]=tree[i<<1] +tree[(i<<1)|1];  //i<<1|1 it add 1.
	}
}

ll query(int u,int v){
	ll sum=0;
	for(u+=n,v+=n;u<v;u>>=1,v>>=1){
    if((u&1)) sum+=tree[u++]; //odd
    if((v&1)) sum+=tree[--v];  //odd
}

return sum;

}

void update(int data,int idx){
	for (tree[idx += n] = data; idx > 0; idx >>= 1) {
			tree[idx >> 1] = tree[idx] + tree[idx ^ 1]; // idx^1_if_left_know_then_right_dedega_agar_right_pata_hai_to_left_dedega..
		}

	}


	void solve(){

		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
		n=sizeof(arr)/sizeof(arr[0]);

        // n se 2n tk elements ko leaf ki trha daldo.
		for(int i=0;i<n;i++){
			tree[i+n]=arr[i];
		}

		segmentTree();
		cout<<query(1,3)<<endl;
		update(1,2);
		cout<<query(1,3)<<endl;
	}

	int main(int argc, char const *argv[])
	{
		solve();
		return 0;
	}