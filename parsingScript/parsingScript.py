# Matthew Dingman
# Professor Qouneh

# parsingScript python script

# The purpose of this script is to parse through a data feed and pull out all of
# the temperature values. With this data, calculate the average, find the
# minimum, and find the maximum. It takes a file name as an input.

# Example invocation: python3 parsingScript.py feed_data.csv

import sys
fname = sys.argv[1]
temp = []
with open(sys.argv[1], "r") as file:
  header = next(file)
  for line in file:
    data = line.split(",")
    temp.append(float(data[1]))

max = temp[1]
min = temp[1]
sum = 0
count = 0
for val in temp:
  count += 1
  sum = sum + val
  if val < min:
    min = val
  elif val > max:
    max = val
avg = sum / count
print(f"The maximum temperature is {max}.")
print(f"The minimum temperature is {min}.")
print(f"The average temperature is {avg}.")
