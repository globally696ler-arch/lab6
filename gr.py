def second(arr):
    if len(arr) < 2:
        return None

    first = second = float("-inf")

    for x in arr:
        if x > first:
            second = first
            first = x
        elif first > x > second:  # строгое ">" отсекает дубликаты максимума
            second = x

    return None if second == float("-inf") else second


num = list(map(int, input().split()))
print(second(num))
