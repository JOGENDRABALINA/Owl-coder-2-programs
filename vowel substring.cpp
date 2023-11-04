def isVowel(x):
    if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u'):
        return True
    return False
def FindSubstring(str1):
    n = len(str1)
    cnt = 0
    for i in range(n):
        d= {}
        for j in range(i, n):
            if (isVowel(str1[j]) == False):
                break
            d[str1[j]] = 1
            if (len(d) == 5):
                cnt+=1
    return cnt
input_string =input()
print(FindSubstring(input_string))
