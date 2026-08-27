//
// Created by Junio Moreira on 26/08/26.
// Question 1 - Bubble Sort Swap Count
//

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

using ll = long long;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// Helper function to print a vector in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
// TODO: Implement Bubble Sort in ascending order.
// TODO: Count and return the total number of element swaps performed during sorting.
ll bubble_sort_swap_count(vector<int>& arr) {
    // Implementation goes here
    return 0;
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read inputs from standard input (cin) and output sorted array and swap count
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate logic before submitting to Online Judge
void runLocalTests() {
    cout << "=== Question 1 (Bubble Sort Swap Count) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}