sum=0
x=2**1000
print(x)
while(x):
    n=x%10
    sum+=n
    x=x//10
print(f"value is {sum}")