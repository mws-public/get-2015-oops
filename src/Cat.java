//Inheritance
public class Cat extends Animal {

	// Encapsulation
	private String character;

	
	public String getCharacter() {
		return character;
	}

	public void setCharacter(String character) {
		this.character = character;
	}

	//Polymorphism
	public void detailsOfCat(int age){
     System.out.println("Age of cat is " + age);
     }
	
	public void detailsOfCat(int age,String name)
	{
	System.out.println("Age of "+name + " is "+ age);
	}
	
    public void eat()
    {
        System.out.println("Cat loves to drink milk");
    }
    public Cat(){
        super("cat");
        System.out.println("Cat is a domestic animal");
    }
    
}