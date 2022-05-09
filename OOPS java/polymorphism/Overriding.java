package polymorphism;

public class Overriding {
	public static void main(String args []) {
		Parent p = new Parent();
		p.funtion();
		
		Child c = new Child();
		c.funtion();
	}
}

class Parent{
	void funtion() {
		System.out.println("Parent Class's Method !!!");
	}
}

class Child extends Parent {
	void funtion() {
		System.out.println("Child Class's Method !!!");
	}
}