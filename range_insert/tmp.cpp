#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  // std::cout << *position << std::endl;
  int sizeV2 = last - first;
  // std::cout << "Size V2 : " << sizeV2 << std::endl;

  size_t pos = position - this->begin();

  this->ensureCapacity(mSize + sizeV2);

  iterator itrPos = begin() + mSize + sizeV2 - 1;
  for (int i = 0;i < mSize - pos; i++) {
    *itrPos = *(begin() + mSize - 1 - i);
    itrPos--;
  }

  // for (int i = 0; i < mCap; i++) std::cout << mData[i] << " ";

  iterator itr = this->begin() + pos;
  while (first != last) {
    *itr = *first;
    itr++;
    first++;
  }

  mSize += sizeV2;

  // std::cout << "mSize : " << mSize << std::endl;
  // std::cout << "mCap : " << mCap << std::endl;

}

#endif
