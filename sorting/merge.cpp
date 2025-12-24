#include <vector>
#include <iostream>
using namespace std;
void mergesort(vector<int> &vec, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (vec[i] <= vec[j])
        {

            temp.push_back(vec[i]);
            i++;
        }
        else
        {
            temp.push_back(vec[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(vec[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(vec[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        vec[idx + st] = temp[idx];
    }
}
void merge(vector<int> &vec, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        merge(vec, st, mid);
        merge(vec, mid + 1, end);
        mergesort(vec, st, mid, end);
    }
}
int main()
{
    vector<int> vec = {5, 7, 8, 9, 6, 5, 4, 8, 9, 3, 4};
    merge(vec, 0, vec.size() - 1);
    for (auto i : vec)
    {
        cout << i << " ";
    }
}
