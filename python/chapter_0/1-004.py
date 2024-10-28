# 厘米换算英尺英寸
cm = eval(input())
meters = cm / 100
feet = meters / 0.3048
feet_int = int(feet)
inches = (feet - feet_int) * 12
inch = int(inches)
print("{} {}".format(feet_int,inch))