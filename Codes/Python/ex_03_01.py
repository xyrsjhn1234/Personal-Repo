def computation(hour, rate):
    if hour > 40:
        before = hour * rate
        after = (hour - 40.0) * (rate * 0.5)
        payment = before + after
    else:
        payment = hour * rate
    return payment

while True:
    while True:
        time = input("Enter Hours: ")
        rates = input("\nEnter rate: ")
        # Checking if the user input valid input
        if time.isdigit() and rates.isdigit():
            time = float(time)
            rates = float(rates)
            break
        else:
            print("\nInvalid input\n")

    totalPayment = computation(time, rates)
    print(f"Total: {totalPayment}")

    while True:  
        again = input("Again[y/n]: ")
        if again == 'n':
            exit()
        elif again == 'y':
            break
        else:
            print("Invalid input. Please try again")

    
