#
# Script para ligar e desligar LED para Raspberry PI
#

from gpiozero import LED
from time import sleep

led = LED(4)    # Define o LED no pino 4
led.on()        # Liga o LED
sleep(5)        # Espera 5 segundos
led.off()       # Desliga o LED
