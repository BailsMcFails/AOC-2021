# Open File
f = open("input3.txt", "r").readlines()

total = 0

for i in range(0, len(f), 3):
    r = set(f[i].strip()) & set(f[i+1].strip()) & set(f[i+2].strip())

    e = r.pop()

    if e.isupper():
        total += ord(e) - 38
    else:
        total += ord(e) - 96
    
print(total)
