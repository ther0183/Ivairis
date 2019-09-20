#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <fstream>
#include <limits>


using namespace std;

int main()
{
	for (;;)
	{
		//Variables
		string myName;
		string myRace;
		string myAbility;
		int myStrg = 0;
		int myInt = 0;
		int myAgil = 0;
		int myVitality = 0;
		int coins = 10;
		short age = 0;
		int myFaction = 0;
		int weapon = 0;
		int spearDmg = 5;
		int daggerDmg = 4;
		int axeDmg = 9;
		int charm = 1;
		int hp = 15;
		int playerAlive = true;
		int choice = 0;

		//Intro - Title
		cout << "Version 0.56 9:13am / 2019-09-17" << endl;
		cout << "This is in Alpha stage.. Only faction 1/2 are coded.. To submit feedback, email ther0183@algonquinlive.com" << endl;
		cout << "Enter the deadly world at your leisure.." << endl;
		cout << "Press [Enter] to begin." << endl;

		//Character begins
		cin.get();
		cout << "\nFantastic! You have stepped into a dark, dangerous world.. Can you remember who you are? \nEnter your name:";
		getline(cin, myName);
		cout << "\nYour memories begin to come back.. " << myName << " can you remember your age? \nEnter your age:" << endl;
		cin >> age;

		while (age < 18)
		{
			cout << "You are too young to proceed.. Please try again." << endl;
			cin >> age;
			if (age >= 18)
				break;
		}
		if (age >= 18)
		{
			cout << "More memories return to you, keep reflecting.. " << endl;
		}


		//Race Loop Question
		cout << "\nWhat is your race?" << endl;
		cout << "[Tabaxi] [Human] " << endl;
		cin >> myRace;
		while (myRace != "Human" && myRace != "Tabaxi")
		{
			cout << "This is an invalid selection, please choose, human or tabaxi" << endl;
			cin >> myRace;
			if (myRace == "huamn" || myRace == "tabaxi")
				break;
		}

		//Ability Questions
		cout << "\nOh fascinating, a " << myRace << ".. A few more questions before we can begin.." << endl;
		Sleep(500);
		cout << "Can you remember your special ability?" << endl;
		cout << "Examples can be such as Flying, and must be 1 word." << endl;
		cin >> myAbility;
		cout << "Interesting..  " << myAbility << ".. Most " << myRace << "'s can't achieve such feats.. " << endl;
		Sleep(700);
		cout << "These questions are about your core skills, please answer from 0-10" << endl;
		Sleep(700);
		cout << "What is your strength level?" << endl;
		cin >> myStrg;
		cout << "Perfect, now what is your intelligence level?" << endl;
		cin >> myInt;
		cout << "Almost done, a few more questions.. What is your agility level?" << endl;
		cin >> myAgil;
		cout << "One more question, What is your vitality?" << endl;
		cin >> myVitality;
		cout << "Ah.. Perfect.. As your memories flood your mind, you are now ready to proceed." << endl;
		cout << "\n" << endl;
		Sleep(1000);
		//---------------------------STATS-------------------------
		cout << "-----STATS-----" << endl;
		cout << "Name: " << myName << endl;
		cout << "Race: " << myRace << endl;
		cout << "Age: " << age << endl;
		cout << "Ability: " << myAbility << endl;
		cout << "Vitality: " << myVitality << endl;
		cout << "Strength: " << myStrg << endl;
		cout << "Intelligence: " << myInt << endl;
		cout << "Agility: " << myAgil << endl;
		cout << "\n" << endl;
		Sleep(700);

		cout << "As you venture into the dungeon you meet a man, he briefly tells you of 4 different factions to join: \n(1)-The grizzlers; ferocious and ruthless fighters. \n(2)-The disciples; bloodied believers of Eoubuse. \n(3)-The remnants; Wariors of strength, and courage. \n(4)-The Accord; calm, and zen people." << endl;
		cin >> myFaction;

		while (myFaction != 1 && myFaction != 2 && myFaction != 3 && myFaction != 4) //Invalid answer loop question
		{
			cout << "This is an invalid selection, please Select 1, 2, 3, or 4." << endl;
			cin >> myFaction;
			if (myFaction == 1 || myFaction == 2 || myFaction == 3 || myFaction == 4)
				break;
		}

		//Start of faction 1
		if (myFaction == 1)
		{
			cout << "Welcome to the Grizzlers! Pick up your spear and fur bindings!" << endl;

			int weapon = spearDmg;
			cout << "Your weapon is the spear! You deal " << spearDmg << " points of damage!" << endl;
			cout << "You have " << hp << " health points, take care of them!" << endl;
			cout << "\n" << endl;

			cout << "A giant bear approaches you! \nDo you: \n(1) Run away? \n(2) Jab it with your spear? \n(3) Throw dirt in its face? \n(4) Give the bear a hug" << endl;
			cin >> choice;

			while (choice != 1 && choice != 2 && choice != 3 && choice != 4) //Invalid answer loop question
			{
				cout << "This is an invalid selection, please Select 1, 2, 3, or 4." << endl;
				cin >> choice;
				if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
					break;
			}

			if (choice == 3) //Player dies from bear
			{
				cout << "Good job idiot, the bear eats your face.." << endl;
				cout << "You die!" << endl;
				playerAlive = false;
				system("pause");
			}
			else if (choice == 1) //Player Dies from bear
			{
				cout << "The bear catches up to you and eats your face..." << endl;
				cout << "You die!" << endl;
				playerAlive = false;
			}
			else if (choice == 4) //Player dies from bear
			{
				cout << "The bear hugs while it bites your face." << endl;
				cout << "You die!" << endl;
				playerAlive = false;
			}
			else if (choice == 2) //Correct Path
			{
				cout << "As you stab the bear, it runs away in a whimper" << endl;

				int choice;
				cout << "As the bear runs away, you walk forward and end up at a split end. \nDo you: \n(1) Left tunnel. \n(2) Right Tunnel." << endl;
				cin >> choice;

				while (choice != 1 && choice != 2) //Invalid answer loop question
				{
					cout << "This is an invalid selection, please Select 1, 2." << endl;
					cin >> choice;
					if (choice == 1 || choice == 2)
						break;
				}

				if (choice == 1) //Player dies from left path
				{
					cout << "You walk fowards, deeper into the tunnel, as the ground comes lose, and fall to your death." << endl;
					cout << "You die!" << endl;
					playerAlive = false;
				}
				else if (choice == 2) //Correct Path
				{
					int goblinHP = 10;
					int goblinDmg = 2;

					cout << "As you venture deeper into the tunnel you see a goblin, he rushes towards you." << endl;
					cout << "Do you: \n(1) Stab with the spear, \n(2) run towards the left tunnel." << endl;
					cin >> choice;

					while (choice != 1 && choice != 2) //Invalid answer loop question
					{
						cout << "This is an invalid selection, please Select 1, 2." << endl;
						cin >> choice;
						if (choice == 1 || choice == 2)
							break;
					}

					if (choice == 1) // Fighting Goblin in right tunnel
					{
						cout << "As you stab the goblin, only " << goblinHP - spearDmg << " hp remains, the goblin retaliates, and hits you for " << goblinDmg << endl;
						int hp = 13;
						int goblinHP = 5;
						cout << "Do you: to \n(1) Stab again? \n(2) retreat to the left tunnel?" << endl;
						cin >> choice;
						while (choice != 1 && choice != 2) //Invalid answer loop question
						{
							cout << "This is an invalid selection, please Select 1, 2." << endl;
							cin >> choice;
							if (choice == 1 || choice == 2)
								break;
						}
						if (choice == 1)// Correct path -- Kills goblin
						{
							cout << "You stab the goblin to its death!" << endl;
							Sleep(1000);
							cout << "You walk past the dead goblin, and reach a thick wooden door, \nDo you \n(1) Open it? \n(2) retreat to left tunnel?" << endl;
							cin >> choice;

							while (choice != 1 && choice != 2) //Invalid answer loop question
							{
								cout << "This is an invalid selection, please Select 1, 2." << endl;
								cin >> choice;
								if (choice == 1 || choice == 2)
									break;
							}

							if (choice == 1) //Correct Path 
							{
								cout << "With your trusty spear in hand, and a vial of health in your pocket you enter the room, you see before you a goblin king." << endl;

								cout << "The goblin king see's you and shoots an arrow. Do you \n(1) Attempt to dodge? \n(2) Attempt to hide? \n(3) Attack? \n(4) Block?" << endl;
								cin >> choice;

								while (choice != 1 && choice != 2 && choice != 3 && choice != 4) //Invalid answer loop question
								{
									cout << "This is an invalid selection, please Select 1, 2, 3, or 4." << endl;
									cin >> choice;
									if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
										break;
								}

								if (choice == 1 || choice == 2 || choice == 3) //Correct path
								{
									cout << "You take 5 points of damage as an arrow ludges itself in your leg." << endl;
									int hp = 8;
									cout << "You have, " << hp << " left!" << endl;
									Sleep(1000);
									cout << "You obtain an opportunity attack! Your next attack will be doubled in Dmg!" << endl;
									cout << "Do you: \n(1) Lunge for an attack? \n(2) Throw your spear at the goblins face?" << endl;
									cin >> choice;

									while (choice != 1 && choice != 2) //Invalid answer loop question
									{
										cout << "This is an invalid selection, please Select 1, 2." << endl;
										cin >> choice;
										if (choice == 1 || choice == 2)
											break;
									}

									if (choice == 1) //Correct Path
									{
										cout << "You deal 10 points of damage to the King!" << endl;
										cout << "The king hits you back for 4 points of damage!" << endl;
										int hp = 3;
										cout << "You have 3 HP left!" << endl;
										cout << "Do you: \n(1) Hit again? \n(2) Hide?" << endl;
										cin >> choice;

										while (choice != 1 && choice != 2) //Invalid answer loop question
										{
											cout << "This is an invalid selection, please Select 1, 2." << endl;
											cin >> choice;
											if (choice == 1 || choice == 2)
												break;
										}

										if (choice == 1) //Player dies from goblin king
										{
											cout << "You deal 5 points of damage!" << endl;
											cout << "The king swipes you for 3 points of damage, and the world fades.." << endl;
											cout << "You died!" << endl;
											playerAlive = false;
										}
										else if (choice == 2) //Correct path
										{
											cout << "You manage to hide, and wait for an attack opportunity.." << endl;
											cout << "Do you: \n(1) Sneak attack? \n(2) Rush for the kill?" << endl;
											cin >> choice;

											while (choice != 1 && choice != 2) //Invalid answer loop question
											{
												cout << "This is an invalid selection, please Select 1, 2." << endl;
												cin >> choice;
												if (choice == 1 || choice == 2)
													break;
											}

											if (choice == 1) //Player dies from Goblin king
											{
												cout << "The king spots you coming out of hiding and throws his axe at you, taking 5 points of damage." << endl;
												cout << "You die!" << endl;
												playerAlive = false;
											}
											else if (choice == 2) //Player Wins!
											{
												cout << "You rush for the kill, and jab your spear in the king, as he takes his final breathe he falls to the ground." << endl;
												cout << "You won!" << endl;
												playerAlive = true;
											}
										}
									}
									else if (choice == 2) //Goblin king kills player
									{
										cout << "As you throw your spear, it lodges itself in the fat body, The king takes 10 points of dmg" << endl;
										cout << "The king takes the spear, and throws it back, chopping your head off.." << endl;
										cout << "You die!" << endl;
										playerAlive = false;
									}
								}
								else if (choice == 3) //Goblin King kills player
								{
									cout << "As you lunge forward, an arrow ludges itself in your skull. The world goes black." << endl;
									cout << "You died!" << endl;
									playerAlive = false;
								}
							}
							else if (choice == 2) //Left Tunnel kills player
							{
								cout << "As you retreat back, you stumble on the dead goblin and impale yourself on your spear." << endl;
								cout << "You die!" << endl;
								playerAlive = false;
							}
						}
						else if (choice == 2) //Left tunnel Kills player
						{
							cout << "As you retreat to the left tunnel, you trip, and impale yourself on your spear." << endl;
							cout << "You die!" << endl;
							playerAlive = false;
						}
					}
					else if (choice == 2) // Left tunnel Death
					{
						cout << "You run back to the left tunnel, and as you venture deeper, the ground becomes lose, and you fall to your death" << endl;
						cout << "You have died." << endl;
						playerAlive = false;
					}
				}
			}
		}
		//Start of faction 2
		else if (myFaction == 2)
		{
			weapon = daggerDmg;
			cout << "\nWelcone to the Disciples! Better ready that dagger!" << endl;
			cout << "Your weapon is a Dagger, you deal 4 points of damage." << endl;

			int choice2 = 0;
			cout << "\nYou walk past the man, and find yourself in a tavern." << endl;
			cin.get();
			cout << "As you sit by the bar, in your bloodied robes. The innkeep asks, 'Who are you?'" << endl;
			cout << "What say you: \n(1) A lonely traveller. \n(2) Your fate. \n(3) Stay silent." << endl;
			cin >> choice2;

			while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
			{
				cout << "This is an invalid selection, please Select 1, 2." << endl;
				cin >> choice;
				if (choice2 == 1 || choice2 == 2)
					break;
			}

			if (choice2 == 1)//Good path
			{
				cout << "\nAs you answer the Innkeep he tells you, you looking for work?" << endl;
				Sleep(1000);
				cout << "You say: \n(1) Yes, \n(2) I'm doing fine." << endl;
				cin >> choice2;

				while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
				{
					cout << "This is an invalid selection, please Select 1, 2." << endl;
					cin >> choice2;
					if (choice2 == 1 || choice2 == 2)
						break;
				}

				if (choice2 == 1)//Good Path
				{
					cout << "\nSpeak to the man in the corner, he wears a dark cloak." << endl;
					Sleep(1000);
					cout << "You approach the man in the corner." << endl;
					Sleep(1000);
					cout << "As you approach him, he asks, before you step closer," << endl;
					cout << "Choose one:\n(1) Blood \n(2) Water" << endl;
					cin >> choice2;

					while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
					{
						cout << "This is an invalid selection, please Select 1, 2." << endl;
						cin >> choice2;
						if (choice2 == 1 || choice2 == 2)
							break;
					}

					if (choice2 == 1) //Good path
					{
						cout << "\nHah, good answer. He tosses you a vial. Drink this vial, the drink you had at the bar is poisoned." << endl;
						Sleep(1000);
						cout << "Do you: \n(1) Drink vial. \n(2) Toss the vial." << endl;
						cin >> choice2;
			
						while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
						{
							cout << "This is an invalid selection, please Select 1, 2." << endl;
							cin >> choice2;
							if (choice2 == 1 || choice2 == 2)
								break;
						}

						if (choice2 == 1)// Good Path
						{
							cout << "\nThe man says 'Good choice, life you chose..' the fluid flows through your body, you dont feel any different." << endl;
							Sleep(1000);
							cout << "Do you: \n(1) He says, 'I have dirty work to be done, up for it? \n(2) Refuse his tasks.." << endl;
							cin >> choice2;
							Sleep(1000);

							while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
							{
								cout << "This is an invalid selection, please Select 1, 2." << endl;
								cin >> choice2;
								if (choice2 == 1 || choice2 == 2)
									break;
							}

							if (choice2 == 1)// Good Path
							{

							}
							else if (choice2 == 2) //Player Death from tavern brawl
							{
								cout << "\nYou refuse his task, and walk away, as you walk away a group of goliaths barge into the tavern, and begin slaughtering everyone. You included.." << endl;
								cout << "You die!" << endl;
								playerAlive = false;
							}
						}
						else if (choice2 == 2) //Player dies from poison
						{
							cout << "\nYou toss the vial aside, the liquid spills on the ground spoiling the contents." << endl;
							Sleep(1000);
							cout << "Everything begins to blur, you fall to your knees, you feel burning in your lungs, you fall to the ground and the world goes dark.." << endl;
							cout << "You died!" << endl;
							playerAlive = false;
						}
					}
					else if (choice2 == 2) //You die from poison
					{
						cout << "\nYou weakling, Everything becomes blurry, as you look at your hands, drink in hand.. Have they poisoned you?" << endl;
						Sleep(1000);
						cout << "You died!" << endl;
						playerAlive = false;
					}
				}
				else if (choice2 == 2) //Player Dies
				{
					cout << "\nHelp yourself then.." << endl;
					Sleep(1000);
					cout << "As you sit there alone, a goliath barges in the tavern, handaxe bloodied in hand. His face raving.. He lets out a bellowing scream as he rushed towards you." << endl;
					Sleep(1000);
					cout << "He sends his axe flying at you, as it hits you in the neck, blood gushes out, you fall to the ground.. The world goes dark.." << endl;
					cout << "You died!" << endl;
					playerAlive = false;
				}
			}
			else if (choice2 == 2)  //Death from being a jerk to innkeeper
			{
				cout << "\nThe innkeep is highly offended, as he steps backwards staring at you. He grins as he reaches below." << endl;
				cout << "The innkeep takes his crossbow out, and shoots a straight one through your skull..." << endl;
				cout << "You die!" << endl;
				playerAlive = false;
			}
			else if (choice2 == 3) //Path towards tiefling 
			{
				cout << "\nThe innkeep shrugs, as he keeps cleaning his mug." << endl;
				cout << "A tiefling sits beside you, hair beautiful of flame. Her eyes, piercing blue. She makes you feel comfortable and safe." << endl;
				cout << " Do you: \n(1) Flirt. \n(2) Ignore. \n(3) Slap her ass." << endl;
				cin >> choice2;

				while (choice2 != 1 && choice2 != 2) //Invalid answer loop question
				{
					cout << "This is an invalid selection, please Select 1, 2." << endl;
					cin >> choice2;
					if (choice2 == 1 || choice2 == 2)
						break;
				}

				if (choice2 == 2) //death from ignoring a hot tiefling
				{
					cout << "\nShe becomes impatient, as she unsheathes her dagger, and plants it in your eye." << endl;
					cout << "You die!" << endl;
					playerAlive = false;
				}
				else if (choice2 == 3)//death from slapping ass
				{
					cout << "\nShe unsheathes her dagger, and plants it in your leg." << endl;
					cout << "As you scream, in pain, she yanks her dagger out of your leg, sticks it on the counter, and smashes your head in." << endl;
					cout << "You die!" << endl;
					playerAlive = false;
				}
				else if (choice2 == 1) //path to bedroom
				{
					cout << "\nShe giggles, as you tell her a swift pick up line." << endl;
					cout << "She invites you to her chambers" << endl;
					cout << "Do you: \n(1) Accept. \n(2) Refuse," << endl;
					cin >> choice2;

					while (choice2 != 1 && choice != 2) //Invalid answer loop question
					{
						cout << "This is an invalid selection, please Select 1, 2." << endl;
						cin >> choice2;
						if (choice2 == 1 || choice == 2)
							break;
					}
					if (choice2 == 2)//Death path from not hooking up
					{
						cout << "\nShe grows impatient as you see her eyes glow." << endl;
						cout << "You hear voices in your head, whispering, getting ever louder.." << endl;
						cout << " Press [ENTER] to continue.." << endl;
						cin.get();
						cout << "As the voices, become louder and louder, so does her gaze.. Blood trickles down your ear.. before the world goes black.." << endl;
						cout << "You die!" << endl;
						playerAlive = false;
					}
					else if (choice2 == 1) //Death Path with SUCUBUS
					{
						cout << "\nYou follow her upstairs, in the strange tavern.. Wooden floor creaking under your step.." << endl;
						cout << "You hear her mutter, in a seducing tone 'What will you do?' " << endl;
						cin.get();
						cout << "\nAs you try to imagine all opportunities, you step into her room.. The door slams loudly behind you.." << endl;
						cout << "As you turn back towards her, she stands before you naked.. She motions come hither.." << endl;
						cout << " Press [ENTER] to continue.." << endl;
						cin.get();
						cout << "\nYou slowly approach her as suddenly, a bone wing unlatches from her back, with a thud as it hits the ground." << endl;
						cout << " Press [ENTER] to continue.." << endl;
						cin.get();
						cout << "\nYou back away quickly, as the second wing unlatches, and the familiar thud echoes in the small room.. She propels herself towards you, aided by the wings.. As she gets closer she sends her wings your way.." << endl;
						cout << " Press [ENTER] to continue.." << endl;
						cin.get();
						cout << "\nYou feel 2 distinct punctures as you see the wings lodged in your body.." << endl;
						cout << "You die!" << endl;
						playerAlive = false;
					}
				}
			}
		}
		//Start of faction 3
		else if (myFaction == 3)
		{
		int choice3 = 0;
			cout << "Welcome to the Remnants!" << endl;
		}
		//Start of faction 4
		else if (myFaction == 4)
		{
		int choice4 = 0;
			cout << "Welcome to the accord!" << endl;
		}
		//Player Lives
		if (playerAlive == true)
		{
			cout << "\nThank you for playing, You won my game!!" << endl;
			system("pause");
			return 0;
		}
		//Player Dies
		else if (playerAlive == false)
		{
			cout << "\nThank you for playing! Good luck next time!" << endl;
		}
		//Loop break question
		cout << "Do you want to play again? [Y] or [N]" << endl;
		char answer;
		cin >> answer;
		if (answer == 'n')
			break; //Ends loop
				   //Else repeats
		cout << "\n" << endl;
	}
	cout << "Thank you for playing, goodbye!" << endl;
	system("pause");
	return 0;
}