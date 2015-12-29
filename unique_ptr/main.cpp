
#include <iostream>
#include <memory>


int main() {
  { // row pointer
	  int* p = new int(10);
		std::cout << *p << std::endl;

		delete p; // must delete
	}

	{ // smart pointer
	  std::unique_ptr<int> p;
		p = std::make_unique<int>(10);
		std::cout << *p << std::endl;
	} // it may be not erased

  std::unique_ptr<int> p;
	p = std::make_unique<int>(10);

	std::unique_ptr<int> op;
  
	// unique_ptr can not copy
	op = p; // err
}
