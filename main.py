import serial as s
arduino = s.Serial("COM2", baudrate=9600, timeout=1)

import time as t

from pynput.keyboard import Key, Controller
teclado = Controller()


while True:
    val = arduino.readline().decode() #\n\r
    val = val.replace("\n","")
    val = val.replace("\r", "")
    print(val)

    if val == "w":
        teclado.press("w")
        t.sleep(.1)  # 100milisegundos
        teclado.release("w")
    elif val == "a":
        teclado.press("a")
        t.sleep(.1)  # 100milisegundos
        teclado.release("a")
    elif val == "s":
        teclado.press("s")
        t.sleep(.1)  # 100milisegundos
        teclado.release("s")
    elif val == "d":
        teclado.press("l")
        t.sleep(.1)  # 100milisegundos
        teclado.release("l")
    elif val == "l": #Saltar
        teclado.press("l")
        t.sleep(.1)  # 100milisegundos
        teclado.release("l")
    elif val == "k": #Start
        teclado.press("k")
        t.sleep(.1)  # 100milisegundos
        teclado.release("k")
    else:
        pass

    t.sleep(.1) #100milisegundos
