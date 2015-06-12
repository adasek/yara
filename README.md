# YARA
## Yet Another Routing Algorithm
Prague Hackaton 2015 project focused to develop a pedestrian/public transport routing application.
Key features (that distinct us from others)
Completely open source; simple defined interfaces, expandability
Allowing to choose between fastest and nicest route; “not so fast” option that allows combination of public transport and walk. 
Fast search algorithm and inexpensible server side. Possibility of future applications = modeling the city.

## Threats:
Strong competition: google, seznam, idnes,… Solution: focus on additional features (walks/runs planning), simple interface


## Opportunities:
In September CHAPS will finally open its data in suitable form
Incorporation of open data regarding the enviroment quality allows us to offer better routes



## Implementation suggestions:
C++ as backend language – either with our own graph search algorithm or with some library function. = speed and customization to suit our needs
Frontend API communicating in json/xml/… well-documented format.
Experiment: server could be compiled to client device = working offline
