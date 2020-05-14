
#include "Counter.hpp"

enum Poop { NORMAL, SMALL_HARD, LARGE_HARD, LARGE_SOFT, LIQUID};

class PoopCounter : public Counter {
public:
  PoopCounter(): countByType{0,0,0,0,0}
  {

  }

  int getCount() const;
  int getCountByType(Poop type) const;
  void increment();
  void incrementByType(Poop type);
private:
  static const int NUM_TYPES{5};
  int countByType[NUM_TYPES];
};
