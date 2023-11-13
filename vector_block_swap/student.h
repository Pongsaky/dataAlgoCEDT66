#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (m == 0) return false;

  if (a < begin() || a >= end() || b < begin() || b >= end()) return false;

  if ((a + m) - begin() > mSize || (b + m) - begin() > mSize) return false;
  if (a > b) {
    if (b + m > a) return false;
  } else {
    if (a + m > b) return false;
  }

  for (int i = 0; i < m; i++) {
    int tmp = *(a+i);
    *(a+i) = *(b+i);
    *(b+i) = tmp;
  }

  return true;
}

#endif

