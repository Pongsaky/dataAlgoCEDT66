#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  using std::cout, std::endl;
  auto itr = ls.begin();
  while(itr != ls.end()) {
    CP::list<T>&  tmp = *itr;
    auto tmpItr = tmp.mHeader;

    mHeader->prev->next = tmpItr->next;
    tmpItr->next->prev = mHeader->prev;

    tmpItr->prev->next = mHeader;
    mHeader->prev = tmpItr->prev;

    tmpItr->next = tmpItr;
    tmpItr->prev = tmpItr;

    mSize += tmp.mSize;
    tmp.mSize = 0;
    itr++;
  }
}

#endif
