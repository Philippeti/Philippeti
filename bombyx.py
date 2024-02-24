import sys

def argtree(argv):
    try:
        n = float(argv[1])
        s = float(argv[2])
        c = float(argv[3])
    except ValueError:
        exit(84) 
    k = 1.0
    m = 0

    if (s > c):
        exit(84)
    if (s < 0 or c < 0):
        exit(84)
    while (k <= 4):
        nbi = (k * n) * ((1000 - n) / 1000)
        if (m >= s):
            print(f"{k:.2f} {nbi:.2f}")
        n = nbi
        if (m == c):
            k += 0.01
            m = 0
        m += 1

def argtwo(argv):
    try:
        n = float(argv[1])
        k = float(argv[2])
    except ValueError:
        exit(84)
    if (k > 4 or k < 0):
        exit(84)
    print(f"1 {n:.2f}")
    for x in range(2, 101):
        nbi = (k * n) * ((1000 - n) / 1000)
        n = nbi
        print(f"{x} {nbi:.2f}")

def tiraih(argv):
    a = len(argv)
    if (a == 2 and argv[1] == "-h"):
        print("USAGE\n\t./106bombyx n [k | i0 i1]")
        print("DESCRIPTION\n\tn number of first generation individuals")
        print("\tk growth rate from 1 to 4")
        print("\t0 initial generation (included)\n\ti1 final generation (included)")
    else:
        exit(84)