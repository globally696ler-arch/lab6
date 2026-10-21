#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <sstream> // нужен для разбора строки

using namespace std;

int main()
{
  int n;
  cout << "Сколько чисел? ";
  cin >> n;

  // Очищаем буфер после ввода числа n (убираем нажатие Enter)
  cin.ignore();

  cout << "Введите " << n << " чисел: ";
  string line;
  getline(cin, line); // Считываем всю строку целиком

  // Разбиваем строку на отдельные числа
  stringstream ss(line);
  vector<double> data;
  double num;
  while (ss >> num)
  {
    data.push_back(num);
  }

  // Проверка количества
  if (data.size() < n)
  {
    cout << "Ошибка: вы ввели меньше чисел, чем нужно (нужно " << n << ", введено " << data.size() << ").\n";
    return 0;
  }
  else if (data.size() > n)
  {
    cout << "Ошибка: вы ввели больше чисел, чем нужно (нужно " << n << ", введено " << data.size() << ").\n";
    return 0;
  }

  // Сортируем по возрастанию
  sort(data.begin(), data.end());

  // Ищем середину
  int mid = n / 2;

  // Считаем медиану
  if (n % 2 == 1)
  {
    cout << "Медиана: " << data[mid] << "\n";
  }
  else
  {
    cout << "Медиана: " << (data[mid - 1] + data[mid]) / 2.0 << "\n";
  }

  return 0;
}