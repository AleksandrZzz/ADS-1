// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t) {
  int i;
  if (value < 2) {
    return false;
 } else {
    for (i = 2; i < value; i++) {
      if (value % i == 0) return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t s = 0, num = 0;
    for (uint64_t i = 2; num < n; i++) {
        if (checkPrime(i)) {
            s = i;
            num++;
        }
    }
    return s;
}

uint64_t nextPrime(uint64_t) {
  for (int i = 1; i < value; i++) {
    if (checkPrime(value) == true) {
 value++;
      if (checkPrime(value) == false) {
        while (checkPrime(value) == false) {
          value++;
        }
        return value;
 } else {
        return value;
      }
    } else {
      while (checkPrime(value) == false) value++;
      return value;
    }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++)
        if (checkPrime(i))
            sum = sum + i;
    return sum;
}
