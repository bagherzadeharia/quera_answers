def main() -> None:
    s, f, l, x = map(int, input().split())
    if x < s:
        print("exam did not started!", end="")
    else:
        dt: int = f - x
        if dt >= l:
            print("{}".format(l), end="")
        elif dt > 0 and dt < l:
            print("{}".format(dt), end="")
        else:
            print("exam finished!", end="")


if __name__ == "__main__":
    main()
