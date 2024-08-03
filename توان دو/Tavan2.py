import math

def PowerFunction(a: int, n: int) -> int:
    x: int = a
    z: int = 1
    m: int = n
    while m > 0:
        if m % 2 == 0:
            m = math.ceil(m / 2)
            x = x * x
        else:
            z = x * z
            m -= 1
    return z

def Main() -> None:
    base: int = int(input())
    print("{}".format(PowerFunction(base, 2)), end="")

if __name__ == "__main__":
    Main()
