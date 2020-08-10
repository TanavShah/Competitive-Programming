public class test {
        public static void main(String args[]) {
              boolean b = true;
                if((b == true) || doStuff(true)) {
                    System.out.println("A");
            }
       }
       public static boolean doStuff(boolean bool) {
                if(bool == true) {
                    System.out.println("B");
            }
            System.out.println("C");
            return true;
         }
}