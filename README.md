[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9878934&assignment_repo_type=AssignmentRepo)
# Starbucks Sampler

Authors: <br>
[Sneha Panda](https://github.com/sneha240-panda) <br>
[Kirtana Venkat](https://github.com/kirv1234) <br>
[Deepanjali Halaharivi](https://github.com/doubleeepie) <br>
[Zaniah Lewis](https://github.com/zlewis004) <br>
[Denis Melnikov](https://github.com/deet5) <br>

This project would randomize drink selections like toppings, milks, coffee shots, flavor shots, temperature, etc. for someone who wants to try a new drink at their local cafe. (like Starbucks!)

This is important because coffee is a staple for a lot of college students and adults alike and a lot of people do not know how many different combinations there are for good drinks. Also this would be fun for people to use and the coding would be complex to some extent but not impossible to do.

We would use primarily C++, and use specifically the math library to generate certain items randomly.

Our input would be the weather type, such as whether the weather is sunny, rainy, or cloudy. A user could input what the weather is like outside and the randomizer would automatically adjust which features/aspects of the drink would be included, like whether the drink is hot or cold, has ice or not, and has whipped cream or other temperature-dependent factors or not. This way, the user would not have to keep pressing on a button to generate a random drink so many times and would be able to get one faster.

The output would be the selection made for each individual selection made by the randomizer. The user would also receive an output if they were to input yes for any allergies, which should output altered selections to not include those specific combinations.

One feature we would have is the option to select allergies or dietary restrictions, while another would be one that ranks the drink combination on a scale from 1-5 depending on how it tasted with 1 being not the greatest and 5 being the best. Additionally, recipe suggestions based on user preferences and the nutritional information could be one. Another possibility is that a user can create an account and save their history of drinks. 


## Class Diagram
 
![alt text](/images/readme/UML.png)

The User class has two private attributes, name and age, and a constructor to create a new User instance with these values. The Drink class has one private attribute, temperature, and a getName() method that returns the name of the drink. The syrup and flavor classes are decorators for the Drink class, and they inherit from the Drink class. They each have a constructor that takes a Drink instance and a getName() method that returns the name of the decorated drink. The Hot Chocolate, Chai Tea, and Creme Frappuccino and other classes are derived from the Drink class, and they each have a getName() method that returns the name of the drink. The Randomizer class has two derived classes: CaffRandomizer and NonCaffRandomizer. These classes implement the getRandomDrink() method, which returns a randomly generated name of the drink based on the user's age, the current weather, and the available drinks.

Each class in the diagram has only one responsibility following Single Responsibility Principle. In the given program, we can ensure OCP by using decorators for the Syrup and Flavor classes. Instead of modifying the Drink class every time we want to add a new flavor or syrup, we can create new classes that inherit from the Drink class and add the new behavior as a decorator. This will ensure that the Drink class remains closed for modification, but open for extension, securing Open-Closed principle. To preserve the Liskov Substitution principle the derived classes (Hot Chocolate, Chai Tea, Creme Frappuccino and others) behave like their base class (Drink). We can ensure this by making sure that each derived class implements the same interface as the base class and that they behave in a way that is consistent with the base class. 

These changes helped us to write better code because they are breaking up our tasks and allowing us to focus on one importance at a time. With SRP, single responsibilty principle, focusing on one thing at a time makes code easier to break down and understand as well as debug. OCP states just to add and not modify older code to make tracing easier. LSP states any function or method that works with a base type should work with all of its subtypes without causing errors. This principle makes it easier to reason about code since developers can rely on the behavior of the base type and its subtypes without worrying about unexpected behavior. ISP makes code modular, making it more specific, and should not be forced to be depednent on useless imterfaces. Basically making all code useful and important, makes none of it unhelpful. DIP states that high-level modules should not depend on low-level modules. Instead, both should depend on abstractions, which reduces coupling and makes code more flexible and easier to test.


 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
