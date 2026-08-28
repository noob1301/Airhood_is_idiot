n=int(input())
if n==0:
    print(0)
    exit()
l=[]
for i in range(31):
    if 2**(30-i)<=n:
        n-=2**(30-i)
        l.append(1)
    else:
        l.append(0)
is_first=False
for i in l:
    if is_first==False and i==0:
        pass
    else:
        if is_first==False:
            is_first=True
        print(i,end='')
