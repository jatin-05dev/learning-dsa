#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int>v={4,1,2,5,9};
    for(int i=0;i<v.size()-1;i++){
        int curr=v[i];
        int pr=i-1;
        while(pr>=0 && v[pr]>curr){
            v[pr+1]=v[pr];
            pr--;
        }
        v[pr+1]=curr;
    }
    for(int i=0;i<v.size();i++){

        cout<<v[i];
    }
 
    }
    

