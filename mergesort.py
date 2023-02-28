def merge(Arr,l,m,h):
    n1 = m - l + 1
    n2 = h - m
    L=[0]*n1
    R=[0]*n2
    i,j=0,0
    k=l
    for i in range(0, n1):
         L[i] = Arr[l + i]

    for j in range(0, n2):
        R[j] = Arr[m + 1 + j]

    while(i < n1 and j < n2):
            if L[i] <= R[j]:
                Arr[k] = L[i]
                i += 1
            else:
                Arr[k] = R[j]
                j += 1
            k += 1
    while(i < n1):
        Arr[k] = L[i]
        i += 1
        k += 1
	# Copy the remaining elements of R[], if there
	# are any
    while j < n2:
        Arr[k] = R[j]
        j += 1
        k += 1

    
def mergesort(Arr,l,h):
    if l<h:
        m=l+(h-l)//2
        mergesort(Arr,l,m)
        mergesort(Arr,m+1,h)
        merge(Arr,l,m,h)

def main():
    Arr=[12,11,13,5,6,7]
    n=len(Arr)
    print("Given array is")
    for i in range(n):
        print(f"{Arr[i]}",end=" ")
    mergesort(Arr,0,n-1)
    print("Sorted array is")
    for i in range(n):
        print(f"{Arr[i]}",end=" ")

if __name__ == "__main__":
    main()


