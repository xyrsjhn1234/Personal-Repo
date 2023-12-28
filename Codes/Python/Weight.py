# Input for user
while True: 
    weight = input("Weight: ")
    if weight.isdigit():
        weight = int(weight)
        if weight > 0:
            break;
        else:
            print("Please, input more than 0.")
    else:
        print("Please, input only numeric symbol")



while True:
    convert = input("(L)bs or (K)g: ")
    convert = convert.upper()
    if convert != 'L' and convert != 'K':
        print("Please choose the valid choices [L/K]")
    else:
        break
if convert == 'K':
    weight = weight / 2.205
    print(f"You're {weight: .2f} in kilos.")
else:
    weight = weight * 2.205
    print(f"You're {weight: .2f} in pounds.")




