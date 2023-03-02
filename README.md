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

The program starts with asking the user their name and current weather outside, (we may add asking the user for their allergies or milk intolerances but we do not have that implemented yet). After that based on the weather outside, (if it is hot, they will be recommended a cold drink, and vice versa) the program would randomly generate a drink for them. The classes we have currently are subcategories of the final drink product. They fall under, caffeinated and non caffeinated. We made sure to include setter and getter methods in order to pull the drink names and customizations to display to the user after the choice is generated. Under caffeinated drinks, we split the group into tea and coffee. Tea leads to either cold or hot chai and only that as of right now, but we may add to this to include other teas. In coffee, which can all be hot or cold, we have lattes and or macchiatos (which are unmixed lattes), which include a certain type of milk, syrup, toppings, and a certain number of espresso shots. Espressos are just plain coffee as are americanos which are just diluted with more water. Turning into the non caffeinated group, we branch into frappes, which come in different flavors and the choice of whipped cream/toppings, and refreshers/lemonades which come in different flavors; both are cold. The hot option is hot chocolate, which only comes with the options of whipped cream and or toppings. We plan on storing our different choices for milk, syrups, flavors, and toppings in arrays for random generation. 

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
 
