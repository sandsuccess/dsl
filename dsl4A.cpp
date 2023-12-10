def SS(listA,size,key):
    listA.append(key)
    i = 0
    while(listA[i] != key):
        i=i+1
        
    if(i==size):
        print("Student not attended the program.")
    else:
        print("Student attended the program.")
    
def LS(listA,key):
    for i in range(len(listA)):
        if listA[i]==key:
            flag=1
            break
        else:
            flag=0
            
    if flag==1:
        print("Student is Attended the training program")
    else:
        print("Student not Attended the program")
        
listA=[]
c=int(input("Enter count of Student those attended the program:"))
for i in range(c):
    listA.append(int(input("Enter roll number of Student those attended the program:")))
print(listA)

while(1): 
    key =int(input("Enter student roll number:"))
    print("Enter\n1:Linear Search\n2:Sentinel Search")
    ch=int(input("Enter Choice for the search:"))
    if ch==1:
        LS(listA,key)
    elif ch==2:
        SS(listA,c,key)
    else:
        print("Enter Valid option")
        break

