

Format 'letter' 'number' 'number' 

for example read 
analog port 0:

a 0

write digital pin 13:

c 13 1 // configure pin 13 as a output
w 13 1 // for example if is a led, will be on






#define ANALOG_READ    'a'
#define GET_BAUDRATE   'b'
#define PIN_MODE       'c'
#define DIGITAL_READ   'd'
#define READ_ENCODERS  'e'
#define MOTOR_SPEEDS   'm'
#define PING           'p'
#define RESET_ENCODERS 'r'
#define SERVO_WRITE    's'
#define SERVO_READ     't'
#define UPDATE_PID     'u'
#define DIGITAL_WRITE  'w'
#define ANALOG_WRITE   'x'
