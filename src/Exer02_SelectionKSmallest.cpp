//
// Created by Junio Moreira on 26/08/26.
// Question 2 - Selection Sort K Smallest
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
// TODO: Perform exactly k outer iterations of Selection Sort on the array.
// TODO: Find the minimum element in the unsorted suffix and swap it to its correct position.
void selection_sort_k_iterations(vector<int>& arr, int k) {
    // Implementation goes here
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N, k, and array from cin, run selection_sort_k_iterations, and print the first k elements
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate the first k sorted elements
void runLocalTests() {
    cout << "=== Question 2 (Selection Sort K Smallest) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}