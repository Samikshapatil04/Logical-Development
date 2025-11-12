# # take 1 var and 1 input and use if-else or loop so that this prlm state is work as - in a car design when msg prints car starts loop will not starts and. if input is left then left light is off, if right is then right light, if reverse, reverse light is on , if no one is the input headlight is on and if no one startss then car is off and loop will not stop unitl we do not off the button
# car_status = "off"
# while True:
#     if car_status == "off":
#         command = input("Enter command (start/left/right/reverse/headlight/off): ").strip().lower()
#         if command == "start":
#             car_status = "on"
#             print("Car started.")
#         elif command == "off":
#             print("Car is already off.")
#         else:
#             print("Car is off. Please start the car first.")
#     else:
#         command = input("Enter command (left/right/reverse/headlight/off): ").strip().lower()
#         if command == "left":
#             print("Left light is ON.")
#         elif command == "right":
#             print("Right light is ON.")
#         elif command == "reverse":
#             print("Reverse light is ON.")
#         elif command == "headlight":
#             print("Headlight is ON.")
#         elif command == "off":
#             car_status = "off"
#             print("Car turned off.")
#         else:
#             print("Invalid command. Please try again.")



# car = input("Enter 'on' to start the car: ")
# if car.lower() == 'on':
#     print("Car is started")
#     while True:
#         display= input("Enter command (right, left, reverse): ").lower()
#         if display == 'right':
#             print("Right indicator is on")
#         elif  display == 'left':
#             print("Left  indicator is on")
#         elif display == 'reverse':
#             print("Reverse indicator is on")
#         elif  display == 'poweroff':
#             print("Car is stopped")
#             break
#         else:
#             print("headlight is on")

# else:    print("Car is off"). 



isOn = "Please start the car first"
while (True):
    choice = str(input("Enter your Choice: "))
    if(choice == "poweron"):
        print("Car is started !")
        isOn = True
    elif(isOn == True):
        if(choice == "left"):
            print("Left light is ON")
        elif(choice == "right"):
            print("Right light is ON")
        elif(choice == "reverse"):
            print("Reverse light is ON")
        elif(choice == "headlight"):
            print("Headlight is ON")
        elif(choice == "poweroff"):
            print("Car is stopped")
            break
        else:
            print("Invalid choice")
    else:
        print(isOn)
        isOn = False