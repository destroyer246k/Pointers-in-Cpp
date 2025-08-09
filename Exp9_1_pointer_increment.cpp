//Patel Vishwas
//24070123072
//A3
#include<iostream>
using namespace std;
int main() {
    int a = 20;
    float b = 10.5;
    double d = 15.75;
    bool e = true;

    int *aptr = &a;
    float *bptr = &b;
    double *dptr = &d;
    bool *eptr = &e;

    cout<< "Before increment:"<<endl;
    cout << "aptr: " <<aptr<<endl;
    cout <<"bptr: " <<bptr << endl;
    cout <<"dptr: " <<dptr << endl;
    cout <<"eptr: " <<eptr << endl<< endl;
    cout << "After incrementing pointers:" << endl;

    aptr++;
    bptr++;
    dptr++;
    eptr++;

    cout << "aptr: " <<aptr<<endl;
    cout <<"bptr: " <<bptr << endl;
    cout <<"dptr: " <<dptr << endl;
    cout <<"eptr: " <<eptr << endl;
    return 0;
}
/*
Output:
Before increment:
aptr: 0x61fefc
bptr: 0x61fef8
dptr: 0x61fef0
eptr: 0x61feef

After incrementing pointers:
aptr: 0x61ff00
bptr: 0x61fefc
dptr: 0x61fef8
eptr: 0x61fef0
*/