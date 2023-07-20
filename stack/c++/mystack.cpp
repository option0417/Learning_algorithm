/*
 * =====================================================================================
 *       Filename:  mystack.cpp
 *    Description:  Just a simple stack which implement by C++ 
 *         Author:  W.D Su
 * =====================================================================================
 */

#include "mystack.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout<<"Hello, world"<<endl;

    int a = 123;
    Entry<int*> entry = Entry<int*>(a);

    cout<<"Get: "<<entry.get()<<endl;

    return 0;
}
