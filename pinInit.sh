# Matthew Dingman
# Professor Qouneh

# pinInit.sh bash script

# This script is used to initialize all of the GPIO pins and devices that are
# used in this project.

# Example invocation: ./pinInit.sh

echo "Initializing LED pins used.."

config-pin p9.14 gpio
config-pin p9.12 gpio

echo "LED pins initialized!"

echo "Initializing Button pin used.."

config-pin p8.16 gpio_pu

echo "Button pin initialized!"

echo "End of initialization script!"


