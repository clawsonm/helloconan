#include <string>
#include <iostream>
#include "json.hpp"
#include "Blah/Blah.hpp"
#include "Counter/PoopCounter.hpp"

using std::cout;
using std::endl;
using std::string;
using json = nlohmann::json;

int main(int argc, char **argv)
{
  const Blah blahgiddy{3, "Hello Classes"};

  for (int i = 0; i < blahgiddy.getLimit(); i++) {
    cout << blahgiddy.getMessage() << endl;
  }

  PoopCounter poocount{};

  poocount.increment();

  poocount.incrementByType(Poop::LARGE_SOFT);

  cout << "Normal: " << poocount.getCountByType(Poop::NORMAL) << endl;
  cout << "Large and soft: " << poocount.getCountByType(Poop::LARGE_SOFT) << endl;
  cout << "Total: " << poocount.getCount() << endl;

	return 0;
}
