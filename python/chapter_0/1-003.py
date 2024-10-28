# 输出倒三角图案
def print_inverted_triangle(n):
    ch = '*'
    for i in range(n, 0, -1):
        for j in range(n - i):
            print(" ", end="")
        for k in range(i-1):
            print(ch, end=" ")
        print(ch)
n = 4
print_inverted_triangle(n)