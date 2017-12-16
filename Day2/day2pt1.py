def main():
	print("hello\n")
	checksum = 0

	with open("matrix.txt", "r") as infile:
		for line in infile:
			nums = line.split()
			maximum = 0
			minimum = nums[1]

			for i in nums:
				i = int(i)
				if(i >= maximum):
					maximum = i
				if(i <= minimum):
					minimum = i
			checksum += (maximum - minimum)

	print(checksum)

if __name__ == '__main__':
	main()
