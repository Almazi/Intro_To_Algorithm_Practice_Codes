def Merge(mergeIt, p, q, r):
    print("Merging")
    n1 = q-p+1
    n2 = r-p
    leftList = mergeIt[p:n1+1]
    rightList = mergeIt[q:n2+1]

    leftList[n1] = 10000
    rightList[n2] = 10000
    i = 1
    j = 1

    for num in range(p,r):
        if leftList[i] <= rightList[j]:
            mergeIt[num] = leftList[i]

            i = i + 1
        else:
            mergeIt[num] = rightList[j]
            j = j + 1





def MergeSort(listToSort, p, r):
    print("Inside MergeSort")
    if p < r:
       q = int((r - p) / 2)
       print(q)
       print(listToSort)
       MergeSort(listToSort, p, q)
       MergeSort(listToSort, q+1, r)
       Merge(listToSort, p, q, r)

listToSort = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
r = len(listToSort)
print("size of the list: ",r)
p = 0
MergeSort(listToSort, p, r)
