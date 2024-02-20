from datetime import datetime

date1 = datetime(2021, 2, 15, 20, 00, 00)
date2 = datetime(2021, 2, 17, 21, 00, 00)

diff = date2 - date1

print(diff.total_seconds())
