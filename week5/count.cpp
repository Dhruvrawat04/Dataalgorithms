//Count sort
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int n;
cout<<"enter the string length"<<endl;
cin>>n;
cout<<"enter the string"<<endl;
char arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];}
int count[26]={0};
for(char ch:arr){
    count[ch-'a']++;
}
for(int i=1;i<26;i++){
    count[i]+=count[i-1];
}
char result[n];
for (int i = n - 1; i >= 0; i--) {
result[count[arr[i] - 'a'] - 1] = arr[i];
count[arr[i] - 'a']--;  // Decrement the count after placing the character
    }
for(int i=0;i<n;i++){
cout<<result[i];}
    return 0;
}
