
public class Main {

       public static void main(String args[]) // main method
       {
        for(int x=1; x<5 ; x++){
                     switch (x) {
                     case 1:
                           mainWithEncap obj1 = new mainWithEncap();
                           obj1.setEncap(12);
                           System.out.println("case 1 - encapsulation");
                           System.out.println("Enacpsulation id: " + obj1.getEncap());
                           break;
                     case 2:
                           inheritedClass ob2 = new inheritedClass();
                           System.out.println("\ncase 2 - inheritance");
                           ob2.new1();
                           break;
                     case 3:
                           Overload objop = new Overload();
                           System.out.println("\ncase 3: overload ");
                           double result;
                           objop.demo(10);
                           objop.demo(10, 20);
                           result = objop.demo(5.5);
                           System.out.println("O/P : " + result);
                           mainWithEncap obin = new inheritedClass();
                           obin.new1();
                           break;
        case 4:    Abschild abs=new Abschild();
        System.out.println("\ncase 4: Abstraction");
             System.out.println(abs.getName());
               break;
        case 5:    break;

                     default:
                           System.out.println("oops try the given switches….\n");
                     }
}}
}
