import struct

# Define the format for three integers (day, month, year)
date_format = 'iii'  # 3 integers

d1 = (7, 9, 1999)
d2 = (12, 5, 2024)

filename = input("Enter filename: ")

# Write to file in binary mode
with open(filename, 'wb') as f:
    f.write(struct.pack(date_format, *d1))
    f.write(struct.pack(date_format, *d2))

# Read from file in binary mode
with open(filename, 'rb') as f:
    data1 = struct.unpack(date_format, f.read(struct.calcsize(date_format)))
    data2 = struct.unpack(date_format, f.read(struct.calcsize(date_format)))

# Display the dates read from the file
print(f"First Date: {data1[2]}/{data1[1]}/{data1[0]}")
print(f"Second Date: {data2[2]}/{data2[1]}/{data2[0]}")
