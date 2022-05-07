package polymorphism;

public class Overloading {

	public static void main(String[] args) {
		Addition obj = new Addition();
		System.out.println(obj.sum(5, 10));
		System.out.println(obj.sum(5, 10, 15));
	}
}

class Addition {
	int sum(int a, int b) {
		return a+b;
	}
	int sum(int a, int b, int c) {
		return a+b+c;
	}
}