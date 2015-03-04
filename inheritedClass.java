public class inheritedClass extends mainWithEncap // class inherited from main
{
	private int no1;

	inheritedClass() {
	}

	inheritedClass(int a) // constructor for inherited class
	{
		no1 = a;
	}

	public void new1() {
		super.new1();
		System.out.println("Hey..I am the method of derived class named inherited class");
	} // accessing the method of main class using super keyword
}
