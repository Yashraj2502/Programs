/*
Create a class Book and define a display method to display book
information. Inherit Reference_Book and Magazine classes from Book
class and override display method of Book class in Reference_Book and
Magazine classes. Make necessary assumptions required. (Program 1)
*/


import java.util.Scanner;

class book{
    String bName, bAuthor;
    float bPrice;

    void takeInput(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of the Book.");
        bName = sc.nextLine();
        System.out.println("Enter the author of the book.");
        bAuthor = sc.nextLine();
        System.out.println("Enter the price of the book in INR.");
        bPrice = sc.nextFloat();
    }

    void display(){
        System.out.println("\n\nInformation of a Book:-");
        System.out.println("Name     : " + bName + ".");
        System.out.println("Author   : " + bAuthor);
        System.out.println("Price    : Rs " + bPrice + "/-");
    }
}

class referenceBook extends book{
    String rfName;
    float rfPublishYear, rfPages, rfPrice;

    void takeInput(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter the name of the reference Book.");
        rfName = sc.nextLine();
        System.out.println("Enter the Publishing Year of the reference book.");
        rfPublishYear = sc.nextFloat();
        System.out.println("Enter the total number of pages in the reference book.");
        rfPages = sc.nextFloat();
        System.out.println("Enter the price of the reference book in INR.");
        rfPrice = sc.nextFloat();
    }

    void display(){
        System.out.println("\nInformation of a Reference Book:-");
        System.out.println("Name         : " + rfName);
        System.out.println("Publish Year : " + rfPublishYear);
        System.out.println("Pages        : " + rfPages);
        System.out.println("Price        : Rs " + rfPrice + "/-");
    }
}

class magazine extends book{
    String mName, mPublisher;
    float mPrice;

    void takeInput(){
        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter the name of the Magazine.");
        mName = sc.nextLine();
        System.out.println("Enter the publishing company of the Magazine.");
        mPublisher = sc.nextLine();
        System.out.println("Enter the annual price of the Magazine in INR.");
        mPrice = sc.nextFloat();
    }

    void display(){
        System.out.println("\nInformation of a Magazine:-");
        System.out.println("Name       : " + mName);
        System.out.println("Publisher  : " + mPublisher);
        System.out.println("Price      : Rs " + mPrice + "/annual");
    }
}

public class functionOverriding {

    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        //Creating objects.
        book obj1 = new book();
        referenceBook obj2 = new referenceBook();
        magazine obj3 = new magazine();
        //Taking input.
        obj1.takeInput();
        obj2.takeInput();
        obj3.takeInput();
        //Displaying the details.
        obj1.display();
        obj2.display();
        obj3.display();
    }
}