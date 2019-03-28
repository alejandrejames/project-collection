no = input("Enter a number: ")
no2 = int(no)
no3 = int(no)
no4 = int(no)

while no2!=1:
    if (no2%2)!=0:
        x2 = 0
        no2 = 1
    else:
        no2 = no2/2
        x2=1

while no3!=1:
    if (no3%3)!=0:
        x3 = 0
        no3 = 1
    else:
        no3 = no3/3
        x3=1

while no4!=1:
    if (no4%4)!=0:
        x4 = 0
        no4 = 1
    else:
        no4 = no4/4
        x4=1


if x2==1:
    str2 = "True, "
else:
    str2 = "False, "
if x4==1:
    str4 = "True"
else:
    str4 = "False"
if x3==1:
    str3 = "True, "
else:
    str3 = "False, "
rst = str2 + str3 + str4
print (rst)
