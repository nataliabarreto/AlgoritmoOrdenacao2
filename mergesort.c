import time

def merge(list1):
    if len(list1)>1:
        mid = len(list1)//2
        lefthalf = list1[:mid]
        righthalf = list1[mid:]

        merge(lefthalf)
        merge(righthalf)

        i=0
        j=0
        k=0

        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] < righthalf[j]:
                list1[k]=lefthalf[i]
                i=i+1
            else:
                list1[k]=righthalf[j]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            list1[k]=lefthalf[i]
            i=i+1
            k=k+1

        while j < len(righthalf):
            list1[k]=righthalf[j]
            j=j+1
            k=k+1

f = open('num.1000.1.in', 'r')
vetor = f.readlines()
antes = time.time()
merge (vetor)
depois = time.time()
total = (depois - antes) *1000
            
print(vetor)

print("O tempo total foi: %0.2f ms" % total) 
