#ifndef _DECISION_H_
#define _DECISION_H_

#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <map>

using namespace std;

class Decision{

protected:
  Decision();
public:
  enum decision {split,steal};
  void set_name(name);
  bool split_or_steal(int choice);
  string get_name();
  string player_name;
};

#include "Decision.cpp"
#endif
