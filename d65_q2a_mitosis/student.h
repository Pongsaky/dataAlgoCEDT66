#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    CP::stack<T> st;

    int i = 0;
    
    while(!empty()) {
        if (i > b) break;
        T tmp = top();
        if ( i >= a && i <= b) {
            st.push(tmp);
            st.push(tmp);
        } else st.push(tmp);
        pop();
        i++;
    }
        
    while(!st.empty()) {
        T data = st.top();
        push(data);
        st.pop();
    }
}

#endif