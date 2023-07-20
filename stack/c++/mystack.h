/*
 * =====================================================================================
 *       Filename:  mystack.h
 *    Description:  Just a simple stack which implement by C++
 *         Author:  W.D
 * =====================================================================================
 */

#ifndef MYSTACK_H
#define MYSTACK_H

template <typename T>
class Entry {
public:
    Entry(const T&);
    const T& get();

private:
    T* val;
};

template <typename T>
Entry<T>::Entry(const T& _val) {
    val = _val;
}

template <typename T>
const T& Entry<T>::get() {
    return val;
}


#endif

