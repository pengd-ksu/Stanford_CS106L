#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>

using std::cout;    using std::endl;

int main(){
    cout << "Vector begins here: " << endl;
    std::vector<int> myVec {1, 2, 3, 4};
    for (auto iter = myVec.begin(); iter != myVec.end(); ++iter) {
        // iter has type std::vector<int>::iterator
        cout << *iter << endl;
    }

    std::set<int> set{3, 1, 4, 1, 5, 9}; 
    // Show two ways of iterator here, could exchange each other.
    cout << "Set starts here: " << endl;
    // Will only containe one 1
    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        const auto& elem = *iter;
        cout << elem << endl;
    }

    std::map<int, int> map{{1, 6}, {1, 8}, {0, 3}, {3, 9}};
    // Will only contain one pair whose key is 1
    cout << "First map starts here: " << endl;
    for (const auto& [key, value] : map) {
        cout << key << ":" << value << ", " << endl;
    }

    std::map<int, int> map_2{{7, 0}, {6, 1}, {3, 9}, {1, 6}};
    // Will only contain one pair whose key is 1
    cout << "Another map here: " << endl;
    for (auto iter = map_2.begin(); iter != map_2.end(); ++iter) {
        auto key = (*iter).first;
        auto value = iter->second;
        cout << key << ":" << value << ", " << endl;
    }

    return 0;
}