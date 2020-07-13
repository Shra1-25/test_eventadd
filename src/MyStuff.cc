// -*- C++ -*-
//
// Package:     MyStuff/src
// Class  :     MyStuff
// 
// Implementation:
//     [Notes on implementation]
//
// Original Author:  Shravan Sunil Chaudhary
//         Created:  Sun, 12 Jul 2020 22:04:27 GMT
//

// system include files

// user include files
#include "StuffProd/MyStuff/interface/MyStuff.h"
using namespace std;

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
MyStuff::MyStuff()
{
  x=100;
  std::cout<<" >> x is: "<<x<<std::endl;
}

// MyStuff::MyStuff(const MyStuff& rhs)
// {
//    // do actual copying here;
// }

MyStuff::~MyStuff()
{
}

//
// assignment operators
//
// const MyStuff& MyStuff::operator=(const MyStuff& rhs)
// {
//   //An exception safe implementation is
//   MyStuff temp(rhs);
//   swap(rhs);
//
//   return *this;
// }

//
// member functions
//

//
// const member functions
//

//
// static member functions
//
