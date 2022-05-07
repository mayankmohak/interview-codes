package inheritance;

public class SingleInheritance {

	public static void main(String[] args) {
		child c1 = new child();
		System.out.println(c1.lastname);
		c1.print();
	}
}

class Parent {
	String lastname="Shrivastava";
}

class child extends Parent {
	void print() {
		System.out.println(lastname);
	}
}


