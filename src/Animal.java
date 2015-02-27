/**
 * Created by p.karthika on 2/27/2015.
 */
public abstract class Animal {

	private static int i = 0;

	// Constructor Overloading
	public Animal() {
		System.out.println(++i + " Animal has been created ");
	}

	public Animal(String name) {
		System.out.println(name + " is the Animal created");
	}

	// Abstraction
	abstract public void eat();

	public void sleep() {
		System.out.println("All animals sleep");
	}
}
