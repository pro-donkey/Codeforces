'''
This is not just code; it's war. Against Myself!
'''

import sys
from bisect import bisect_left, bisect_right
from collections import Counter, defaultdict, deque
from itertools import accumulate
from math import gcd, isqrt

input = sys.stdin.buffer.readline


def I():
    return input().decode().rstrip("\r\n")


def II():
    return int(input())


def MI():
    return map(int, input().split())


def LI():
    return input().decode().split()


def LII():
    return list(map(int, input().split()))


def GMI():
    return (int(x) - 1 for x in input().split())


def LGMI():
    return [int(x) - 1 for x in input().split()]


def OUT(values):
    sys.stdout.write(" ".join(map(str, values)) + "\n")


def solve():
    pass 


def main():
    t = II()
    for _ in range(t):
        solve()


if __name__ == "__main__":
    main()