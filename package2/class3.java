package package2;

import package1.class1;

public class class3 {

	public static void main(String[] args) {
		class1 c = new class1();
		System.out.println(c.public_phone);
//		System.out.println(c.protected_phone);
//		System.out.println(c.default_phone);
//		System.out.println(c.private_phone);
		DerivedClass dc = new DerivedClass();
		dc.function();
	}
}

class DerivedClass extends class1 {
	void function() {
		DerivedClass c = new DerivedClass();
		System.out.println(c.public_phone);
		System.out.println(c.protected_phone);
//		System.out.println(c.default_phone);
//		System.out.println(c.private_phone);
	}
}
