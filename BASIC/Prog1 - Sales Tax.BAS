Declare Function salesTax(ByVal subTotal As Double) As Double
Dim SubTotal2 As Double
Dim Total2 As Double
SubTotal2 = 10.00
Total2 = salesTax(SubTotal2)
Print "Subtotal:" ; SubTotal2
Print "Total:" ; Total2
Sleep
End

Function salesTax(ByVal subTotal As Double) As Double
   Dim Total As Double
   Total = subTotal*1.07
   return Total
 End Function