def f1():
    word_list=S.split()
    print("Word List:",word_list)
    longest_word = max(word_list, key = len)
    print("longest Word:",longest_word)
def f2():
    res = {i: S.count(i) for i in set(S)}
    ch=input("Enter Character to check frequency of occurrence:")
    print("frequency of occurrence of particular character",res[ch])
def f3():
    S1=input("Enter String to check palindrome:")
    if  S1 == S1[::-1]:
        print("Given String is Palindrome.")
    else:
        print("Given String is not Palindrome.")
        
def  f4():
    sub=input("Enter Substring:")
    print(S.find(sub))
    
def f5():
    word_list=S.split()
    print("Word List:",word_list)
    res = {i: word_list.count(i) for i in set(word_list)}
    print("Count the occurrences of each word in a given string",res)
    
S=input("Enter String:")
while(1):
    print("1:To display word with the longest length\n2:To determines the frequency of occurrence of particular character in the string \n3:To check whether given string is palindrome or not\n4:To display index of first appearance of the substring\n5:To count the occurrences of each word in a given string")
    c=int(input("Enter Choice:"))
    if c==1:
        f1()
    elif c==2:
        f2() 
    elif c==3:
        f3()
    elif c==4:
        f4()
    elif c==5:
        f5()
    else:
        break

