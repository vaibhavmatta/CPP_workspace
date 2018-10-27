#include <bits/stdc++.h>

#define max  1000000000+7
#define ll long long
#define INTMIN -2147483648
#define INTMAX 2147483647

using namespace std;

int size;
int ftree[10005];



int getsum(int index){
	index++;
	int sum=0;
	while(index!=0){
		sum+=ftree[index];
		index-=index & -index;
	}
	
	
	return sum;
}

void update(int data,int index){
	index++;
	while(index<size){
		ftree[index]+=data;
		index+=(index & -index);
	}
}


int query(int l,int r){
	return getsum(r)-getsum(l-1);

}

void fenwickTree(int* arr,int n){
	size=n+1;
	for(int i=0;i<n;i++){
		update(arr[i],i);
	}

}

int main(int argc, char const *argv[])
{
    int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n=sizeof(freq)/sizeof(freq[0]);
	fenwickTree(freq,n);
	
	printf("%d\n",query(2,3));

	return 0;
}