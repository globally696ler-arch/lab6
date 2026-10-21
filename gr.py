def median(nums):
    nums = sorted(nums)  # сортируем список
    n = len(nums)
    mid = n // 2  # индекс середины

    if n % 2 == 1:  # нечётное количество
        return nums[mid]
    else:  # чётное количество
        return (nums[mid - 1] + nums[mid]) / 2


# Пример использования
data = list(map(int, input().split()))
print("Медиана:", median(data))
