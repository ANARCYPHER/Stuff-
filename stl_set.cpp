#include <iostream>
#include <iterator>
#include <set>
using namespace std;

class Whore {
  public:
    string name;
    int size;

    bool operator < (const Whore& rhs) const
    {
      return size < rhs.size;
    }

    bool operator > (const Whore& rhs) const
    {
      return size > rhs.size;
    }
};

int main()
{

  //empty set container
  //set<int, less<int>> mySet = {10, 20, 30, 40, 50, 10, 20, 30, 40};


  set<Whore, greater<>> mySet = {{"Blond Whore", 13}, {"Bru Whore", 9}, {"Bur Whore", 14}};

  for(const auto& element: mySet)
  {
    cout<<element.name<<" "<<element.size<<endl;
  }

  return 0;
}