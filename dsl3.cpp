def ADD():
    print ("The element wise addition of matrix is : ")
    print (np.add(x,y))
   
   
def SUB():
    print ("The element wise subtraction of matrix is : ")
    print (np.subtract(x,y))
    
def MUL():
   print ("The element wise multiplication of matrix is : ")
   print (np.multiply(x,y))

def Trans():
    print ("The transpose of given matrix is : ")
    print (x.T)
    

Rows1 = int(input("Give the number of rows for matrix 1:"))  
Columns1 = int(input("Give the number of columns for matrix 1:"))  
print("Please write the elements of the matrix 1 in a single line and separated by a space: ")  
elements = list(map(int, input().split()))  
print(elements)
x = np.array(elements).reshape(Rows1, Columns1)  
print(x)  

Rows2 = int(input("Give the number of rows for matrix 2:"))  
Columns2 = int(input("Give the number of columns for matrix 2:"))  
print("Please write the elements of the matrix 1 in a single line and separated by a space: ")  
elements = list(map(int, input().split()))  
y = np.array(elements).reshape(Rows2, Columns2)  
print(y) 

while(1):
    print("1:Addition of Matrix\n2:Substraction of Matrix \n3:Multiplication of Matrix\n4:Transpose of Matrix")
    c=int(input("Enter Choice:"))
    if c==1:
        ADD()
    elif c==2:
        SUB() 
    elif c==3:
        MUL()
    elif c==4:
        Trans()
    else:
        break

