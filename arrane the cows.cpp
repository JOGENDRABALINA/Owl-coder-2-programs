def can_place_cows(stalls, k, min_distance):
    count = 1
    prev_stall = stalls[0]
    for i in range(1, len(stalls)):
        if stalls[i] - prev_stall >= min_distance:
            count += 1
            prev_stall = stalls[i]
    return count >= k

def solve(n, k, stalls):
    stalls.sort()
    low = 0
    high = stalls[n - 1] - stalls[0]
    result = 0
    
    while low <= high:
        mid = low + (high - low) // 2
        if can_place_cows(stalls, k, mid):
            result = mid
            low = mid + 1
        else:
            high = mid - 1
    
    return result

# Input
n, k = map(int, input().split())
stalls = list(map(int, input().split()))

# Output
print(solve(n, k, stalls))
