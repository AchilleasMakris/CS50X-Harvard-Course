import csv

books = []

# Add books to shelf by reading from books.csv
with open("books.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        books.append(row)

# Print books
for book in books:
    print(book)
