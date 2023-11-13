#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <map>

//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  using std::cout, std::endl;
  //do someting here
  std::map<T, int> m;
  CP::vector<T> vec;

  iterator itr = begin();

  while(itr != end()) {
    if (m[*itr] == 0) vec.push_back(*itr);
    m[*itr]++;
    itr++;
  }

  for (int i = 0; i < vec.size(); i++) {
    mData[i] = vec[i];
  } 

  mSize = vec.size();

}

#endif
