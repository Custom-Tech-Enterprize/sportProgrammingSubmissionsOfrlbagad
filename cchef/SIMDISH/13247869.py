t=int(input())
while t>0:
	str1=input().split(" ")
	str2=input().split(" ")
	cnt=0
	for i in range(0,len(str1)):
		if str1[i] in str2:
			cnt=cnt+1
	if(cnt>=len(str1)/2):
		print("similar")
	else:
		print("dissimilar")
	t=t-1
	
 
