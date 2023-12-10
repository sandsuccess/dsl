def BS(L,U,A,key):
    midd=(L+U)//2
    if A[midd]==key:
        print("Student of Roll no.",A[midd],"is Present.")
    elif A[midd]>key:
        BS(A[0], midd - 1,A,key)
    else:
        BS(midd + 1, len(A)-1, A, key)
def FS(A,key,n):
    f2=0
    f1=1
    f=f2+f1
    while(f<n):
        f2=f1
        f=f2+f1
        offset=-1
    while(f>1):
        i = min(offset + f2,len(A)-1)
        if (a[i] < key):
            f = f1
            f1 = f2
            f2 = f - f1
        elif (a[i] > key):
            f = f2
            f1 = f1 - f2
            f2 = f - f1
        else:
            print("Element found.", i)

        if(f1 & a[n-1]==key):
            print("Element found.",len(A)-1)
        else:
            print("Element not found.",len(A)-1)
A=[]
n=int(input("Enter no.of Students:"))
for i in range(n):
    a=int(input("Enter the Roll.no. of Student:"))
    A.append(a)
print(A)
key=int(input("Enter the Roll.no. of Student:"))


print("1.Binary Search\n2:Fibonacci Search")
while(1):
    c=int(input("Enter the Choice:"))
    if c==1:
        BS(A[0],                                                                                                                                                                                                 len(A)-1,A,key)
    elif c==2:
        FS(A,key,n)
    else:
        break

