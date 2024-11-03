def main() -> None:
    moves: list = []
    initInfo = [x for x in input().split()]
    currLocation: str = initInfo[1]
    for i in range(int(initInfo[0])):
        temp = [x for x in input().split()]
        if temp[0] == currLocation:
            currLocation = temp[1]
        elif temp[1] == currLocation:
            currLocation = temp[0]
    print(currLocation, end="")

if __name__ == "__main__":
    main()
