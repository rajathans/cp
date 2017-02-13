import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 * Created by ydubale on 4/10/15.
 */
public class q1 {

    public static int standOvation(int sMax, String value){

        if(sMax == 0){
            return 0;
        }

        int needed = 0;
        int prevSum = 0;

        for(int i=0; i < sMax + 1; i++){
            int charNum = Character.getNumericValue(value.charAt(i));
            System.out.println(charNum);

            if(charNum == 0) continue;


            //System.out.println(charNum);
            //System.out.println("PrevSum: " + prevSum + " i: " + i);

            if(prevSum < i+1){
                needed += (i - prevSum);
                prevSum += needed;
            }

            prevSum += charNum;
        }

        return needed;
    }

    public static void main(String[] args) throws FileNotFoundException {

        Scanner scan = new Scanner(new File("standingOvationInput"));

        int numTestCases = scan.nextInt();

        for(int i =0; i < numTestCases; i++){
            int sMax = scan.nextInt();
            String line = scan.nextLine().trim();
            //System.out.println("DOING LINE: ---------------- " + sMax + " " + line);
            System.out.println("Case #" + (i+1) + ": " + standOvation(sMax, line));
        }
    }


}