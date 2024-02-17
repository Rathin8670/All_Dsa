#include<iostream>
using namespace std;
void test(long long arr[],int n){
    long long a[n];
    for(int i=0;i<n;i++){
        a[i]=arr[arr[i]];

    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }

}
vector<int> singleNumber(vector<int> &nums) {
        int m=*max_element(nums.begin(),nums.end());
        vector<int>arr(m+1);
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<=m;i++){
            if(arr[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
}
int main(){
vector<int>arrr={1,2,3,1,2};
singleNumber(arrr);
return 0;
}
