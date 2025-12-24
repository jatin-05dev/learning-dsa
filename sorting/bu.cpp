#include<vector>
#include<iostream>
using namespace std;
int main(){
    // vector<int>v={4,1,2,5,9};
    // for(int i=0;i<v.size()-1;i++){
    //     for(int j=0;j<v.size()-i-1;j++){
    //         if(v[j]>v[j+1]){
    //             swap(v[j],v[j+1]);
    //         }

    //     }
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // optimise way

     vector<int>v={4,1,2,5,9};
    for(int i=0;i<v.size()-1;i++){
        bool isswap=false;
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
                isswap=true;
            }
        }
        if(!isswap){//array is already sorted
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}