#!/usr/bin/python
import usb.core
import usb.util
from intelhex import IntelHex
import sys
 
dev = usb.core.find(idVendor=0x04b4, idProduct=0x8613)
 
def upload(filename):
  ih = IntelHex(filename)
  #Transfer programm data
  dev.ctrl_transfer(0x40, 0xa0, 0, 0 , ih.tobinarray())

def setReset(reset):
  #Get device out of reset
  if reset:
    dev.ctrl_transfer(0x40, 0xa0, 0xe600, 0xff , [0])
  else:
    dev.ctrl_transfer(0x40, 0xa0, 0xe600, 0 , [0])

if(len(sys.argv) > 2):
  if(sys.argv[1] == "upload"):
    upload(sys.argv[2])
    setReset(False)
  elif(sys.argv[1] == "reset"):
    if(sys.argv[2] == "y"):
      setReset(True)
    elif(sys.argv[2] == "n"):
      setReset(False)
  
