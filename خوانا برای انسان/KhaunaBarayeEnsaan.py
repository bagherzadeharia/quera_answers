import math


def main() -> None:
    answer = []
    testCase = []
    KiByteLimit: int = 1024
    MiByteLimit: int = 1048576
    testCount: int = int(input())
    for i in range(testCount):
        temp: int = int(input())
        testCase.append(temp)
    for i in range(testCount):
        if testCase[i] < KiByteLimit:
            temp = str(testCase[i]) + "B"
            answer.append(temp)
        elif testCase[i] >= KiByteLimit and testCase[i] < MiByteLimit:
            temp = str(math.floor(testCase[i] / KiByteLimit)) + "KiB"
            answer.append(temp)
        else:
            temp = str(math.floor(testCase[i] / MiByteLimit)) + "MiB"
            answer.append(temp)
    for i in range(0, testCount):
        if i == (testCount-1):
            print(answer[i], end="")
        else:
            print(answer[i])


if __name__ == "__main__":
    main()
