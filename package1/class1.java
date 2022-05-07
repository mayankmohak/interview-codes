package package1;

public class class1 {
	public String public_phone = "PUBLIC PHONE";
	protected String protected_phone = "PROTECTED PHONE";
	String default_phone = "DEFAULT PHONE";
	private String private_phone = "PRIVATE PHONE";
	
	public static void main(String args[]) {
		class1 c = new class1();
		System.out.println(c.public_phone);
		System.out.println(c.protected_phone);
		System.out.println(c.default_phone);
		System.out.println(c.private_phone);
	}
}
