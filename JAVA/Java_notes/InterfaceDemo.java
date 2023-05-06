public class InterfaceDemo {
    public static void main(String[] args) {
        Demo obj = new Demo();

        float fret = 0.0f;

        fret = obj.calculateArea(10.5f);
        System.out.println("Area of circle: "+fret);

        fret = obj.calculateCicumferance(10.5f);
        System.out.println("Circumference of circle: "+fret);
        
    }
}

interface Circle 
{
    public final float PI =3.14f;

    public float calculateArea(float radius);
    public float calculateCicumferance(float radius);
}

class Demo implements Circle
{
    public float calculateArea(float radius) 
    {
        return PI*radius*radius;
    }
    
    public float calculateCicumferance(float radius)
    {
        return 2 * PI *radius;
    }
}