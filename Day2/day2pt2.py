def main():
    checksum = 0

    with open("matrix.txt", "r") as infile:
    	for line in infile:
    		nums = line.split()

    		for i in nums:
    			i = int(i)
    			for j in nums:
    				j = int(j)
    				if(i != j and i % j == 0):
    					checksum += i / j


    print(checksum)

if __name__ == '__main__':
	main()
