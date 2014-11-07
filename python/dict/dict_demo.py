#!/usr/bin/python
# Filename: pickling.py

import cPickle as p
#import pickle as p

shoplistfile = 'dict_address.txt'

# Read back from the storage
f = file(shoplistfile)
storedlist = p.load(f)
print storedlist 

