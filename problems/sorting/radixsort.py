# Python program for implementation of Radix Sort
# A function to do counting sort of arr[] according to
# the digit represented by exp.

def countingSort(arr, exp1):

	n = len(arr)
	# The output array elements that will have sorted arr
	output = [0] * (n)
  
	# initialize count array as 0
	count = [0] * (10)

	# Store count of occurrences in count[]
	for i in range(0, n):
		index = (arr[i] / exp1)
    #print(index)
		count[int(index % 10)] += 1
    #print(count)

	# Change count[i] so that count[i] now contains actual
	# position of this digit in output array
	for i in range(1, 10):
		count[i] += count[i - 1]

	# Build the output array
	i = n - 1
	while i >= 0:
		index = (arr[i] / exp1)
		output[count[int(index % 10)] - 1] = arr[i]
		count[int(index % 10)] -= 1
		i -= 1

	# Copying the output array to arr[],
	# so that arr now contains sorted numbers
	i = 0
	for i in range(0, len(arr)):
		arr[i] = output[i]
    #print(arr)



