s = input()
cnt = 0.00
wei = 0.00
for i in s:
    wei+=1
    if i=='2':
        cnt+=1
Wei = wei
if s[0]=='-':
    wei-=1
shu = cnt/wei
if int(s[-1])%2==0:
    shu*=2
if s[0]=='-':
    shu*=1.5
shu*=100.00
print("{:.2f}%".format(shu))