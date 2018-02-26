def main():
	a=input()
	b=0
	for i in a:
		if i.isnumeric() :
			b=b+1
	print('No of numerics in a string is :%d'%b)
main()
