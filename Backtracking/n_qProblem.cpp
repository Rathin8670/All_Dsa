#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    bool isSafe(int row,int col,vector<string>board,int n){
    int dupRow=row;
    int dupCol=col;
    // upper-diagonal both row&col --
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--,col--;
    }

    row=dupRow,col=dupCol;
    //left row fixed,col--
    while(col>=0){
        if(board[row][col]=='Q') return false;
        col--;
    }

    col=dupCol;
    //lower-diagonal row++,col--
    while(col>=0 && row<n){
        if(board[row][col]=='Q'){
            return false;
        }
        col--,row++;
    }
    return true;
}

public:
void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}
public:
vector<vector<string>> Ans(int n){
    vector<string>board(n);
    vector<vector<string>>ans;

    string str(n,'.');
    for(int i=0;i<n;i++){
        board[i]=str;
    }
    solve(0,board,ans,n);

    return ans;
}
};

int main(){
    int n=4;
    Solution obj;
    vector<vector<string>>ans=obj.Ans(n);

    for(int i=0;i<ans.size();i++){
        cout<<"Solution "<<i+1<<"--"<<endl;
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
}