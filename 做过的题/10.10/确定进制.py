import math
p,q,r=map(list,input().split())
p.reverse()
q.reverse()
r.reverse()
X=[]
for a in range(len(p)):
    X.append(p[a])
for b in range(len(q)):
    X.append(q[b])
for c in range(len(r)):
    X.append(r[c])
m=0
for i in range(int(max(X))+1,1000):
    x=0
    y=0
    z=0
    for j in range(len(p)):
        x+=int(p[j])*int(math.pow(i,j))
    for k in range(len(q)):
        y+=int(q[k])*int(math.pow(i,k))
    for l in range(len(r)):
        z+=int(r[l])*int(math.pow(i,l))
    if x*y==z:
        print(i)
        m=1
        break
if m!=1:
    print(0)