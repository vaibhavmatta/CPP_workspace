	#include <bits/stdc++.h>
using namespace std;

void helloworld();
void TrianglePattern();

int main(int argc, char const *argv[])
{
	helloworld();
	TrianglePattern();


	return 0;
}

void helloworld(){
	cout << "hello world"<<endl;
}

void TrianglePattern(){
	int nst=1;
	int n=0;
	cin>>n;
	for(int row=1;row<n;row++){
		for(int cst=1;cst<=nst;cst++){
			cout<<"*";
		}

		nst++;
		cout<<endl;
	}

}

void InvertTrianglePattern(){
	int nst=1;
	int nsp=n-1;
	int n=0;
	cin>>n;
	for(int row=1;row<n;row++){	
		for(int csp=1;csp<=nsp;cstp++){
			cout<<" ";
		}

		for(int cst=1;cst<=nst;cst++){
			cout<<"*";
		}
		nst++;
		nsp++;
		cout<<endl;
	}	
}

void numberTriangle(){
	int nst=1;
	int n=0;
	cin>>n;
	int num=1;
	for(int row=1;row<n;row++){
		for(int cst=1;cst<=nst;cst++){
			cout<<num++;
		}
		nst++;
		cout<<endl;
	}
} 

void numberdiamond(){
	int nst=1;
	int nsp=n/2;
	int n=0;
	for(int row=1;row<=n;row++){
		int val=1;
		for(int csp=1;csp<=nsp;csp++){
			cout<<” “;
		} 

		if(row<n/2){ 
			val=row; 
		}else{
			val=n-row;
		} 

		for(int cst=1cst<=nst;cst++){
			cout<<val;
			if(cst<nst/2){
				val++;
			}else{
				val--;
			} 
		} 

		if(row<n/2){
			nst+=2;
			nsp--;
		}else{
			nst-=2;
			nsp++;} 
			} 

		} 

		void isPrime(int st, int en)
		{
			for(int i=st;i*i<=en;i++){
				bool flag=false;
				for(int j=2;j<i;j=j*i){
					if(i%j==0){
						break;
					} 
				} 
				if(!flag){
					cout<<i<<” “;
				} 
			}
		} 

		void rotationNumber(int n, int r){
			if(r<0){
				r=-r;
			}
			r=r%l;
		} 

		int lengthOfNumber(int n){
			int len=0; while(n!=0){
				n=n/10;
				len++;
			} 
		} 






