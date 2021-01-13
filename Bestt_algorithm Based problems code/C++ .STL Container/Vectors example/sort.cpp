// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
bool myfun(int i,int j)
 {
      return (i<j);
       }

struct myclass {
  bool operator()(int i,int j)

   {
       return (i<j);
       }
}ob;

int main () {
  int my[] = {32,71,12,45,26,80,53,33};
  vector<int>v(my,my+8);               // 32 71 12 45 26 80 53 33
   vector<int>::iterator it;
  // using default comparison (operator <):
    sort(v.begin(),v.begin()+4);           //(12 32 45 71)26 80 53 33

  // using function as comp
   sort(v.begin()+4,v.end(), myfun); // 12 32 45 71(26 33 53 80)

  // using object as comp
    sort (v.begin(),v.end(),ob);     //(12 26 32 33 45 53 71 80)

  // print out content:
    cout << "myvector contains:";
  for (it=v.begin();it!=v.end(); ++it)
    cout << ' ' << *it;
    cout <<endl;

  return 0;
}
