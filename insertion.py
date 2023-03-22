def insertion(list):
    for i in range(1,len(list)):
        curr = list[i]
        j=i-1
        while j>=0 and list[j]>curr:
            list[j+1]=list[j]
            j=j-1
        list[j+1]=curr    
            
    
def main():
    list = []
    n= int(input("Enter No of Elements: "))
    print("Enter Lists Elements: ")
    for i in range(0,n):
        a = int(input())
        list.append(a)
    insertion(list)
    print(list)
        
        
if __name__=='__main__':
    main()