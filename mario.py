while True:
     height = int(input("Enter Height:"))
     if height > 0 and height < 9:
        break
for row in range(height):
    for space in range(height - row - 1, 0, -1):
        print(" ", end="")
    for hash in range(row + 1):
        print("#", end ="")
    print("\n", end ="")