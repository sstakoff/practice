//
//  pointertest.h
//  practice
//
//  Created by Stuart Stakoff on 4/25/21.
//

#ifndef pointertest_h
#define pointertest_h

#include <iostream>
using namespace std;



class PointerTest {
public:
    PointerTest(int val) {
        ptr = new int;
        *ptr = val;
    }
    
    ~PointerTest() {
        cout << "Deleting pointer with deref value of: " << *ptr << endl;
        delete ptr;
    }
    
    PointerTest& operator++() {
        ++(*ptr);
        return *this;
    }
    
    
    friend ostream& operator<<(ostream&, const PointerTest&);

private:
    int *ptr;
};


ostream& operator<<(ostream& ostr, const PointerTest& p) {
    ostr << "Pointer dereferenced value is: " << *(p.ptr) << endl;
    return ostr;
}



#endif /* pointertest_h */
