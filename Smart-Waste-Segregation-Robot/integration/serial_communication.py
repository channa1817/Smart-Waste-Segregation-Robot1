import serial
import time

ser = serial.Serial('COM3', 9600)
time.sleep(2)

def send_to_arduino(label):
    ser.write((label + "\n").encode())