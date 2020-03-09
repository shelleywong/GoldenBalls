#include <iostream>
#include <set>
#include <stack>
#include <vector>
#include <map>

using namespace std;

Decision::Decision(){}
void Decision::set_name(string name){
player_name=name;
}

bool Decision::split_or_steal(int choice){
if(choice==split)
{
  return true;
}
else
  return false;

}

string Decision::get_name(){

return player_name;
}
