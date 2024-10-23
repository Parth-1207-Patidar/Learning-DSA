row = int(input("Enter no. of rows: "))

for i in range(row, 0, -1):
    for k in range(0, row-i, 1):
        print(" ", end="")
    # print(" " * (row-i-1), end="")

    for j in range(0, i, 1):
        print(chr(97), end=" ")
    print()