import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {}

    for row in reader:
        favorite = row["language"]
        #if the value exists, increase by 1,
        # else: make a new key and asign value to 1
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1
# sort by key: sorted(counts), sort by value: sorted(counts, key=counts.get)
# sort by value and highest first: counts, key=counts.get, reverse=True
for favorite in sorted(counts, key=counts.get, reverse=True):
    print(f"{favorite}: {counts[favorite]}")
