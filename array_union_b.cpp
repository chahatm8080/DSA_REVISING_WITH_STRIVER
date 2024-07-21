/* Brute Force Method
Combine Arrays: Use insert to combine arr2 into arr1.
Remove Duplicates: Use a std::set to automatically remove duplicates and sort the elements.
Convert Set to Vector: Convert the set back to a vector for the final result*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>//algorithms provides collection of function.
using namespace std;
vector<int>unionBruteForce(vector<int>& arr1, vector<int>& arr2) {
    // Combine both arrays
    vector<int> combined = arr1;
    combined.insert(combined.end(), arr2.begin(), arr2.end());
    
    // Remove duplicates using a set
    set<int> uniqueElements(combined.begin(), combined.end());
    
    // Convert set back to a sorted vector
    vector<int> result(uniqueElements.begin(), uniqueElements.end());
    
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 3, 6, 7};

    vector<int> result = unionBruteForce(arr1, arr2);

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}
