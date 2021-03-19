import serial # pyserial library

arduino = serial.Serial("COM5", 9600) # change if yours is on different com port

cmd = arduino.readline() # read input
cmd = cmd.decode().rstrip() # convert to string and remove /r/n from end of line
if cmd == "button1":
    print("the button was clicked")
arduino.close() # close connection