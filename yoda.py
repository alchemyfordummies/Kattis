#put our input in strings
num1 = list(input())
num2 = list(input())

c_one = []
c_two = []

big = small = 0
onebig = False

#find which number is bigger
if len(num1) >= len(num2):
    big = len(num1)
    small = len(num2)
    onebig = True
else:
    big = len(num2)
    small = len(num1)
    onebig = False

#start at the beginning of the larget string, copy values over
for x in range(big-small):
    if onebig:
        c_one.append(num1[x])
    else:
        c_two.append(num2[x])

#for common indices, compare the values and append to the bigger array
# for a tie, append to both
for x in range(big - small, big):
    if onebig:
        c = int(num1[x])
        d = int(num2[x - (big - small)])
    else:
        c = int(num1[x - (big - small)])
        d = int(num2[x])
    if c > d:
        c_one.append(c)
    elif d > c:
        c_two.append(d)
    else:
        c_one.append(c)
        c_two.append(d)

#no characters fell out if length is 0
if len(c_one) == 0:
    print("YODA")
else:
    temp = ''.join(map(str, c_one))
    print(int(temp))
    
if len(c_two) == 0:
    print("YODA")
else:
    temp = ''.join(map(str, c_two))
    print(int(temp))
