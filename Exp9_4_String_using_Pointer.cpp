//Patel Vishwas
//24070123072
//A3
#include<iostream>
#include<cstring>
using namespace std;
int main(){
string str1 ;
cout << "Enter a string: ";
cin >> str1;
char str2[str1.length()];
char *ptr = &str1[0];

for(int i = 0; i <5 ; i++){
    if(i == str1.length()) {
        break;
    }
    str2[i] = *(ptr + i);
}
str2[str1.length()] = '\0';
cout << "Orgiginal string: " << str2 << endl;
for(int i = str1.length(); i >=0 ; i--){
    if(i == str1.length()) {
        continue;
    }
    str2[i] = *(ptr + str1.length() - i - 1);
}

str2[str1.length()] = '\0';
cout << "Reversed string: " << str2 << endl;
if(str1 == str2) {
    cout << "The string is a palindrome." << endl;
} 
else {
    cout << "The string is not a palindrome." << endl;
}
return 0;
}
/*
case 1:
Output:
Enter a string: level
Orgiginal string: level
Reversed string: level
The string is a palindrome.

case 2:
Output:
Enter a string: hello
Orgiginal string: hello
Reversed string: olleh
The string is not a palindrome.
*/