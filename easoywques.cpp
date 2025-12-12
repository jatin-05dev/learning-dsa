#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Max element
int maxElement(vector<int>& arr) {
    int mx = arr[0];
    for(int x : arr) mx = max(mx, x);
    return mx;
}

// 2. Min element
int minElement(vector<int>& arr) {
    int mn = arr[0];
    for(int x : arr) mn = min(mn, x);
    return mn;
}

// 3. Reverse array
void reverseArray(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    while(i < j) swap(arr[i++], arr[j--]);
}

// 4. Linear Search
int linearSearch(vector<int>& arr, int target) {
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] == target) return i;
    return -1;
}

// 5. Palindrome string
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while(i < j)
        if(s[i++] != s[j--]) return false;
    return true;
}

// 6. Count vowels
int countVowels(string s) {
    int count = 0;
    string v = "aeiouAEIOU";
    for(char c : s)
        if(v.find(c) != string::npos) count++;
    return count;
}

// 7. Sum of digits
int sumDigits(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 8. Factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) fact *= i;
    return fact;
}

// 9. Fibonacci
void fibonacci(int n) {
    int a = 0, b = 1;
    while(n--) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// 10. Check prime
bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

// MAIN function (menu)
int main() {
    cout << "Top 10 Easy DSA Codes\n";

    vector<int> arr = {5, 2, 9, 1, 7};
    string s = "madam";
    int num = 123;

    cout << "Max element: " << maxElement(arr) << endl;
    cout << "Min element: " << minElement(arr) << endl;

    reverseArray(arr);
    cout << "Reversed array: ";
    for(int x : arr) cout << x << " "; cout << endl;

    cout << "Linear search (find 9): " << linearSearch(arr, 9) << endl;

    cout << "Palindrome string? " << (isPalindrome(s) ? "Yes" : "No") << endl;

    cout << "Vowels count in '" << s << "': " << countVowels(s) << endl;

    cout << "Sum of digits (123): " << sumDigits(123) << endl;

    cout << "Factorial of 5: " << factorial(5) << endl;

    cout << "Fibonacci (10 terms): ";
    fibonacci(10);

    cout << "Is 29
