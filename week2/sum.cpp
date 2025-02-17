//Design algo to print trio of i,j,k of integers such that ar[i]+ar[j]=ar[k] ;
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void res(vector<int>vec){
    
    for(int i=0;i<vec.size();i++){
          for(int j=i+1;j<vec.size();j++){
              for(int k=j+1;k<vec.size();k++){
              if(vec[j]+vec[i]==vec[k]){
                cout<<i+1<<" "<<j+1<<" "<<k+1;  
                break;
              }
           
              }
            }
        }
        
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
    res(vec);
    return 0;
}
