#!/usr/bin/env python

#open file
#delete file
#write file
i=0
with open('/home/nate/Downloads/gsam.jpg', 'rb') as fp, open('/home/nate/Documents/UNIX/gc2.jpg','wb') as target:
	maxdata=fp.read()
	x = int(maxdata)
