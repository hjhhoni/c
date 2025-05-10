# python笔记

***队列***
- 优先队列：
  ```python
  from queue import PriorityQueue
   pq = PriorityQueue()  # 优先队列自动排序从小到大
   pq.put(1) # 添加元素
   pq.get() # 获取元素,并删除
  ```

***字符串***
- 字符串的切片：
  ```python
  s = 'abcdefg'
  s[0:3] # 'abc'
  s[0:3:2] # 'ac'
  s[::-1] # 'gfedcba'
  ```

***列表***
- 列表生成式：
  ```python
  [i for i in range(10)] # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  [m + n for m in 'ABC' for n in 'XYZ'] # 'AX', 'AY', 'AZ', 'BX', 'BY', 'BZ', 'CX', 'CY', 'CZ'
  ```

***读取数据的技巧***
- 读取成对的数据：
  ```python
  for i in range(int(input())):
    a, b = map(int, input().split()) # 读取成对的数据
  ```
