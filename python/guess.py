number=44
running=True
while running:
    guess=int(raw_input('inter an integer:'))
    if number==guess:
        print 'yes'
        running=False
    elif guess>number:
        print 'little high'
    else:
        print 'little lower'
    
print 'finish'