import bombyx
import sys

a = len(sys.argv)
bombyx.tiraih(sys.argv)
if (a == 1 or a > 4):
    exit(84)
if (a == 3):
    bombyx.argtwo(sys.argv)
if (a == 4):
    bombyx.argtree(sys.argv)
