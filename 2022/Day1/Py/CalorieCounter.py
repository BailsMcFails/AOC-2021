# Open File
f = open("input.txt", "r")
elves = [0]

for line in f:
    # Add new elf
    if len(line) < 2:
        elves.append(0)
    # Add calories to elf
    else:
        elves[-1] += int(line)

elves.sort(reverse=True)
print(elves[0] + elves[1] + elves[2])
