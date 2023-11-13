#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  int idxPos = 0;
  int idxData = 0;
  bool isCheck = false;

  for (int i = 0; i < mSize; i++) {
    if (i == pos[idxPos]) {
      // mData[i] = mData[i+1];
      // std::cout << "POS : " << pos[idxPos] << std::endl;
      isCheck = true;
      idxPos++;
    } else {
      if (isCheck) mData[idxData] = mData[i];
      idxData++;
    }
  }

  mSize -= pos.size();

}

#endif