
#include <iostream>
#include <memory>


struct Piyo;

struct Hoge {
  std::shared_ptr<Piyo> p;
	~Hoge() { std::cout << "~Hoge()" << std::endl; }
};

struct Piyo {
  std::weak_ptr<Hoge> p;
	~Piyo() { std::cout << "~Piyo()" << std::endl; }
};

// the difference between row ptr and smart ptr
// plz ref to C-Plus/unique_ptr
int main() {
	{ // use weak ptr
	  std::shared_ptr<Hoge> hoge;
		hoge = std::make_shared<Hoge>();

		std::shared_ptr<Piyo> piyo;
		piyo = std::make_shared<Piyo>();

		hoge->p = piyo;
		piyo->p = hoge;
	} // can delete each
}
