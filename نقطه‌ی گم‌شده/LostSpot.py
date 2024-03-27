def Main() -> None:
    xSet = []
    ySet = []
    zSet = []
    result = []
    for i in range(1, 8):
        a, b, c = map(int, input().split())
        xSet.append(a)
        ySet.append(b)
        zSet.append(c)

    for num in xSet:
        if xSet.count(num) == 3:
            result.append(num)
            break

    for num in ySet:
        if ySet.count(num) == 3:
            result.append(num)
            break

    for num in zSet:
        if zSet.count(num) == 3:
            result.append(num)
            break

    print("{} {} {}".format(result[0], result[1], result[2]), end="")


if __name__ == "__main__":
    Main()
