# Open File
f = open("input.txt", "r")

scores = {"X": 0,
          "Y": 3,
          "Z": 6}

results = {"A X": 3,
           "A Y": 1,
           "A Z": 2,
           "B X": 1,
           "B Y": 2,
           "B Z": 3,
           "C X": 2,
           "C Y": 3,
           "C Z": 1}

total = 0

for line in f:
    total += results[line[:3]] + scores[line[2]]
    
print(total)
