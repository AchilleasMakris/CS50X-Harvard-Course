presidents = [
    ("Axilleas", 2024),
    ("Makris", 2024)
]
# prez = {0}, year = {1}
for prez, year in presidents:
    print("In {}, {} finished cs50".format(prez, year))
# {1} = year, {0} = president
for prez, year in presidents:
    print("In {1}, {0} finished cs50".format(prez, year))
