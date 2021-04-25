//
//  big3.h
//  practice
//
//  Created by Stuart Stakoff on 4/25/21.
//

#ifndef big3_h
#define big3_h

#include <iostream>
using namespace std;


class Big3 {
public:
    Big3() {
        cout << "Default constructor called" << endl;
    }
    
    Big3(const Big3&) {
        cout << "Copy constructor called" << endl;
    }
    
    Big3& operator=(const Big3&) {
        cout << "Assignment op called" << endl;
        return *this;

    }
    
    ~Big3() {
        cout << "Destructor" << endl;
    }
};

Big3 b3foo(Big3 x) {
    cout << "Inside b3foo" << endl;
    return x;
}

Big3 b3bar(Big3 &x) {
    cout << "Inside b3bar" << endl;
    return x;
}

Big3& b3pickle(Big3 &x) {
    cout << "Inside b3pickle" << endl;
    return x;
}



#endif /* big3_h */
