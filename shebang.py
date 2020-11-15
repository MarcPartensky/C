#!/usr/bin/env python

import sys
import os

file = sys.argv[1].split('.')[-2].replace('/', '')
os.system("mkdir -p .cache")
os.system(f"sed '1d' {file}.c > .cache/{file}.c")
# os.system(f"cat .cache/{file}.c")
os.system(f"gcc -o .cache/{file} .cache/{file}.c")
os.system(f".cache/{file}")
os.system("rm -rf .cache")
