def selection(l,n):
    for i in range(0,n-1):
        for j in range(i+1,n):
            if l[j]<l[i]:
                temp = l[j]
                l[j]=l[i]
                l[i]=temp 
    print(l)
    
def main():
    l=[];
    n=int(input("Enter No of Elements: "))
    print("Enter Lists Elements: ")
    for i in range(n):
        a= int(input())
        l.append(a)
    selection(l,n)
    
    
if __name__=="__main__":
    main()