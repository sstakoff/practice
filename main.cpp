//
//  main.cpp
//  practice
//
//  Created by Stuart Stakoff on 4/25/21.
//

#include <iostream>
#include "wrapper.h"
#include "pointertest.h"
#include "big3.h"

using namespace std;


void wrapper_test() {
    int val = 12;
    
    Wrapper wrap(&val);
    ++wrap;
    cout << wrap << endl;
    
    Wrapper wrap2 = wrap;
    ++wrap;
    cout << wrap2 << endl;

}

void pointerIncrement(PointerTest p) {
    ++p;
}


void pointer_test() {
    int val = 12;
    
    PointerTest p1(val);
    ++p1;
    cout << p1 << endl;
    
    pointerIncrement(p1);
    
    PointerTest p2 = p1;
    ++p2;
    cout << p2 << endl;

}


void big3_test1() {
    cout << "Start big3_test1" << endl;
    Big3 b;
    
    
    cout << "About to call b3foo" << endl;

    Big3 b2 = b3foo(b);
    
    cout << "About to exit big3_test1" << endl;
}

void big3_test2() {
    cout << "Start big3_test2" << endl;
    Big3 b;
    
    
    cout << "About to call b3bar" << endl;

    Big3 b2 = b3bar(b);
    
    cout << "About to exit big3_test2" << endl;
}

void big3_test3() {
    cout << "Start big3_test3" << endl;
    Big3 b;
    
    
    cout << "About to call b3pickle" << endl;

    Big3 &b2 = b3pickle(b);
    
    cout << "About to exit big3_test3" << endl;
}




int main(int argc, char **argv) {
    
//    wrapper_test();
    
//    pointer_test();
    
    big3_test1();
    
    cout << endl << endl << endl;
    
    big3_test2();
    
    cout << endl << endl << endl;

    big3_test3();
    
    return 0;
}

