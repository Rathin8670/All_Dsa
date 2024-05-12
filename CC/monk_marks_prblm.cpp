#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	map<int,multiset<string>>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int marks;
		string name;
		cin>>name>>marks;
		m[marks].insert(name);
	}
	auto curr_it=--m.end();
	while(1){
		auto &students=(*curr_it).second;
		auto &marks=(*curr_it).first;
		for(auto st:students){
			cout<<st<<" "<<marks<<endl;
		}
		if(curr_it==m.begin())break;   //terminating the loop
		curr_it--;
	}
}