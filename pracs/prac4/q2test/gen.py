#!/usr/bin/python -u

import random

for amount in xrange(1, 10):
  for t in xrange(10):
    with open("%d-%d.in" % (amount, t), "w") as f:
      f.write("%d\n" % amount)
      for num in xrange(amount):
        f.write("%d " % random.uniform(-1337, 1337))
      f.write("\n")
