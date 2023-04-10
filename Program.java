public class Program {
    
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        int sum = calculateSum(numbers);
        System.out.println("The sum of the numbers is " + sum);
        
        if (sum % 2 == 0) {
            System.out.println("The sum is even");
        } else {
            System.out.println("The sum is odd");
        }
    }
    
    public static int calculateSum(int[] array) {
        int sum = 0;
        for (int i = 0; i < array.length; i++) {
            sum += array[i];
        }
        return sum;
    }
    
}
