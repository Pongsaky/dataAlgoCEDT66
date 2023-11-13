#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include <math.h>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here

    T tmp = mData[(mFront + pos) % mCap];
    for (int i = mFront + pos; i > mFront; i--) mData[(i) % mCap] = mData[(i + mCap - 1) % mCap];
    mData[mFront] = tmp;
}

#endif
