/*
Java Program to Create Account with 1000 Rs Minimum
Balance, Deposit Amount, Withdraw Amount and Also
Throws LessBalanceException. It has a Class Called
LessBalanceException Which returns the Statement that
Says WithDraw Amount(_Rs) is Not Valid. It has a Class
Which Creates 2 Accounts, Both Account Deposite Money
and One Account Tries to WithDraw more Money
10
LO1
LO3
LO4
Which Generates a LessBalanceException Take Appropriate
Action for the Same.
*/

import java.util.*;

class account{
    private int bal, acno;

    account(int a){
        this.acno = a;
        bal = 1000;
        System.out.println("Account " + a + " created");
    }
    void deposit(int dep){
        bal += dep;
        System.out.println("Amount deposited :- " + dep);
        System.out.println("Total Balance :- " + bal);
    }
    void withdraw(int wd) throws LessBalanceException   {
        if(bal - wd < 1000)
            throw new LessBalanceException(wd);
        else{
            bal -= wd;
            System.out.println("Amount withdrawn :- " + wd);
            System.out.println("Total Balance :- " + bal);
        }
    }
    void display(){
        System.out.println("Account No.:- " + acno + "\nBalance :- " + bal);
    }
}

class LessBalanceException extends Exception{
    int a;

    LessBalanceException(int a){
        this.a = a;
    }
    public String toString(){
        return("Withdrawal amount :- " + a + " is not valid.");
    }
}

public class THROwCATCH {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J"); 
        account a[] = new account[10000];
        Scanner s = new Scanner(System.in);
        int i = 1, j, ch, amt;

        do {
            System.out.println("Menu:-\n1.Creation\n2.Deposit\n3.Withdraw\n4.Account Information\n5.Exit\n");
            ch = s.nextInt();

            try {
                switch (ch) {
                    case 1:
                        a[i] = new account(i);
                        i++;
                        break;

                    case 2:
                        System.out.println("Enter account number:-");
                        j = s.nextInt();
                        System.out.println("Enter amount:-");
                        amt = s.nextInt();
                        a[j].deposit(amt);
                        break;

                    case 3:
                        System.out.println("Enter account number:-");
                        j = s.nextInt();
                        System.out.println("Enter amount:-");
                        amt = s.nextInt();
                        a[j].withdraw(amt);
                        break;

                    case 4:
                        System.out.println("Enter account nummber:-");
                        j = s.nextInt();
                        a[j].display();
                        break;
                }
            } catch (Exception e) {
                System.out.println(e);
            }
        } while (ch != 5);
    }
}
