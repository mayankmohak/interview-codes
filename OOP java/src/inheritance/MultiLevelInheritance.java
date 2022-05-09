package inheritance;

public class MultiLevelInheritance {
	public static void main(String[] args) {
		child1 c = new child1();
		c.function();
	}
}

class GrandParents {
	String surname = "Shrivastava";
}

class Parents1 extends GrandParents {
	String lastname = "Srivastava";
}

class child1 extends Parents1 {
	void function() {
		child1 c1 = new child1();
		System.out.println(c1.surname);
		System.out.println(c1.lastname);
	}
}
