def Binary(n,l,key):
    s=0
    e=n
    while s<=e:
        mid = int((s+e)/2)
        if l[mid]==key:
            return f"Your Key is present at {mid} Index"
        elif l[mid]>key:
            s=mid+1
        else:
            e=mid-1
            
    return "Your Key is not present in List"         

def main():
    try:
        n=int(input("Enter the size of List: "))
        l = []
        print("Enter Elements of List: ")
        for i in range(0,n):
            a=int(input())
            l.append(a)
        print(l)
        key = int(int(input("Enter Key: ")))
        result = int(Binary(n,l,key))
        print(result)
    except Exception as e:
        print(e)
if __name__=='__main__':
    main()