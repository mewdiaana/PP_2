from datetime import date, timedelta

today = date.today()
yesterday = today - timedelta(1)
tomorrow = today + timedelta(1)

print("Yesterday was:", yesterday.strftime("%D"))
print("Today is:", today.strftime("%D"))
print("Tomorrow will be:", tomorrow.strftime("%D"))
