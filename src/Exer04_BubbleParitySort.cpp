//
// Created by Junio Moreira on 26/08/26.
// Question 4 - Bubble Sort Parity (Evens Ascending, Odds Descending)
//

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define IOFAST() ios_base::sync_with_stdio(0); cin.tie(0);

// Helper function to print a vector in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

// 1. PURE LOGIC
// TODO: Return true if element 'a' and 'b' are out of order according to the parity rule:
//       1. Evens must precede odds.
//       2. Even numbers must be sorted in ascending order.
//       3. Odd numbers must be sorted in descending order.
bool should_swap(int a, int b) {
    // Implementation goes here
    return false;
}

// TODO: Implement Bubble Sort using the custom should_swap comparator condition.
void bubble_sort_parity(vector<int>& arr) {
    // Implementation goes here
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N and array from cin, sort using bubble_sort_parity, and print the resulting array
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate custom parity ordering
void runLocalTests() {
    cout << "=== Question 4 (Bubble Sort Parity) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}