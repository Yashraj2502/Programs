/*
import java.awt.Insets;
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.text.font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;


public class login extends Application{
    @Override
    public void start(Stage primaryStage){
        primaryStage.setTitle("JavaFX Welcome!!!");
        primaryStage.show();
        GridPane grid = new GridPane();
        grid.setAlignment(Pos.CENTER);
        grid.setHgap(10);
        grid.setVgap(10);
        //Grid.setPadding(new Insets(25, 25, 25, 25));
        Scene scene = new Scene(grid, 300, 275);
        primaryStage.setScene(scene);
        //Text sceneTitle = new Text("Welcome");
        Text scenetitle = new Text("Welcome");
#        sceneTitle.setFont(Font.font("Tahoma", FontWeight.NORMAL, 20));
        grid.add(scenetitle, 0, 0, 2, 1);
        Label userName = new Label("Username:- ");
        grid.add(userName, 0, 1);
        TextField userTextField = new TextField();
        grid.add(userTextField, 1, 1);
        Label pw = new Label("Password:- ");
        grid.add(pw, 0, 2);
        PasswordField pwBox = new PasswordField();
        grid.add(pwBox, 1, 2);
        Button btn = new Button("Sign In");
        HBox hbBtn = new HBox(10);
        hbBtn.setAlignment(Pos.BOTTOM_RIGHT);
        hbBtn.getChildren().add(btn);
        grid.add(hbBtn, 1, 4);
        final Text actionTarget = new Text();
        grid.add(actionTarget, 1, 6);

        public static void main(String[] args) {
            launch(args);
        }
    }
}
*/

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;

class Login extends Application{
    @Override
    public void start (Stage primaryStage){
        primaryStage.setTitle("Javafx WElcome");
        primaryStage.show();
        GridPane grid = new GridPane();
        grid.setAlignment(Pos.CENTER);
        grid.setHgap(10);
        grid.setVgap(10);
        Scene scene = new Scene(grid,300,275);
        primaryStage.setScene(scene);
        Text scenetitle = new Text("Welcome");
        scenetitle.setFont(Font.font("Tahoma",FontWeight.EXTRA_BOLD,20));
        grid.add(scenetitle,0,0,2,1);
        Label userName = new Label("USer Name");
        grid.add(userName,0,1);
        TextField userTextField = new TextField();
        grid.add(userTextField,1,1);
        Label pw =  new Label("Password :");
        grid.add(pw,0,2);
        PasswordField pwBox = new PasswordField();
        grid.add(pwBox,1,2);
        Button btn = new Button ("Sign In ");
        HBox hbBtn = new HBox(10);
        hbBtn.setAlignment(Pos.BOTTOM_RIGHT);
        hbBtn.getChildren().add(btn);
        grid.add(hbBtn,1,4);
        final Text actiontarget = new Text();
        grid.add(actiontarget,1,6);
    }
    public static void main(String[] args) {
        launch(args);    }

}