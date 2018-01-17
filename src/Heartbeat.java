
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 0;
		while (true) {
			try {
				Thread.sleep(1000);
				System.out.println(n + " seconds have passed");
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			n++;
		}
		
		// it takes like 1 second longer for the Arduino!
	}

}
