public class blink 
{
    public static void main (String args [])
    {
        System.out.println("Press CTRL-C to exit");
        try {
            Runtime runTime= Runtime.getRuntime();
            runTime.exec("gpio mode 12 out");
            while (true)
                {
                runTime.exec("gpio write 12 1");
                Thread.sleep(300);
                runTime.exec("gpio write 12 0");
                Thread.sleep(300);
                System.out.println("led ");
                }
            } catch (Exception e) {
                        System.out.println("Exception occured: " + e.getMessage());
                                    }
    }
}
