 #include <vector>
#include <iostream>
using namespace std;
int part(vector<int> &vec, int st, int end)
{
    int idx=st-1,pvt=vec[end];
    for(int j=st;j<end;j++){
        if(vec[j]<=pvt){
            idx++;
            swap(vec[j],vec[idx]);
        }
    }
    idx++;
    swap(vec[end],vec[idx]);
    return idx;
    
}
void quick(vector<int> &vec, int st, int end)
{
    if (st < end)
    {
        int pvt = part(vec,st,end);
        quick(vec, st, pvt-1);
        part(vec, pvt+1,end);
    }
}
int main()
{
    vector<int> vec = {5, 7, 8, 9, 6, 5, 4, 8, 9, 3, 4};
    quick(vec, 0, vec.size() - 1);
    for (auto i : vec)
    {
        cout << i << " ";
    }
}
