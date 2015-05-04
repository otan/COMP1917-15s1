#!/usr/bin/python2.7 -u

import random

for i in range(100):
  with open("%d.in" % (i), 'w') as f:
    f.write("%d\n" % (i))
    f.write(" ".join(str(random.randint(-10, 10)) for _ in range(i)) + "\n")
