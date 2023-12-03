try:
    handler = open("datafile", "w")
    handler.write("This is a data file for testing exception handling!!")
except IOError:
    print ("Error: Can\'t find file or write data")
else:
    print ("File write successful")
    handler.close()