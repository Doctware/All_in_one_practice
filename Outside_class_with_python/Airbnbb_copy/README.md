Welcome to the AirBnB clone project!

First step: Write a command interpreter to manage your AirBnB objects.
This is the first step towards building my first full web application: the AirBnB clone. This first step is very important because i will use what i build during this project with all other following projects: HTML/CSS templating, database storage, API, front-end integration…

Each task is linked and will help you to:

put in place a parent class (called BaseModel) to take care of the initialization, serialization and deserialization of your future instances
create a simple flow of serialization/deserialization: Instance <-> Dictionary <-> JSON string <-> file
create all classes used for AirBnB (User, State, City, Place…) that inherit from BaseModel
create the first abstracted storage engine of the project: File storage.
create all unittests to validate all our classes and storage engine


        THE COMMAND INTEPRETER
     ===========================


*How to start it
it can be run by ./module_name.py or python3 modile_name.py
---------------------------------------------------------------------------------------------
*How to use it
you can type help to se the list of posible command
for example
$./console.py
(hbnb) help

Documented commands (type help <topic>):
========================================
EOF  help  quit

(hbnb)
(hbnb)
(hbnb) quit
$
-------------------------------------------------------------------------------------------------
