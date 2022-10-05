
import paho.mqtt.client as paho
from pyautogui import press
 
def on_subscribe(client, userdata, mid, granted_qos):
    print("Subscribed: "+str(mid)+" "+str(granted_qos))
 
def on_message(client, userdata, msg):
    print(msg.topic+" "+str(msg.qos)+" "+str(msg.payload))    
    x = int(msg.payload)
    print(x)
    if x==1:
        press('i')
    if x==2:
        press('o') 
    if x==3:
        press('p') 
    if x==4:
        press('a')
    if x==5:
        press('s')
    if x==6:
        press('d')
    if x==7:
        press('f')
        
   
client = paho.Client()
client.on_subscribe = on_subscribe
client.on_message = on_message
client.connect('192.168.2.217', 1883)
client.subscribe('drum',0)
 
client.loop_forever()