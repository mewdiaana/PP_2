elements = ["air\n", "water\n", 
            "earth\n", "fire\n"]
# f = open('avatar.txt', 'w')
el = " ".join(elements)
# f.write(el)
# f.write("\nAvatar Roku")
# print(f.closed)
# f.close()
# print(f.closed)
# with open('avatar.txt', 'r') as file:
    # file.write(el)
    # print(file.read(11))
    # print(file.readline(10))
    # print(file.readlines())
    
with open('text.txt', 'w+') as fw:
    fw.writelines(elements)
    # fw.flush()
    for line in fw:
        print(line, end = '')
        
elements2 = ["earth -> metal\n", "fire -> lightning\n",
             "water -> blood\n", "air -> flight"]

# try:
#     with open('text.txt', 'x') as fw, open('text.txt', 'r') as fr:
#         fw.writelines(elements2)
#         fw.flush()
#         for line in fr:
#             print(line, end = '')
# except FileExistsError:
#     print("Sorry!")