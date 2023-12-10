def f1():
    print("List of student who play both cricket and badminton",{i for i in groupA if i in groupB})
def f2():
    C=[i for i in groupA if not i in groupB]
    D=[i for i in groupB if not i in groupA]
    print("List of students who play either cricket or badminton but not both",{i: i for i in C+D})
def f3():
    L1=[i for i in groupC if not i in groupA]
    L2=[i for i in L1 if not i in list(groupB)]
    print("Number of students who play neither cricket nor badminton",set(L2),len(L2))
def f4():
    L3=[i for i in groupA if not i in groupC]
    L4=[i for i in L3 if not i in list(groupB)]
    print("Number of students who play cricket and football but not badminton",(groupA|groupC)-groupB)

groupA = set()
groupB = set()
groupC = set()
A = int(input("Enter count for groupA"))
B = int(input("Enter count for groupB"))
C = int(input("Enter count for groupC"))
for i in range(A):
    name = input("Enter name")
    groupA.add(name)
print(groupA)
for i in range(B):
    name = input("Enter name")
    groupB.add(name)
print(groupB)
for i in range(C):
    name = input("Enter name")
    groupA.add(name)
print(groupC)
while(1):
        print("1:List of student who play both cricket and badminton")
        print("2:List of students who play either cricket or badminton but not both")
        print("3:Number of students who play neither cricket nor badminton")
        print("4:Number of students who play cricket and football but not badminton")
        c= int(input("Enter choice"))
        if c ==1:
            f1()
        elif c==2:
            f2()
        elif c==3:
            f3()
        elif c ==4:
            f4()
        else:
            break
