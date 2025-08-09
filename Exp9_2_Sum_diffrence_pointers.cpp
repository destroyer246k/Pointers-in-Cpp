//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int * arrp[5];
    int diff,sum=0;
  for(int i = 0 ; i <5; i++){
    arrp[i] = &arr[i];
  }
  for(int i = 0; i<5; i++){
    sum += *arrp[i];
  }
  cout << "Sum of all :" << sum<<endl;
  diff = *arrp[4] - *arrp[2];
  cout << "diffrence is : "<< diff;
    return 0;
}
/*
Output:
Sum of all :150
diffrence is : 20
*/