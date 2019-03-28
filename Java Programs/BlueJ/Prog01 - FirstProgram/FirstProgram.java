
/**
 * Write a description of class FirstProgram here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class FirstProgram implements UI
{
    // instance variables - replace the example below with your own
    int x;
    int y;

    /**
     * Constructor for objects of class FirstProgram
     */
    public FirstProgram()
    {
        // initialise instance variables
        x = 1;
        y = 0;
    }

    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y
     */
    public void main()
    {
        // put your code here
        x = x-2;
        if (x>0)
            System.out.println("Hi");
        else
            System.out.println("Hello");
    }
}
