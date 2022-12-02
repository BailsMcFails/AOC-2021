# Open File
f = open("input.txt", "r")

scores = {"X": 1,
          "Y": 2,
          "Z": 3}

results = {"A X": 3,
           "A Y": 6,
           "A Z": 0,
           "B X": 0,
           "B Y": 3,
           "B Z": 6,
           "C X": 6,
           "C Y": 0,
           "C Z": 3}

total = 0

for line in f:
    total += results[line[:3]] + scores[line[2]]
    
print(total)
