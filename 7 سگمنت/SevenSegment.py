sevenSegment = {
    0:6,
    1:2,
    2:5,
    3:5,
    4:4,
    5:5,
    6:6,
    7:3,
    8:7,
    9:6,
}

def main() -> None:
    num: str = input()
    flag: bool = False
    leftPart: str = ""
    rightPart: str = ""
    for i in num:
        if i == "e":
            flag = True
        if flag and i != "e":
            rightPart += i
        elif flag and i == "e":
            pass
        else:
            leftPart += i
    if leftPart.find(".") != -1:
        dotIndex = leftPart.index(".")
        dotIndex = len(leftPart) - dotIndex - 1
        rightPart = str(int(rightPart) - dotIndex)
    ans: int = int(0)
    if rightPart != "0":
        ans += (int(rightPart) * sevenSegment.get(0))
    for i in leftPart:
        if i == ".":
            pass
        else:
            ans += sevenSegment.get(int(i))
    print(ans, end="")

if __name__ == "__main__":
    main()
