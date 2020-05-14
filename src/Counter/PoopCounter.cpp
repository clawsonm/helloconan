
#include "PoopCounter.hpp"

int PoopCounter::getCount() const
{
  int count{0};
  for (int i = 0; i < PoopCounter::NUM_TYPES; i++) {
    count += countByType[i];
  }
  return count;
}

int PoopCounter::getCountByType(Poop type) const
{
  if(type >= 0 && type < PoopCounter::NUM_TYPES) {
    return countByType[type];
  }
  return 0;
}

void PoopCounter::increment()
{
  countByType[0]++;
}

void PoopCounter::incrementByType(Poop type)
{
  countByType[type]++;
}
