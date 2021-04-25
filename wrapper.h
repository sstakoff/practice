//
//  wrapper.h
//  practice
//
//  Created by Stuart Stakoff on 4/25/21.
//

#ifndef wrapper_h
#define wrapper_h

#include <iostream>
using namespace std;

class Wrapper {
public:
    Wrapper(int *p) : ptr(p) {}
    
    Wrapper& operator++() {
        ++(*ptr);
        return *this;
    }
    
    friend ostream& operator<<(ostream&, const Wrapper&);
    
private:
    int *ptr;
};

ostream& operator<<(ostream& ostr, const Wrapper& w) {
    ostr << "Wrapped value is: " << *(w.ptr) << endl;
    return ostr;
}


#endif /* wrapper_h */
