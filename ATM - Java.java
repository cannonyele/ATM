package com.company;
import java.util.*;

public class atm {
    atm(){
        System.out.println("welcome!");
    }
    public static void atm() {
        while (true){
            Scanner input = new Scanner(System.in);
            int namba,nywila,choice1,amount = 0,bankbalance = 1000000,balance ,checkbalance = 0;
            int accno = 2002,pin = 1234;
            System.out.print("account number: ");
            namba = input.nextInt();

            if(namba == accno){
                System.out.print("pin: ");
                nywila = input.nextInt();
                if(nywila == pin){
                    System.out.println("what to do");
                    System.out.println("1. withdraw");
                    System.out.println("2. check balance");
                    choice1 = input.nextInt();
                    switch (choice1){
                        case 1:
                            System.out.print("amount: ");
                            amount=input.nextInt();
                            if(amount>=10000 && amount<=400000){
                                System.out.println("withdraw successfull!");
                                balance = bankbalance-amount;
                                System.out.println("you have withdraw "+ amount+" the remaining balance is "+balance + "Tshs");
                            }
                            else{
                                System.out.println("not successful");
                            }
                            break;
                        case 2:
                            balance = bankbalance-amount;
                            System.out.println(balance + "Tshs");
                            break;
                        default:
                            break;
                    }
                }
                else{
                    System.out.println("incorrect pin");
                }
            }
            else{
                System.out.println("no acc");
            }
        }
    }
}
