// system and timing
#include <iostream>
#include <chrono>

// data structure imports
#include <deque>
#include <vector>
#include <iterator>
#include <utility> // pair

using std::cout;    using std::endl;

// count_occurrences
template <typename InputIt, typename UniPred>
int count_occurrences_fnptr(InputIt begin, InputIt end, UniPred pred){
    int count = 0;
    for (auto iter = begin; iter != end; ++iter){
        if (pred(*iter)) count++;
    }
    return count;
}

int main() {

    int limit = 5;
    auto isMoreThan = [limit] (int n) {return n > limit;};
    std::vector<int> nums = {3, 5, 6, 7, 9, 13};
    
    cout << count_occurrences_fnptr(nums.begin(), nums.end(), isMoreThan) << endl;

    return 0;
}

