package inheritance;

public class MultipleInheritance {

	public static void main(String[] args) {
		// Java does not support's Multiple Inheritance.
		MultiInheritedChild child1 = new MultiInheritedChild();
		child1.function();
	}
}


interface Mother {
	String mothersname = "A";
}

class Father {
	String fathersname = "B";
}

class MultiInheritedChild extends Father implements Mother{
	void function () {
		System.out.println(mothersname);
		System.out.println(fathersname);
	}
}