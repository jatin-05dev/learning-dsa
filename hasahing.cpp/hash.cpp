#include <iostream>
#include <vector>
using namespace std;
int main(){

vector<int>v={1,2,2,3,3,4,5,5,6};
vector<int>hash(v.size(),0);
for(int i=0;i<v.size();i++){
    hash[v[i]]++;
}

for(int i=0;i<hash.size();i++){
    cout<<hash[i];
}


}