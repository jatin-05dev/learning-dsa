#include<iostream>
#include<vector>
using namespace std;
void printnumber(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printnumber(n-1);
}
void printname(int n){
    if(n==0){
        return;
    }
    cout<<"pooja"<<" ";
    printname(n-1);
}

void sumofnumber(int n,int sum){
    if(n==0){
         cout<<sum;
       
        return;
    }

    sumofnumber(n-1,sum+=n);
}

void facofnumber(int n,int sum){
    if(n==0){
         cout<<sum;
       
        return;
    }

    facofnumber(n-1,sum*=n);
}

void reversearr(vector<int>&arr,int st,int end){
     if(st>end){

        return;
     }
     swap(arr[st],arr[end]);
     reversearr(arr,st=st+1,end=end-1);
}
int main(){
    int n=5;
    int sum=1;
    vector<int>arr={5,4,3,2,1};
    int st=0;
    int end=arr.size()-1;
    reversearr(arr,st,end);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }


}