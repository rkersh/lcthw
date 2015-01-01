"""
Run the ex10 program with an specified number of arguments.
"""
import subprocess
import sys

prog = ['./ex10']
args = ['1'] * int(sys.argv[1])
prog.extend(args)
# We fail to run with 999999 args....
# see http://stackoverflow.com/questions/3724369/limit-on-the-number-of-arguments-to-main-in-c
subprocess.call(prog)
