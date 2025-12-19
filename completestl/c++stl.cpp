#include <iostream>
#include <utility>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<deque>
#include<map>
using namespace std;
int main()
{

    // c++ stl are divide infour parts
    // algorithm
    // container
    // function
    // iterators
    // container
    // first thig
    // pair.
    // pair<int,int>p={3,5};
    //    cout<<p.first<<" "<<p.second;
    //    pair<int,pair<int,int>>pa={2,{2,2}};
    //    cout<<pa.first<<" "<<pa.second.first<<" "<<pa.second.second;
    //    pair<int,int>arr[]={{2,5},{2,4},{5,7}};
    //    cout<<arr[1].first<<endl;
    // cout<<arr[1].second;
    // vector
    // vector<int>v;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[0];
    // vector<pair<int,int>>vec;
    // vec.push_back({1,5});
    // vec.emplace_back(1,6);
    // cout<<vec[0].first;
    // vector<int>v{5,100};
    // cout<<v[2];
    // vector<int>v1(5);//a vector of size 5 declre with zeros and may be garbage value also 
    // cout<<v[3];
    // cout<<v1[2];
    // vector<int>v1(5,20);
    // cout<<v1[4];
    // vector<int>v2(v1);
    // cout<<v1.at(2);
    //dynamic in nature 
    //iterator
    // vector<int>v(5,20);
    // vector<int>::iterator it=v.begin();
    // it+=2;
    // cout<<*(it)<<" ";
    
// vector<int>::iterator it =v.end();
// vector<int>::iterator it =v.rend();
// vector<int>::iterator it =v.rbegin();
//   cout<<v[0]<<" "<<v.at[0];
//   cout<<v.back()<<" ";
//  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    // cout<<*(it)<<" ";
// }
//simpler
//  for(auto it :v)
    // cout<<it<<" ";
// }
//auuton it 
//  for(auto it=v.begin();it!=v.end();it++)
    // cout<<*(it)<<" ";
// }
//akhiri se ek phle tk delete
//some other opretion
//erase
//vector<int>v(2,100);
//10,20,12,23
//v.erase(v.begin()+1);
//v.erase(v.begin()+2,v.begin()+4);//10,20,35
//cout<<v[1];
//insert
//v.insert(v.begin(),300);
//v.insert(v.begin()+1,2,10);//300 10 10 100 100;
//copy
//vector<int>v(2,100);
//vector<int>copy(2,10);//50,50
//v.insert(v.begin(),v.begin(),v.end())//100,100,10,10

// size()
//cout<<v.size()
//v.pop back()
// v1.swap() swap vector
//v.empty()
//v.clear()
//list()
// list<int>l;
// l.push_back(2);
// l.emplace_back(4);
// l.push_front(5);
// l.emplace_front(2);
//rest ae same
// deque
// deque<int>dq;
// dq.push_back(1);
// dq.emplace_back(2);
// dq.push_front(3);
// dq.emplace_front(1);
// dq.pop_back();
// dq.push_front(6);
// dq.back();
// dq.front();
//cc me
//stack
// stack<int>st;
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);
// st.push(5);
// cout<<st.top();
// st.pop();
// st.size();
// st.empty();
// stack<int>st1,st2;
// st1.swap(st);
//quee
// queue<int>q;
// q.push(85);
// q.push(6);
// q.emplace(9);
// q.back()+=69;
// cout<<q.back();
// cout<<q.front();
// q.pop();
// cout<<q.front();
// priority queue
// priority_queue<int>p;
// p.push(55);
// p.push(78);
// p.emplace(95);
// cout<<p.top();
// p.pop();
// priority_queue<int ,vector<int>,greater<int>>p;
// p.push(55);
// p.push(78);
// p.emplace(95);
// cout<<p.top();
//set
// set<int>st;
// st.insert(1);
// st.insert(5);
// st.insert(5);
// auto i=st.find(1);
// int cnt=st.count(5);
// cout<<*i;
// st.erase(i,st.end());

//cout<<cnt;
// multiset<int>ms;
// // duplicate alowed
// ms.insert(1);
// ms.insert(1);
// ms.insert(1);
// ms.insert(1);
// //ms.erase(ms.find(1));
// int cn=ms.count(1);
// //ms.erase(ms.find(1),ms.find(1)+2);
// // cout<<cn;
// unorder me sorted no and lower ana upperboundnot work 
// unoque ar5e occurs and aalla resame 
// map
// unique key duplicates value in sorted
// map<int,int>mp;
// map<int,pair<int,int>>mapa;
// map <pair<int,int>,int>mapp;

// mp[1]=5;
// mp.emplace(6,7);
// mp.insert({8,8});
// mp[{5,8}]=10;
// for(auto it :mp){
//     cout<<it.first<<" "<<it.second<<endl;
// }
// cout<<mp[1];
// cout<<mp[5];
// auto it =mp.find(8);
// cout<<*(it).second;
// auto it =mp.find(8)
// nhihe to end
// multimap me duplicates and is_sorted
// unorderd sorted nhi hote he 
// algorithm
//sort()inacending
//sort(a,a+n,greater<int>);
// in my way
//sort(a,a+n,comp)
// bool comp(pair<int,int>p1,pair<int,int>p2) {
// if(p1.second<p2.second) return true;
// if(p1.second>p2.second) return false;
// if(p1.first>p2.first) return true;
// return false;

// }
// builtpopcount
// int num=4;
// int cnt=__builtin_popcount();
// int num=42.565369858563352;
// int cnt=__builtin_popcountll();

 






}