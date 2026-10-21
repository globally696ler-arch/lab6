#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <tuple>
#include <vector>

int main() {
  std::vector<std::tuple<std::string, int, double>> students = {
      {"Иван", 25, 4.5},
      {"Мария", 22, 4.8},
      {"Петр", 30, 4.2},
      {"Анна", 20, 4.9}};

  // Самый старший
  auto oldest = *std::max_element(students.begin(), students.end(),
                                  [](const auto &a, const auto &b) {
                                    return std::get<1>(a) < std::get<1>(b);
                                  });
  std::cout << "Самый старший: " << std::get<0>(oldest) << " ("
            << std::get<1>(oldest) << ")" << "\n";

  // С самым высоким баллом
  auto best = *std::max_element(students.begin(), students.end(),
                                [](const auto &a, const auto &b) {
                                  return std::get<2>(a) < std::get<2>(b);
                                });
  std::cout << "Лучший студент: " << std::get<0>(best) << ", балл "
            << std::get<2>(best) << "\n";

  // Средний возраст
  int totalAge = std::accumulate(
      students.begin(), students.end(), 0,
      [](int sum, const auto &s) { return sum + std::get<1>(s); });
  std::cout << std::fixed << std::setprecision(1);
  std::cout << "Средний возраст: "
            << static_cast<double>(totalAge) / students.size() << "\n";

  // Сортировка по баллу
  std::sort(students.begin(), students.end(), [](const auto &a, const auto &b) {
    return std::get<2>(a) > std::get<2>(b);
  });

  std::cout << "Итоги группы:\n";
  for (const auto &[name, age, gpa] : students) {
    std::cout << name << " - " << gpa << "\n";
  }

  return 0;
}