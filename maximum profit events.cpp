import heapq
def fun(n, intervals):
	events = []
	for i in range(len(intervals)):
		events.append((intervals[i][0], (intervals[i][1], intervals[i][2])))
	pq = []
	events.sort()
	max_profit = 0
	for e in events:
		while pq and pq[0][0] <= e[0]:
			max_profit = max(max_profit, pq[0][1])
			heapq.heappop(pq)
		heapq.heappush(pq, (e[1][0], max_profit + e[1][1]))
	while pq:
		max_profit = max(max_profit, pq[0][1])
		heapq.heappop(pq)
	return max_profit



n = int(input())
intervals = []
for i in range(n):
    s, e, p = map(int, input().split())
    intervals.append([s, e, p])
print(fun(n, intervals))
