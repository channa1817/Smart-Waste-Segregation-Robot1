import serial
import time

ser = serial.Serial('COM3', 9600)
time.sleep(2)

while True:
    data = input("Enter label: ")
    ser.write((data + "\n").encode())
    print("Sent:", data)