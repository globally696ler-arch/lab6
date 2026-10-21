#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>

int main() {
  std::vector<int> list1 = {1, 2, 3, 4, 5};
  std::vector<int> list2 = {4, 5, 6, 7, 8};
  // Через множества
  std::set<int> set1(list1.begin(), list1.end());
  std::set<int> set2(list2.begin(), list2.end());
  // Обьединение
  std::set<int> unionSet;
  std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                 std::inserter(unionSet, unionSet.begin()));
  // Пересечение
  std::set<int> intersection;
  std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                        std::inserter(intersection, intersection.begin()));
  // Разность
  std::set<int> difference;
  std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(),
                      std::inserter(difference, difference.begin()));
  std::cout << "Обьединение: ";
  for (int x : unionSet)
    std::cout << x << " ";
  std::cout << "\n";

  std::cout << "Пересечение: ";
  for (int x : intersection)
    std::cout << x << " ";
  std::cout << "\n";

  std::cout << "Разность: ";
  for (int x : difference)
    std::cout << x << " ";
  std::cout << "\n";

  return 0;
}