def main() -> None:
    n: int = int(input())
    ans: int = 1
    if n > 1:
        for i in range(2, n + 1):
            ans *= i
    print(ans, end="")

if __name__ == "__main__":
    main()
