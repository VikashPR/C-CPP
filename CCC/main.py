n = int(input("Enter a number greater than 3: "))


def magic(m):
    arr = []
    while(m != 1):
        if(m % 2 == 0):
            m = m/2
        elif(m % 2 != 0):
            m = 3*m+1
        arr.append(m)
    return len(arr)


magicObj = {}
for i in range(3, n+1):
    magicVal = magic(i)
    magicObj[i] = magicVal


names = set(magicObj.values())

d = {n: [k for k in magicObj.keys() if magicObj[k] == n]
     for n in set(magicObj.values())}

print(d)
