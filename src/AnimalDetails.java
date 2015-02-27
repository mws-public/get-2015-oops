public class AnimalDetails{
public static void main(String[]args){
    //Creation of objects
	Cat C = new Cat();
	Cat C1 = new Cat();
     Lion L = new Lion();
     C.eat();
     L.eat();
     
     //Encapsulation
     C.setCharacter("Friendly");
     System.out.println("Character of this animal is  " +  C.getCharacter());
     
     //Polymorphism
     C.detailsOfCat(2);
     C1.detailsOfCat(1,"Rosy");
     
        }
        }