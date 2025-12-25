#include <bits/stdc++.h>
using namespace std;

int main() {

    /* ================================
       1️⃣ INTEGER HASHING (Array based)
       ================================ */
    cout << "Integer Hashing using Array\n";

    int arr[] = {1, 3, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int hashArr[10] = {0};   // assuming numbers are <= 9

    for(int i = 0; i < n; i++) {
        hashArr[arr[i]]++;
    }

    cout << "Frequency of numbers:\n";
    for(int i = 0; i < 10; i++) {
        if(hashArr[i] > 0)
            cout << i << " -> " << hashArr[i] << endl;
    }


    /* ================================
       2️⃣ CHARACTER HASHING
       ================================ */
    cout << "\nCharacter Hashing\n";

    string s = "aabbccdde";
    int hashChar[26] = {0};

    for(char c : s) {
        hashChar[c - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if(hashChar[i] > 0)
            cout << char(i + 'a') << " -> " << hashChar[i] << endl;
    }


    /* ================================
       3️⃣ HASHING using unordered_map
       ================================ */
    cout << "\nHashing using unordered_map\n";

    vector<int> v = {10, 20, 10, 30, 20, 10};

    unordered_map<int, int> umap;

    for(int x : v) {
        umap[x]++;
    }

    for(auto it : umap) {
        cout << it.first << " -> " << it.second << endl;
    }


    /* ================================
       4️⃣ HASHING using map (sorted)
       ================================ */
    cout << "\nHashing using map (sorted order)\n";

    map<int, int> mp;

    for(int x : v) {
        mp[x]++;
    }

    for(auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }


    /* ================================
       5️⃣ CHECK ELEMENT FREQUENCY
       ================================ */
    cout << "\nCheck frequency of a number\n";

    int q;
    cout << "Enter number to check frequency: ";
    cin >> q;

    cout << "Frequency of " << q << " is: " << umap[q] << endl;


    return 0;
}
