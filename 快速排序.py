# 最原始的快排实现

def partition(a, low, high):
    pivot = a[low]
    while low < high:
        while low < high and a[high] >= pivot:
            high = high - 1
            a[low] = a[high]
        while low < high and a[low] <= pivot:
            low = low + 1
            a[high] = a[low]
    a[low] = pivot
    return low


def quicksort(a, low, high):
    if low < high:
        pivot_pos = partition(a, low, high)
        quicksort(a, low, pivot_pos - 1)
        quicksort(a, pivot_pos + 1, high)


a = list(map(int, input("请输入多个整数，用空格分隔：").split()))
print(a)
quicksort(a, 0, len(a) - 1)
print(a)
