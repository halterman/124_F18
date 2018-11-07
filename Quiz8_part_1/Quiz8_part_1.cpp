#include <iostream>
#include <vector>
int main() {
	std::vector<double> set;
	set.push_back(-1.5);
	set.push_back(0.5);
	set.push_back(3);
	set.push_back(2.3);
	std::cout << set.size() << '\n';     // 1.
	std::cout << set[2] << '\n';      // 2.
	std::cout << set.at(0) << '\n';    // 3.
	set.pop_back();
	std::cout << set.size() << '\n';    // 4.
	std::vector<int> nums{ 4, 1, 6, 2, 3 };
	int x = 2;
	std::cout << nums[x] + 1 << '\n';    // 5.
	std::cout << nums[x + 1] << '\n';    // 6.
	for (int value : nums) std::cout << value << ' '; // 7.  
}
