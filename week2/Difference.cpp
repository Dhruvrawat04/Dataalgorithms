//Design algo to count number of pair of integers such that there difference is equal to the key provided;
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void res(vector<int>vec,int key){
    int count=0;
    for(int i=0;i<vec.size();i++){
          for(int j=i+1;j<vec.size();j++){
              if(vec[j]-vec[i]==key){
                count++;  
              }
            }
        }
        cout<<count;
}
int main() {
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
     vector<int>vec(n);
    
    cout<<"enter elements"<<endl;
    for(auto &x:vec){
        cin>>x;
    
    }
    sort(vec.begin(),vec.end());
    int key;
    cout<<"enter the key you want to match the difference of"<<endl;
    cin>>key;
    res(vec,key);
    return 0;
}
