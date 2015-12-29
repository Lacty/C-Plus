
#include <iostream>
#include <memory>


struct Piyo;

struct Hoge {
  std::shared_ptr<Piyo> p;
	~Hoge() { std::cout << "~Hoge()" << std::endl; }
};

struct Piyo {
  std::shared_ptr<Hoge> p;
	~Piyo() { std::cout << "~Piyo()" << std::endl; }
};

// the difference between row ptr and smart ptr
// plz ref to C-Plus/unique_ptr
int main() {
  {
	  std::shared_ptr<int> p;
		p = std::make_shared<int>(10);
		std::cout << *p << std::endl;
	}

  {
	  std::shared_ptr<int> p;
  	p = std::make_shared<int>(10);

	  std::shared_ptr<int> op;

  	// shared_ptr can copy
  	op = p; // ok
	}

	{ // Circular ref
	  std::shared_ptr<Hoge> hoge;
		hoge = std::make_shared<Hoge>();

		std::shared_ptr<Piyo> piyo;
		piyo = std::make_shared<Piyo>();

		hoge->p = piyo;
		piyo->p = hoge;
	} // can't delete each
}
