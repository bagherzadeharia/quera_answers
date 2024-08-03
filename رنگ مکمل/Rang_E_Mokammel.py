table = {"0": "F", "1": "E", "2": "D", "3": "C",  
         "4": "B", "5": "A", "6": "9", "7": "8", 
         "8": "7", "9": "6", "A": "5", "B": "4",  
         "C": "3", "D": "2", "E": "1", "F": "0"} 

def main() -> None:
    n: int = int(input())
    colors: list = []
    for i in range(n):
        inStr: str = input()
        rev: str = "#"
        for i in range(1, len(inStr)):
            rev += table.get(inStr[i])
        colors.append(rev)
    n -= 1
    for i in range(0, len(colors)):
        if i != n:
            print(colors[i])
        else:
            print(colors[i], end="")

if __name__ == "__main__":
    main()
