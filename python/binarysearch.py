def main()->None:
    arr=[]
    size=int(input("Enter the size of array :"))
    for i in range (0,size):
        element=int(input("input the element :"))
        arr.append(element)
        i+=1

    key = int (input("Enter the searching element"))
    left=0
    right=len(arr)-1

    
    result=binary_search(arr,left,right,key)
    
    print(result)



def binary_search (arr:list,left:int,right:int,key:int)->bool:
    mid:int 
    if (left <= right ):
        mid = (left+right)//2
        if (arr[mid]==key):
            return True
        elif arr[mid] > key:
            return binary_search(arr, left, mid - 1, key)
        elif arr[mid] < key:
            
            return binary_search(arr, mid +1,right, key)
    
    else:
        pass

if __name__=="__main__":
    main()