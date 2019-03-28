
/**
 * Write a description of class Circle here.
 * 
 * @author Alejandre James P. Papina 
 *          BSCS 2-B
 */
public class Circle
{
    // instance variables - replace the example below with your own
   
    double pi;
    double area;
    double circumference;
    String type;

    /**
     * Constructor for objects of class Circle
     */
    public Circle()
    {
        // initialise instance variables
        pi = 3.141569;
    }
    
    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    double area(double radius)
    {
        // put your code here
        area = (radius*radius)*pi;
        return area;
    }
    double getCircumference(double radius){
        circumference = 2*pi*radius;
        return circumference;
        
    }
    String getType(String newtype){
        type = newtype;
        return type;
    }
}
