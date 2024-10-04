def linear_search(num,count,x):
    flag=0
    for j in range (0,count):
        if num[j]==x:
            print(f"Number {x} found at index {j}")
            break
        else:
            flag=1

    if flag==1:
        print(f"Number {x} not found")

count=int(input("Enter the number of elements in the array: "))

num=[]
for i in range (0,count):
    y=int(input(":"))
    num.append(y)
    i+=1

x=int(input("Enter the number to search: "))

linear_search(num,count,x)
