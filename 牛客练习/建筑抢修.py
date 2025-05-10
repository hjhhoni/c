from queue import PriorityQueue
n = int(input())
a = []
for i in range(n):
    second,first = map(int,input().split())
    a.append((first,second))
    
a.sort() # 把截止时间从小到大排序，优先处理ddl早的
ans = 0
now = 0
pq = PriorityQueue() // 优先队列,存储的是剩余时间,按从小到大排序

for first,second in a:
    if now+second<=first:
        ans+=1
        now+=second
        pq.put(-second)
    elif not pq.empty() and -pq.queue[0] > second:
        now-=-pq.get()
        now+=second
        pq.put(-second)
        
print(ans)