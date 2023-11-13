#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    if (this->mCap > this->mSize) this->expand(mSize);
}

#endif
