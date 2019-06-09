import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
       String string ;
       int i=0;
        Scanner aObj = new Scanner(System.in);
        while (aObj.hasNext()){
            i++;
            string = aObj.nextLine();
            if(string.equals("*")){
                break;
            }else if(string.equals("Hajj")){
                System.out.println("Case "+i+":"+" Hajj-e-Akbar");
            }else if(string.equals("Umrah")){
                System.out.println("Case "+i+":"+" Hajj-e-Asghar");
            }
        }

    }
}
