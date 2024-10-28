# 算术入门之加减乘除
a, b = map(int,input().split())
print("{} + {} = {}".format(a,b,a + b))
print("{} - {} = {}".format(a,b,a - b))
print("{} * {} = {}".format(a,b,a * b))
if(a % b == 0):
    print("{} / {} = {:.0f}".format(a,b,a / b))
else:
    print("{} / {} = {:.2f}".format(a,b,a / b))