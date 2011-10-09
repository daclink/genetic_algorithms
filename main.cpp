// copyright (C) 2001-2011 by Patrick Hanevold

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <iostream>

#include "sinTest.h"
//#include "trader.h"

using namespace std;

//#define HISTORY 15 // how many minutes of stock data to predict from (number of inputs to the neural networks)
//#define FUTURE  15 // how many minutes to predict (number of outputs to the neural network)

int main(int argc, char *argv[]){
  #if 1
  // predict sin function
  SinTest test;
  test.go();
  #else
  // do the real thing - predict stock market
  Trader trader;
  trader.go();
  #endif

  return EXIT_SUCCESS;
}
