#include<iostream>
using namespace std;


int main(){
    int rows=6;
     int arr[rows][rows];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        arr[i][j] = 1;
      } else {
        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
      }
    }
  }

  for (int i = 0; i < rows; i++) {
    for(int j=0;j<rows-1-i;j++){
        cout<<" ";
    }
    for (int j = 0; j <= i; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

    
}