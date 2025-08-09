//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int * arrp[5];
for(int i = 0 ; i <5; i++){
    arrp[i] = &arr[i];
  }

  cout << "Array"<<endl;
  for(int i = 0; i<5; i++){ 
    cout <<*arrp[i]<<" ";
  }
  cout << endl;
  cout << "Array Reverse:"<<endl;
  for(int i = 4; i>=0; i--){
    cout  <<*arrp[i] << " ";
  }
  return 0;
}
/*
Output:
Array
10 20 30 40 50
Array Reverse:
50 40 30 20 10
*/