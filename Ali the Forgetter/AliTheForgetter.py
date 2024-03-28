def main() -> None:
    index: int = 0
    answers = []
    T: int = int(input())
    for i in range(T):
        n, t1, t2 = map(int, input().split())
        if n == 1:
            answers.append(t1)
        else:
            temp = (n * t1) + ((n - 1) * t2)
            answers.append(temp)
        index += 1
    for i in range(index):
        if i != (index - 1):
            print(answers[i])
        else:
            print(answers[i], end="")


if __name__ == '__main__':
    main()
