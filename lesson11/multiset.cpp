#include <iostream>
#include <set>
#include <string>

void print_set(std::multiset<int> s)
{
      for (auto& n : s) {
          std::cout << n << ";\n";
    }
}

int main()
{
    std::multiset<int> s;
    s.insert(5);
    s.insert(34);
    s.insert(321);
    s.insert(5);
    print_set(s);
}
