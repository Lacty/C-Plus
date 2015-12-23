
#include <iostream>
#include <unordered_map>


int main() {
  std::unordered_map<std::string, int> map = {
    { "PlayerAttack", 30 },
    { "EnemyAttack", 20 }
  };
  map["PlayerHP"] = 100;
  map["EnemyHP"] = 50;

  std::cout << "PlayerAttack = " << map["PlayerAttack"] << std::endl;
  std::cout << "EnemyHP = " << map["EnemyHP"] << std::endl;
}
