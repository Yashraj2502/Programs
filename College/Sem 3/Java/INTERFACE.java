/*
interface vehicle{

}

class bicycle implements vehicle{

}

class car implements vehicle{

}

class bike implements vehicle{

}

public class program2 {
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
    }
}*/


/*
Create an interface vehicle and classes like bicycle, car, bike etc,
having common functionalities and put all the common functionalities
in the interface. Classes like Bicycle, Bike, car etc implement all these
functionalities in their own class in their own way.
*/


interface Vehicle {
	
	void changeGear(int a);
	void speedUp(int a);
	void applyBrakes(int a);
}

class Bicycle implements Vehicle{
	
	int speed, gear;
	
	@Override
	public void changeGear(int newGear){
		
		gear = newGear;
	}
	
	@Override
	public void speedUp(int increment){
		
		speed = speed + increment;
	}
	
	@Override
	public void applyBrakes(int decrement){
		
		speed = speed - decrement;
	}
	
	public void printStates() {
		System.out.println("speed: " + speed
			+ " gear: " + gear);
	}
}

class Bike implements Vehicle {
	
	int speed, gear;
	
	@Override
	public void changeGear(int newGear){
		
		gear = newGear;
	}
	
	@Override
	public void speedUp(int increment){
		
		speed = speed + increment;
	}
	
	@Override
	public void applyBrakes(int decrement){
		
		speed = speed - decrement;
	}
	
	public void printStates() {
		System.out.println("speed: " + speed
			+ " gear: " + gear);
	}
	
}
class INTERFACE {
	
	public static void main (String[] args) {
		System.out.print("\033[H\033[2J");
	
		Bicycle bicycle = new Bicycle();
		bicycle.changeGear(2);
		bicycle.speedUp(3);
		bicycle.applyBrakes(1);
		
		System.out.println("Bicycle present state :");
		bicycle.printStates();
		
		Bike bike = new Bike();
		bike.changeGear(1);
		bike.speedUp(4);
		bike.applyBrakes(3);
		
		System.out.println("Bike present state :");
		bike.printStates();
	}
}