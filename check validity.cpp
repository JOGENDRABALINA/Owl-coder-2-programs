t = int(input())
for _ in range(t):
    s = input()
    stack = []
    f = 1
    for i in s:
        if i =='[' or i == '{' or i == '(':
            stack.append(i)
        if f == 0:
            break
        else:
            if i == '}':
                if len(stack)!=0 and stack[-1] == '{':
                    stack.pop()
                else:
                    f = 0
            elif i == ']':
                if len(stack)!=0 and stack[-1] == '[':
                    stack.pop()
                else:
                    f = 0
            elif i == ')':
                if len(stack)!=0 and stack[-1] == '(':
                    stack.pop()
                else:
                    f = 0
    if len(stack) == 0 and f ==1:
        print(True)
    else:
        print(False)
