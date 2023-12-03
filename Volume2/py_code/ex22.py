def grepper(template):
    print ('searching for ' + template)
    try:
        while True:
            x = (yield)
            if template in x:
                print (x)
    except GeneratorExit:
        print ("Done")