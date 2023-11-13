#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  using std::cout, std::endl;
  //write your code here
  // std::cout << data[0].first;
  T *tmp_mData = new T[mSize + data.size()]();

  std::sort(data.begin(), data.end());

  int idxVec = 0;
  int idxData = 0;

  for (int i = 0; i < mSize + data.size(); i++) {
    if (i == data[idxData].first + idxData) {
      tmp_mData[i] = data[idxData].second;
      idxData++;
    } else {
      tmp_mData[i] = mData[idxVec];
      idxVec++;
    }
  }

  mData = tmp_mData;
  mSize += data.size();

  // for (int i = 0;i < data.size(); i++) cout << data[i].first << " ";
  // cout << endl;   


}

#endif
