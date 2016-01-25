/* 
 * File:   main.cpp
 * Author: kseniya
 *
 * Created on September 20, 2015, 5:40 PM
 */

#include <cstdlib>
#include <iostream>
#include "Helloer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Helloer helloer("World");
    cout << helloer.message() << endl;
    return 0;
}

