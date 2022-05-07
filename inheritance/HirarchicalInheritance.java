package inheritance;

public class HirarchicalInheritance {

	public static void main(String[] args) {
		Son s = new Son();
		s.function1();
		Daughter d = new Daughter();
		d.function2();
	}
}

class Parent2 {
	String fathername = "ABC";
}

class Son extends Parent2 {
	void function1() {
		System.out.println(fathername);
	}
}

class Daughter extends Parent2 {
	void function2() {
		System.out.println(fathername);
	}
}