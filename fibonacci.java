import java.util.Scanner;
public class fibonacci {
    public static void main(String[] args){
      Scanner lec = new Scanner(System.in);
        int num1 = 0;
        int num2 = 1;
        int temp;
        int n;

         System.out.print("Ingresa el numero entero: ");
        n = lec.nextInt();
        
        System.out.println(num1);
        System.out.println(num2);

        while(num2+num1 <= n){
            temp = num1;
            num1 = num2;
            num2 = temp + num1;
            System.out.println(num2);
        }
    }
}
