a = int(input())
maxsum=-1001
sum =0
arr = list(map(int, input().split()))
for i in range(a):
    b =  arr[i]
    sum+=b
    if sum>maxsum:
        maxsum = sum
        pass
    if sum<0:
        sum=0
        pass
    pass

print(maxsum)
