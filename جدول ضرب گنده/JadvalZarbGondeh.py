def main() -> None:
    n: int = int(input())
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            e = i * j
            print("{}    ".format(e), end="")
        if i != n:
            print(end="\n")

if __name__ == "__main__":
    main()
