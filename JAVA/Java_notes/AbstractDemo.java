public class AbstractDemo {
    public static void main(String[] args) {
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fret = 0.0f;
        fret = sobj.calculateROI();

        System.out.println("ROI of SBI is: " + fret);

        fret = bobj.calculateROI();
        System.out.println("ROI of BOM is: " + fret);
    }
}

abstract class RBI {
    
    public abstract float calculateROI();
 // virtual float calculateROI () = 0; C++
    public void DisplayRules() {
        System.out.println("Submit addhar card and PAN card");

        System.out.println("Minimum balance is 10,000");
    }

}

class SBI extends RBI {
    public float calculateROI() {
        return 5.7f;
    }

}

class BOM extends RBI {
    public float calculateROI() {
        return 7.7f;
    }

}