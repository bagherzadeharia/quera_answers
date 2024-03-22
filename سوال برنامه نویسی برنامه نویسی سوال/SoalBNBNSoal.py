stack = []
n = int(input())
sen = input()
word = ""

for i in sen:
    if i != ' ':
        word = word + i
    else:
        stack.append(word)
        word = ""

stack.append(word)
while n > 0:
    if n == 1:
        print(stack[n - 1])
    else:
        print(stack[n - 1], end=" ")
    stack.pop(n - 1)
    n -= 1
