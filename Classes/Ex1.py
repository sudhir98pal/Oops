class Medicine:
    MedicineType='fever'
    #The __init__ method is similar to constructors in C++ and Java
    def __init__(self,name,pricePerPack,packSize,numberOfPackAvailable):
        self.name=name
        self.pricePerPack=pricePerPack
        self.packSize=packSize
        self.numberOfPackAvailable=numberOfPackAvailable
    def buyMedicine(self):
        print('Medincines of',self.MedicineType,'are available')
        print('Do you want to buy it ')
        print('Type Yes or No') 
        buyOption=input().strip()
        if(buyOption.lower()=='yes'):
            print('Please tell us Your Medicine Name')
            mediceineName=input().strip()
            if(mediceineName.lower()!=self.name.lower()):
                print('Sorry This Medicine is not Available right Now')
                print('Other Medicine Availabe for '+self.MedicineType+ ' '+self.name)
                buyOption=input('Do you Whant to Buy ' +self.name+' ')
            if(buyOption.lower()=='yes'):
                numberOfPacks=int(input('How Many Packs of Medicine You Wish to Buy '))
                if(self.numberOfPackAvailable<numberOfPacks):
                    print('Required Number Of Medicine Packs is OutOfStock')
                else:
                    self.numberOfPackAvailable=self.numberOfPackAvailable-numberOfPacks
                    youPrice=numberOfPacks*self.pricePerPack
                    print('You Total Purchase Amount is :' ,youPrice) 

              
        else:
            return    

sudhir=Medicine('Zerodol',75,10,25)
sudhir.buyMedicine()


