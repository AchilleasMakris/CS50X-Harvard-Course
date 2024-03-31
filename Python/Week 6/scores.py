from cs50 import get_int

scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)

avarage = sum(scores) / len(scores)
print(f"Avarage: {avarage}")
