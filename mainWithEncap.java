//PROGRAM TO IMPLEMENT OOPS CONCEPT
public class mainWithEncap // base class
{
	private int encap; // variable showing encapsulation

	public void setEncap(int newValue) // method for encapsulation
	{
		encap = newValue;
	}

	public int getEncap() {
		return encap;
	}

	public void new1() {
		System.out.println("I am the method of base class");
	}
}
