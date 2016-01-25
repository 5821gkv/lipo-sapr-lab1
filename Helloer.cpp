/* 
 * File:   Helloer.cpp
 * Author: kseniya
 * 
 * Created on September 20, 2015, 6:01 PM
 */

#include "Helloer.h"

Helloer::Helloer() {
}

Helloer::Helloer(const string& awho)
{
    who = awho;
}

Helloer::Helloer(const Helloer& orig) {
}

Helloer::~Helloer() {
}

string Helloer::message() const
{
    return (string)"Hello " + who;
}