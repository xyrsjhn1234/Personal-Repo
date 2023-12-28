count = 0
total = 0
average = 1
while True:
    user= input("Enter a number: ").lower()
    if user.isdigit():
        user = int(user)
        total = total + user
        count += 1
    elif user == "done":  
        break
    else:
        print("Invalid input")
average = total / count
average = float(average)
print(f"Sum: {total} Count: {count} Average: {average:.2f}")


    

