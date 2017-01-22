from calendar import monthrange
m,d = map(int, raw_input().split())
days = monthrange(2017, m)[1]
fd = 8 - d
tot = days - fd
if tot%7 == 0:
    cols = tot/7 + 1
else:
    cols = tot/7 + 2

print cols
