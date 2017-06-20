import psutil , serial , os , subprocess
from threading import Thread
ser = serial.Serial()
# ********************Configurable Settings*********************
ser.baudrate = 115200  # The Baudrate
ser.port = 'COM2' # The Com Port You Want to Use
freq = 2 #Time Interval(Delay) Between data sent
# **************************************************************
ser.open()
def DoRog():
    while True:
        if ser.is_open == True:
            h = ((psutil.cpu_percent(interval = freq)))
            if(h!=0):
                ser.write(bytes(str(h).encode()))
                # print(h)
        else:
            ser.open()
            print("Error 0: Connection To Com Port Failed, Exitting...")
print('Ready')
while True:
    DoRog()
