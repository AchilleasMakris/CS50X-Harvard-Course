from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorites = input("Favorite Tv Show: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorites)
row = rows[0]

print(row["n"])
