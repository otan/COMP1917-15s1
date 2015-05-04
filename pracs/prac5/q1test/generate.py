#!/usr/bin/python2.7 -u

import random
import string

for i in range(100):
  with open("%d.in" % (i), "w") as f:
    str = ''.join(random.choice(string.ascii_uppercase + string.ascii_lowercase + "0") for _ in range(i))
    print str
    f.write(str + '\n')
