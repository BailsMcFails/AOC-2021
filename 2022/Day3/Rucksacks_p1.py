# Open File
f = open("input3.txt", "r")

total = 0

for r in f:
    r1 = set(r[:len(r)//2])
    r2 = set(r[len(r)//2:])

    e = r1.intersection(r2).pop()

    if e.isupper():
        total += ord(e) - 38
    else:
        total += ord(e) - 96
    
print(total)
