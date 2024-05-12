#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>arr,vector<int>op,int i){
    //base case
    if(i>=arr.size()){
        for(auto it:op){
            cout<<it<<" ";
        }
        if(op.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return ;
    }
    //not take
    solve(arr,op,i+1);
    //take cond
    int ele=arr[i];
    op.push_back(ele);
    solve(arr,op,i+1);
}
/*subsequence with given sum*/
void sum_solve(vector<int>arr,vector<int>op,int i,int s,int sum){
    //base case
    
    if(i>=arr.size()){
        if(sum==s){
            for(auto it:op){
                cout<<it<<" ";
            }
             cout<<endl;
        }
        return ;
    }

    //not take
    sum_solve(arr,op,i+1,s,sum);

    //take cond
    op.push_back(arr[i]);
    int ele=arr[i];
    s+=ele;
    sum_solve(arr,op,i+1,s,sum);
}

/*subsequence with given sum ===>return only 1 answer */
bool sum_1_solve(vector<int>arr,vector<int>op,int i,int s,int sum){
    //base case
    
    if(i>=arr.size()){
        if(sum==s){
            for(auto it:op){
                cout<<it<<" ";
            }
            cout<<endl;
            return true ;
        }else{
        return false;
    }
}

    //not take
    if(sum_1_solve(arr,op,i+1,s,sum)==true){
        return true;
    }

    //take cond
    op.push_back(arr[i]);
    int ele=arr[i];
    s+=ele;
    if(sum_1_solve(arr,op,i+1,s,sum)==true){
        return true;
    }
   
    return false;
}

int count_solve(vector<int>arr,int i,int s,int sum){
    //base case
    
    if(i>=arr.size()){
        if(sum==s){
            return 1 ;
        }else{
        return 0;
    }
}

    //not take
    int l=count_solve(arr,i+1,s,sum);
        
    //take cond
   
    int ele=arr[i];
    s+=ele;
    int r=count_solve(arr,i+1,s,sum);
        
   
    return l+r;
}
int main(){
    vector<int>v{3,1,2};  
    vector<int>ans;
    int i=0;
    int sum=3;
    int s=0;
    sum_solve(v,ans,i,s,sum);
    cout<<count_solve(v,i,s,sum);
}