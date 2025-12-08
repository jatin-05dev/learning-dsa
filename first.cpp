#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
//  vector<int>vec={1,5,6,8,2,3,2,2,2};
//  int max=0;
//   int sl=1000;
//  for(int i=0;i<vec.size();i++){
//     if(vec[i]>max){
//         max=vec[i];
//     }
  
//  }
//     cout<<max;
//    sort(vec.begin(),vec.end());
//   for(int i=0;i<vec.size();i++){
//     cout<<vec[i]<<" ";
//   }
//   cout<<vec[vec.size()-1];
//second largest element
// int sl=-1; 
// for(int i=0;i<vec.size();i++){
//     if(vec[i]>sl && vec[i]!=max){
//         sl=vec[i];
//     }
// }
// cout<<sl;
//better
// int sl=-1;
// for(int i=vec.size()-2;i>=0;i--){
//     if(vec[i]!=max){
//    sl=vec[i];
//    break;
//     }

// }
// cout<<sl;
//   for(int i=0;i<vec.size();i++){
//     if(vec[i]>max){
//         sl=max;
//         max=vec[i];
//     }
//     if(vec[i]!=max && vec[i]>sl){
//         sl=vec[i];
//     }
//   }
//   cout<<sl;
//sorted
// for(int i=1;i<vec.size();i++){
//     if(vec[i]>=vec[i-1]){
//         cout<<"yes";
//         break;
//     }
//     else{
//         cout<<"not";
//        break;
//     }
// }
//duplicate in array
// bool found=false;
//  for(int i=0;i<vec.size();i++){
//     for(int j=i+1;j<vec.size()-1;j++){
//         if(vec[i]==vec[j]){
//         found=true;
           
//         }
//       if(found){
//         break;
//       }
        
//     }
 
//  }
//  if(found){
//     cout<<"pakad liya";
//  }
//  else{
//     cout<<"nhu mila";
//  }
// vector<int>vec={6,8,6,9,9,7,2};
// sort(vec.begin(),vec.end());
// set<int>s;
// for(int i=0;i<vec.size();i++){
//     s.insert(vec[i]);
// }
// int id=0;
// for(int it:s){
//      vec[id]=it;
//      id++;

// }
// cout<<id;
    

//optimal
// int i=0;
// for(int k=1;k<vec.size();k++){
//     if(vec[k]!=vec[i]){
//         vec[i+1]=vec[k];
//         i++; 
//     }
  
// }
//     cout<<i+1<<endl;
         
//   vector<int>v={1,2,3,4,5};
    // int temp=v[0];
    // for(int i=0;i<v.size();i++){
    //    v[i-1]=v[i];
    // }
    // v[v.size()-1]=temp;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // int temp=v[v.size()-1];
    // for(int i=0;i<v.size()-1;i++){
    //     v[i]=v[i+1];
    // }
    // v[0]=temp;
    //  for(int i=0;i<v.size();i++){}
    //     cout<<v[i]<<" ";
    // }}
//     int d=4;
//      reverse(v.begin(),v.begin()+d);
//     reverse(v.begin()+d,v.end());
//      reverse(v.begin(),v.end());
//    for(int i=0;i<v.size();i++){
//       cout<<v[i]<<" "; 
//      }
// vector<int>v2;
// for(int i=0;i<v.size();i++){
//     if(v[i]!=0){
//         v2.push_back(v[i]);
//     }
// }
// for(int i=0;i<v2.size();i++){
//    v[i]=v2[i];
// }
// for(int i=v2.size();i<v.size();i++){
//   v[i]=0;
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
//vector<int>vec={1,7,6,8,0,0,8,5,0,0,0,1,5,2,4,5,5,1,5};
// reverse(vec.begin(),vec.end());
// for(int i=0;i<vec.size();i++)
// {
// cout<<vec[i]<<" ";
// }
// vector<int>te;
// for(int i=0;i<vec.size();i++){
//     if(vec[i]!=0){
//         te.push_back(vec[i]);
//     }
// }
// for(int i=0;i<te.size();i++){
//     vec[i]=te[i];
// }

// for(int i=te.size();i<vec.size();i++){
//     vec[i]=0;
// }
// for(int i:vec){
//     cout<<i<<" ";
// }

// for(int i=0;i<vec.size();i++){
//     if(vec[i]!=0){
//         te.push_back(vec[i]);
//     }
// }
// reverse(te.begin(),te.end());
// for(int i:te){
//     cout<<i<<" ";
// }
//optimised app
//  int j=-1;
//  for(int i=0;i<vec.size();i++){
//     if(vec[i]==0){
//         j=i;
//         break;

//     }
//  }
//  for(int k=j+1;k<vec.size();k++){
//     if(vec[k]!=0){
//         swap(vec[k],vec[j]);
//         j++;
//     }
//  }
//  for(int i: vec){
//     cout<<i<<" ";
//  }
// }
// vector<int>v1={1,2,3,4,4,5,6,6};
// vector<int>v2={7,7,8,9};
// vector<int>u;
// for(int i=0;i<v1.size();i++){
//     if(v1[i]!=v1[i+1]){
//   u.push_back(v1[i]);
//     }
// }
// for(int i=0;i<v2.size();i++){
//     if(v2[i]!=v2[i+1]){
//     u.push_back(v2[i]);
//     }
// }
// for(int i:u){
//     cout<<i<<" ";
// }
// set<int>s;
// for(int i=0;i<v1.size();i++){
//     s.insert(v1[i]);
// }
// for(int i=0;i<v2.size();i++){
//     s.insert(v2[i]);
// }
// for(int i:s){
//     cout<<i<<" ";
// }
//  vector<int>un;
// // int id=0;
// for(int i:s){
//     un.push_back(i);
    
// }
// for(int i=0;i<un.size();i++){
//     cout<<un[i];
// }
//optimise //
// vector<int>un;
// int i=0;
// int j=0;
// while(i<v1.size() && j<v2.size()){
//     if(v1[i]<=v2[j]){
//      if(un.size()==0 || un.back()!=v1[i]){
//         un.push_back(v1[i]);
//      }
//      i++;
//     }
//      else{
//         if(un.size()==0 || un.back()!=v2[j]){
//         un.push_back(v2[j]);
//      }
//      j++;}
     
//     }
//     while(i<v1.size()){
//      if(un.size()==0 || un.back()!=v1[i]){
//         un.push_back(v1[i]);
//     }i++;

//     }

//         while(j<v2.size()){
//      if(un.size()==0 || un.back()!=v2[j]){
//         un.push_back(v2[j]);
     

//     }j++;}
//     for(int i:un){
//         cout<<i<<" ";
//     }
    

// }
//..intersection
// vector<int>v1={1,2,3,4,5,6};
// vector<int>v2={4,5,6,4,7};
// vector<int>in;
// vector<int>vis(v2.size(),0);
// for(int i=0;i<v1.size();i++){
//     for(int j=0;j<v2.size();j++){
//         if(v1[i]==v2[j] && vis[j]==0){
//            in.push_back(v2[j]);
//            vis[j]=1;
//            break;
//         }
//         if(v2[j]>v1[i]) break;
//     }
// }

// for(int i: in){
//     cout<<i<<" ";
// }

// vector<int>v1={1,2,3,4,5,6};
// vector<int>v2={4,5,6,4,7};
// vector<int>in;
// for(int i=0;i<v1.size();i++){
//     for(int j=0;j<v2.size();j++){
//         if(v1[i]==v2[j] && v2[j-1]!=v2[j]){
//            in.push_back(v2[j]);
           
//            break;
//         }
//         if(v2[j]>v1[i]) break;
//     }
// }

// for(int i: in){
//     cout<<i<<" ";
// }
// optimised 
// int i=0;
// int j=0;
// vector<int>ve;
// while(i<v1.size() && j<v2.size()){
//    if(v1[i]<v2[j]){
//     i++;
//    } 
//   else if(v2[j]<v1[i]){

// j++;
//    }
//    else{
//     ve.push_back(v1[i]);
//     i++;
//     j++;
//    }
// }
 
// for(int i:ve){
//     cout<<i<<" ";
// }
//missing number 
// vector<int>v={1,1,2,2,3,3,4,5,5,6,6,7};

// int flg;
// for(int i=1;i<v.size();i++){
//     flg=0;
//     for(int j=0;j<v.size();j++){
//         if(v[j]==i){
//             flg=1;
//             break;
//         }
//     }
//     if(flg==0) cout<<i;

// }
// int sum=0;
// int n=v.size()+1;
//   int o = n * (n + 1) / 2;
// for(int i=0;i<v.size();i++){
//     sum+=v[i];
// }
// int ans=o-sum;
// cout<<ans;

// int maxi=0;
// int cnt =0;
// for(int  i=0;i<v.size();i++){
//     if(v[i]==1){
//         cnt++;
//         maxi=max(maxi,cnt);
//     }
//     else{
//         cnt=0;
//     }
// }
// cout<<cnt;
// for(int i=0;i<v.size();i++){

//     int num=v[i];
//     int cnt=0;
//     for(int j=0;j<v.size();j++){
//     if(num==v[j]){
//           cnt++;
//     }
     
//     }
//     if(cnt==1) cout<<num;
// }





}

