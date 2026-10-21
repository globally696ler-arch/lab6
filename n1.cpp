#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <random>

int main() {
  int n;
  std::cout << "Введите N: ";
  std::cin >> n;

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  std::vector<int> numbers(n);
  for (int &x : numbers)
    x = dist(gen);

  std::cout << "Исходный список: ";
  for (int x : numbers)
    std::cout << x << " ";
  std::cout << "\n";

  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  std::cout << "Сумма: " << sum << "\n";
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Среднее: " << static_cast<double>(sum) / n << "\n";
  std::cout << "Минимум: " << *std::min_element(numbers.begin(), numbers.end())
            << "\n";
  std::cout << "Максимум: " << *std::max_element(numbers.begin(), numbers.end())
            << "\n";

  std::sort(numbers.begin(), numbers.end());
  std::cout << "Отсортированный: ";
  for (int x : numbers)
    std::cout << x << " ";
  std::cout << "\n";

  // Удаление дубликатов
  numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
  std::cout << "Без дубликатов: ";
  for (int x : numbers)
    std::cout << x << " ";
  std::cout << "\n";

  return 0;
}