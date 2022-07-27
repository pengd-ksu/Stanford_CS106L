#include <iostream>
#include <vector>

using std::cout;    using std::endl;
using std::vector;

void shift(vector<std::pair<int, int> >&nums) {
    for (auto& [num1, num2]: nums) {
        num1++;
        num2++;
    }
}

int main() {
    //vector<std::pair<int, int> > my_nums = {{1, 2}};
    vector<int> my_nums = {1, 2};
    //shift(my_nums);
    cout << "Before shifting: " << endl;
    for (std::size_t i = 0; i < my_nums.size(); i++){
        //const auto& ele = my_nums[i];
        //cout << ele << endl;
        cout << my_nums[i] << endl;
    }
    //shift(my_nums);
    cout << "After shifting: "<< endl;
}