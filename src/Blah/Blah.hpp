#include <string>
using std::string;

class Blah
{
public:
  Blah(): limit{1}, message{"Hello World"}
  {

  }

  Blah(int initLimit, string initMessage): limit{initLimit}, message{initMessage}
  {

  }

  int getLimit() const;
  string getMessage() const;
private:
  int limit;
  string message;
};
