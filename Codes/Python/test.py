# WHILE LOOP
# i = 1;
# while i <= 5:
#     print('*' * i)
#     i += 1
# print("Done")
# prices = [10, 20, 30]

# n = 5
# while n > 0:
#     print(n)
#     n = n - 1

# print(f"{n}\nBlastoff!")

# FOR LOOP
# total = 0
# for itemPrice in prices:
#     total += itemPrice
# print(f"Total: {total}")

# FOR LOOP
# # #outer loop x is 0
# for x in range(4):
#     # #inner loop y is 0
#     for y in range (3):
#         print(f"({x},{y})")

# PRINTING "F" USING FOR LOOP
# numbers = [5, 2, 5, 2, 2]
# for xCount in numbers:
#     output = ''
#     for count in range(xCount):
#         output += "x"
#     print(output)

# LIST
# name = ['Bob', 'Rick', 'Carl', 'Negan']
# # start:end.
# # ex. name[1:4]
# print(name[])

# LIST PRINT LARGE NUMBER IN LIST
# number = [1, 500, 101, 8]
# largest = number[0]
# for i in number:
#     if i > largest:
#         largest = i
# print(largest)

# while True:
#     line = input('>> ').lower()
#     if line[0] == '#':
#         continue
#     if line == 'done':
#         break
#     print(line)
# print("Done!")


# largestSofar = -1
# print(f"Before {largestSofar}")

# for number in [9 ,41 ,12 ,3 ,74 , 15]:
#     if number > largestSofar:
#         largestSofar = number
#     print(f"{largestSofar}, {number}")
# print(f"After {largestSofar}")

# count = 0
# for things in [9, 41, 12, 3, 74, 15]:
#     count += 1
#     print(f"{count}. {things}")

# numbers =  [10, 20, 30]
# result = 0
# for number in numbers:
#     result += number
# print(f"{result}")

# zork = 0
# print(f"Before {zork}")
# for num in [9, 41, 12, 3, 74, 15]:
#     zork = zork + num
#     print(f"{zork}, {num}")
# print(f"After {zork}")

# count = 0
# sum = 0
# for value in [9, 41, 12, 3, 74, 15]:
#     count += 1
#     sum = sum + value
#     print(f"{count}. {sum}")
# print(f"After {count}", sum/count)


# FUNCTION
# def thing():
#     print("Hello")
#     print("Fun")
# thing()   
# print("Zip")
# thing()

# x = 5
# print("Hello")
# def printLyrics():
#     print("I'am a lumberjack, and I'm okay.")
#     print("I sleep all night and I work all day.")
# print('Yo')
# printLyrics()
# x = x + 2
# print(x)

def greet(lang):
    if lang == 'es':
        print("Hola")
    elif lang == 'fr':
        print("Bonjour")
    else:
        print("Hello")

userChoice = input("Select language: ")
user = greet(userChoice)

