# Declaration for boolean expression in "start" and "stop"
started = False
stopped = False
while True:
    user = input('> ')
    user = user.lower()

    if user == 'help':
        print("start - to start the car.\nstop - to stop the car.\nquit - to quit.")
    elif user == 'start':
        # It won't run, because it's false
        if started:
            print("Car already been started...")
        # "else" run first because first "if"statement is false
        # "if started" is now "True" thus "if started" would run first
        else:
            started = True
            print("Car started.... ")
    # It won't run, because it's false
    elif user == 'stop':
        if stopped:
            print("Car already been stop...")
        # "else" run first because first "if"statement is false
        # "if started" is now "True" thus "if started" would run first
        else:
            stopped = True
            print("Car stopped..")
            
    elif user == 'quit':
        break
    else:
        print("I don't understand that....")

