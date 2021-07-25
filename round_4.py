total = 0
t = int(input())
for _ in range(t):
    hashmap = {}
    hashmap2 = {}
    s1 = input()
    s2 = input().split(' ')
    s3 = ''
    for i in s2:
        s3+=i[-1]
    points = 0
    for i in range(len(s1)):
        if(s1[i] not in hashmap and s3[i] not in hashmap2):
            hashmap[s1[i]] = s3[i]
            hashmap2[s3[i]] = s1[i]
            points+=1
        elif(s1[i] in hashmap and s3[i] in hashmap2):
            points+=1
        else:
            break
    print(points)
    total+=points
print(total)