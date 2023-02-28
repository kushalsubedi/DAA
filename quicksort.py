
def partation(Arr,low,high):
    i=low
    j=high 

    pivot=Arr[low]
    while (i<j):
        while Arr[i]<=pivot:
            i+=1
        while Arr[j]>pivot:
            j-=1
        
        if(i<j):
            Arr[i],Arr[j]=Arr[j],Arr[i]
        
        Arr[low],Arr[j]=Arr[j],Arr[low]
    return j

def quicksort(Arr,low,high):
    if(low<high):
        pivot=partation(Arr,low,high)
        quicksort(Arr,low,pivot)
        quicksort(Arr,pivot+1,high)

    return Arr

def main():
    Arr=[10,6,8,15,12,6,3,9,5]
    low=0
    high=len(Arr)-1
    sortedlist=quicksort(Arr,int(low),int(high))
    print(sortedlist)

if __name__=='__main__':
    main()
