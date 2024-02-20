from datetime import date, timedelta

date = date.today()

olddate = date - timedelta(5)

print(date.strftime("%D"))
print(olddate.strftime("%D"))
