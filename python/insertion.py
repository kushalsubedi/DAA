def insertion(A,n)->None:
    for i in range (1,n-1):
        value=A[i]
        hole=i
        while(hole>0 and A[hole-1]>value):
            A[hole]=A[hole-1]
            hole-=1
        A[hole]=value

def main()->None:
    A=[1,8,5,10,6]
    n=len(A)
    insertion(A,n)
    print(A)

if __name__=='__main__':
    main()