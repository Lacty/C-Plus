
#include <iostream>
#include <vector>


int main() {
  std::vector<int> v = { 0, 1, 2, 3 };
  
  // for
  for (unsigned int i = 0; i < v.size(); i++) {
    std::cout << v[i] << ",";
  }
  std::cout << std::endl;
  
  // foreach
  for (auto it : v) {
    std::cout << it << ",";
  }
  std::cout << std::endl;
  
  // ref
  for (auto& it : v) {
    it += 1;
  }
  
  for (auto it : v) {
    std::cout << it << ",";
  }
  std::cout << std::endl;
}
