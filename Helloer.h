/* 
 * File:   Helloer.h
 * Author: kseniya
 *
 * Created on September 20, 2015, 6:01 PM
 */

#ifndef HELLOER_H
#define	HELLOER_H

#include <iostream>

using namespace std;

class Helloer {
public:
    Helloer();
    Helloer(const string& aqwho);
    Helloer(const Helloer& orig);
    virtual ~Helloer();
    string message() const;
private:
    string who;

};

#endif	/* HELLOER_H */

