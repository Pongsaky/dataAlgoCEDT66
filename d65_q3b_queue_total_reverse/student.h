#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"
#include <stack>

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  if (aux == 0) aux = 1;
  else aux = 0;
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  if (aux == 1) return mData[(mFront + mSize - 1) % mCap];
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if (aux == 1) return mData[mFront];
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if (aux == 0) mData[(mFront + mSize) % mCap] = element;
  else {
    mData[(mFront + mCap - 1) % mCap] = element;
    mFront = (mFront + mCap - 1) % mCap;
  }
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if (aux == 0) mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif