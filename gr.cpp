#include <algorithm> // для sort() — сортировки
#include <iostream>  // для cin / cout — ввода и вывода
#include <vector>    // для vector — списка (динамического массива)
using namespace std; // чтобы не писать std:: перед cin, cout, vector

int main() {
  int n;
  cout << "Сколько чисел? ";
  cin >> n;

  // Создаём список размера n и заполняем его
  vector<int> data(n); // список из n целых чисел
  cout << "Введите " << n << " чисел: ";
  for (int i = 0; i < n; i++)
    cin >> data[i]; // читаем число и кладём в i-ю ячейку

  // Сортируем по возрастанию
  sort(data.begin(), data.end());

  // Ищем середину
  int mid = n / 2; // индекс центрального элемента

  // Считаем медиану
  if (n % 2 == 1) {
    // Нечётное количество - берём центральный элемент
    cout << "Медиана: " << data[mid];
  } else {
    // Чётное количество - среднее двух центральных
    cout << "Медиана: " << (data[mid - 1] + data[mid]) / 2.0;
  }

  return 0;
}