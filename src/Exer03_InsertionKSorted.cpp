//
// Created by Junio Moreira on 26/08/26.
// Question 3 - Insertion Sort on K-Sorted Array
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
// TODO: Sort the k-sorted array using Insertion Sort.
// TODO: Count and return the total number of inner loop comparisons made during the sort.
ll insertion_sort_count_comparisons(vector<int>& arr) {
    // Implementation goes here
    return 0;
}

// 2. ONLINE JUDGE ADAPTER
// TODO: Read N, k, and array from cin, sort array, and output sorted elements and total comparisons
void onlineJudge() {
    // Implementation goes here
}

// 3. LOCAL TESTS
// TODO: Add local test cases to validate sorted array and exact comparison counts
void runLocalTests() {
    cout << "=== Question 3 (Insertion Sort K-Sorted) ===\n\n";

    // Test cases go here
}

int main() {
    IOFAST();
    runLocalTests();  // <- local testing mode
    // onlineJudge(); // <- online judge mode

    return 0;
}