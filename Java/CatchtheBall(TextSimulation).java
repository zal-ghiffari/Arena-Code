// =====================================
// 🔹 Title: Catch the Ball Game (Console Version)
// =====================================

import java.util.*;

public class CatchTheBall {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int score = 0;
        Random rand = new Random();

        System.out.println("===== CATCH THE BALL =====");
        System.out.println("Type the correct number to catch the ball!");
        System.out.println("Enter 0 to quit.");

        while (true) {
            int target = rand.nextInt(5) + 1;
            System.out.print("Catch number (" + target + "): ");
            int input = sc.nextInt();

            if (input == 0) break;
            if (input == target) {
                score++;
                System.out.println("🎯 Nice catch! Score: " + score);
            } else {
                System.out.println("❌ Missed! The ball was " + target);
            }
        }
        System.out.println("🏆 Final Score: " + score);
        sc.close();
    }
}
