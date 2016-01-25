/*
 * File:   HelloerTest.cpp
 * Author: kseniya
 *
 * Created on Sep 20, 2015, 9:06:23 PM
 */

#include "HelloerTest.h"
#include "Helloer.h"


CPPUNIT_TEST_SUITE_REGISTRATION(HelloerTest);

HelloerTest::HelloerTest() {
}

HelloerTest::~HelloerTest() {
}

void HelloerTest::setUp() {
}

void HelloerTest::tearDown() {
}

void HelloerTest::testMessage() {
    Helloer helloer("Netbeans");
    string result = helloer.message();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(result == "Hello Netbeans");
    }
}

