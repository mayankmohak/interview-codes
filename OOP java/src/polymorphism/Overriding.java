package polymorphism;

public class Overriding {
	public static void main(String args []) {
		Parent p = new Parent();
		p.function();
		
		Child c = new Child();
		c.function();
		
		p.function();
		c.function();
		System.out.println(p.a+""+c.a+""+p.a+""+c.a);
	}
}

class Parent{
	int a=10;
	void function() {
		System.out.println("Parent Class's Method !!!");
	}
}

class Child extends Parent {
//	@Override
	int a=20;
	@Override
	void function() {
		System.out.println("Child Class's Method !!!");
	}
}