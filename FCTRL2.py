import sys
def get_fact(n):
	if n > 1:
		return n * get_fact(n-1)
	else:
		return 1
t=int(sys.stdin.readline())
for x in range(0,t):
  n=int(sys.stdin.readline())
  p=get_fact(n)
  print p
  