# include<bits/stdc++.h>

using namespace std;


// Modifiers:
void modifiers(vector<int> &v){
//push_back()
	for(int i=1;i<=10;i++){
		v.push_back(i*10);
	}

	cout<<"Size: "<<v.size()<<", Capacity: "<< v.capacity()<<endl;


    //print elements.
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	//get back element and pop last element.
	cout<< v.back()<<endl;
	cout<< v.front()<<endl;
	cout<<"Element at position 5: "<<v.at(5)<<endl;
	v.pop_back();
	
	v[5]=200;
	
    //insert
	v.insert(v.begin()+3,1000);

//erase
	v.erase(v.begin()+3);


    //print elements.
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

}




int main(int argc, char const *argv[])
{

	vector<int> v;
	modifiers(v);
	
	return 0;
}