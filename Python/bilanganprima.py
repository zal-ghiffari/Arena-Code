#aplikasi bilangan prima

num = int(input("Masukkan angka : "))

if num > 1:
  
   for i in range(2,num):
       if (num % i) == 0:
           print(num,"Bukan bilangan prima")
           break
   else:
       print(num,"Merupakan bilangan prima")
       
else:
   print(num,"Bukan bilangan prima")
