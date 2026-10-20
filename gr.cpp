#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Сколько чисел: ";
  cin >> n;

  vector<int> a(n);
  cout << "Введите числа: ";
  for (int &x : a)
    cin >> x;

  int first = INT_MIN, second = INT_MIN;
  for (int x : a) {
    if (x > first) {
      second = first;
      first = x;
    } else if (x > second && x != first)
      second = x;
  }

  if (second == INT_MIN)
    cout << "Нет второго по величине\n";
  else
    cout << "Второй по величине: " << second << '\n';

  return 0;
}