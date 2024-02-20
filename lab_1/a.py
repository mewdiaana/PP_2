# 17 - heads
# 48 - legs
h = 35
l = 94

def animals(head, legs):
    ch = (head*4 - legs)/2
    rab = head - ch
    print("Chickens:", ch)
    print("Rabbits:", rab)

animals(h, l)
# 2*ch +4*(17 - ch)  = 48