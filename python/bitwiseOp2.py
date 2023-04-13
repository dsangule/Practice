# cook your dish here
testcase = int(input())

for i in range(testcase):
    
    length = int(input())
    bin_int = int(input(),2)
    
    min_xor = bin_int + 1
    y = 1
    
    for j in range(1, length+1):
        x = bin_int
        
        xor = x^(int(x/(2**j)))
        min_xor_temp = min_xor
        min_xor = min(xor, min_xor)
        if min_xor != min_xor_temp:
            y = j

    print(y)
