def median(nums):
    nums = sorted(nums)  # сортируем список
    n = len(nums)
    mid = n // 2  # индекс середины

    if n % 2 == 1:  # нечётное количество
        return nums[mid]
    else:  # чётное количество
        return (nums[mid - 1] + nums[mid]) / 2


def median(nums):
    nums = sorted(nums)  # сортируем список
    n = len(nums)
    mid = n // 2  # индекс середины

    if n % 2 == 1:  # нечётное количество
        return nums[mid]
    else:  # чётное количество
        return (nums[mid - 1] + nums[mid]) / 2


# Запрашиваем количество чисел
n = int(input("Сколько чисел? "))

# Запрашиваем сами числа через пробел
print(f"Введите {n} чисел через пробел: ")
data = list(map(int, input().split()))

# Проверка количества введенных чисел
if len(data) < n:
    print(f"Ошибка: вы ввели меньше чисел, чем нужно (нужно {n}, введено {len(data)}).")
elif len(data) > n:
    print(f"Ошибка: вы ввели больше чисел, чем нужно (нужно {n}, введено {len(data)}).")
else:
    print("Медиана:", median(data))
