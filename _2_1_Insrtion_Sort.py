listSize = int(input("Give the size of the list: "))
sortList = []
for index in range(listSize):
    value = int(input())
    sortList.append(value)
print("Done")
for j in range(1, listSize):
    key = sortList[j]
    print("Key",key)
    i = j - 1
    while i >= 0 and sortList[i] > key:
        print("Compare: ", sortList[i])
        sortList[i+1] = sortList[i]
        i = i - 1
    sortList[i+1] = key

print("the sorted list is: ",sortList)
