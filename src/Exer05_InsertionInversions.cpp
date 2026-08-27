//
// Created by Junio Moreira on 26/08/26.
// Question 5 - Insertion Sort Inversions
//

#include <iostream>
#include <vector>

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
// TODO: Simulate Insertion Sort to count the total number of inversions (element shifts).
// TODO: Return the total inversion count.
ll count_inversions_insertion_sort(vector<int>& arr) {
    // Implementation goes here
    return 0;
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N and array from cin and print the total number of inversions
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate inversion counts
void runLocalTests() {
    cout << "=== Question 5 (Insertion Sort Inversions) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}