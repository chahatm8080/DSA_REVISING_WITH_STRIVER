def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        mini = i
        for j in range(i + 1, n):
            if arr[j] < arr[mini]:
                mini = j
        temp=arr[mini]
        arr[mini]=arr[i]
        arr[i]=temp


    print("After selection sort:")
    for i in range(n):
        print(arr[i], end=" ")
    print()

arr = [13, 46, 24, 52, 20, 9]
n = len(arr)
selection_sort(arr)
