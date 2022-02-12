# take the input and cast it as an integer for t
t=int(input())
# while t is greater than 0
while t>0:
	# take another inpute and split it into a string array(list) by whitespace
	str1=input().split(" ")
	# take another inpute and split it into a string array(list) by whitespace
	str2=input().split(" ")
	# let c be 0, an integer
	cnt=0
	# while i is lesser than the str1 array's length
	for i in range(0,len(str1)):
		# if str1[i] is available in the array(list) of string2
		if str1[i] in str2:
			# increment (count)
			cnt=cnt+1
	# if count is greater/equal half of str1 array's (list) length:
	if(cnt>=len(str1)/2):
		print("similar")
	else:
		print("dissimilar")
	# decrement t
	t=t-1
	
 
