def main() -> None:
    rows = []
    answer: str = ""
    n, m = map(int, input().split())
    for i in range(0, m):
        temp: str = str(input())
        rows.append(temp)
    for i in range(0, n):
        whiteCount = int(0)
        for j in range(0, m):
            if rows[j][i] == "W":
                whiteCount += 1
        if whiteCount % 2 == 0:
            answer += "B"
        else:
            answer += "F"
    print(answer)


if __name__ == "__main__":
    main()
