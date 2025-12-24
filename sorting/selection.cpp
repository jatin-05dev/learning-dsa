#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int>v={4,1,2,5,9};
    for(int i=0;i<v.size()-1;i++){
        int sml=i;
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[sml]){
                sml=j;
            }
        }
        swap(v[i],v[sml]);
    }
    for(int i=0;i<v.size();i++){

        cout<<v[i];
    }
 
    }
    

