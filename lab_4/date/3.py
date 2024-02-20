from datetime import datetime

date = datetime.now()

date1 = date.replace(microsecond = 0)
print(date1)

"""
or
print(date.strftime("%Y-%m-%d %H:%M:%S"))
"""
