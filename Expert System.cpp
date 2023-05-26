#include <iostream> 
#include <map>
#include <string> 
#include <iomanip> 
using namespace std;
int main() 
{
map<string, bool> symptoms;
symptoms["fever"] = false;    symptoms["sweating"] = false;
symptoms["headache"] = false;   symptoms["nausea"] = false;
symptoms["vomiting"] = false;    symptoms["diarrhea"] = false;
symptoms["runny_nose"] = false;    symptoms["conjunctivities"] = false;
symptoms["body_ache"] = false;    symptoms["poor_appetite"] = false;
symptoms["abdominal_pain"] = false;    symptoms["chills"] = false;
symptoms["sore_throat"] = false;    symptoms["sneezing"] = false;
symptoms["rash"] = false; 
char ans = ' ';
for (auto i = symptoms.begin(); i != symptoms.end(); i++) 
{
cout << "Does the patient have:(y/n)\t" << setw(15) << i->first << "\t" << setw(4) << " - "; 
cin >> ans;
if (ans == 'Y' || ans == 'y') 
i->second = true;
}
cout << "\n\n Expert's Suggestion \n";
if (symptoms["fever"] && symptoms["sweating"] && symptoms["headache"] && 
symptoms["nausea"] && symptoms["vomiting"] && symptoms["diarrhea"])
{
cout << "Patient has the symptoms for \'Malaria\' \n";
cout << "Patient is advised not to sleep in open air and cover your full skin\n";
cout << "Patient can take these medicines only on consulting doctor :  Aralen, Qualaquin,  Plaquenil, Mefloquine \n\n";
}
else if (symptoms["fever"] && symptoms["sore_throat"] && symptoms["headache"] && 
symptoms["chills"] && symptoms["body_ache"])
{
cout << "Patient has the symptoms for \'Influenza\' \n";
cout << "Patient is advised to take a warm bath and do salt gargling\n";
cout << "Patient can take these medicines only on consulting doctor :  Tamiflu, Panadol,  Zanamivir \n\n";
}
else if (symptoms["runny_nose"] && symptoms["sore_throat"] && symptoms["headache"] && 
symptoms["sneezing"])
{
cout << "Patient has the symptoms for \'Cold\' \n";
cout << "Patient is advised to wear warm cloths\n";
cout << "Patient can take these medicines only on consulting doctor :  Tylenol, Panadol, Nasal  spray \n\n";}
else if (symptoms["abdominal_pain"] && symptoms["poor_appetite"] && symptoms["headache"] 
&& symptoms["fever"])
{
cout << "Patient has the symptoms for \'Typhoid\' \n";
cout << "Patient is advised to do complete bed rest and take soft diet\n";
cout << "Patient can take these medicines only on consulting doctor :  Chloramphenicol, Amoxicillin, Ciprofloxacin, Azithromycin \n\n";
}
else if (symptoms["runny_nose"] && symptoms["rash"] && symptoms["conjunctivities"] && 
symptoms["fever"])
{
cout << "Patient has the symptoms for \'Measles\' \n";
cout << "Patient is advised to get rest and use more liquid\n";
cout << "Patient can take these medicines only on consulting doctor :  Tylenol, Aleve, Advil,  Vitamin A \n\n";
}
else if (symptoms["body_ache"] && symptoms["rash"] && symptoms["fever"]) 
{
cout << "Patient has the symptoms for \'Chicken pox\' \n";
cout << "Patient is advised to have oatmeal bath and stay at home\n";
cout << "Patient can take these medicines only on consulting doctor :  Varicella vaccine, Immunoglobulin, Acetomenaphin, Acyclovir \n\n";
} 
else 
{
cout << "Unable to identifiy the disease from given symptoms\n\n"; 
}
return 0; 
}



for (map<string, bool>::iterator i = symptoms.begin(); i!= symptoms.end(); i++)
{
    cout << "Does the patient have:(y/n)\t" << setw(15) << i->first << "\t" << setw(4) << " - ";
    cin >> ans;
    if (ans == 'Y' || ans == 'y')
        i->second = true;
}

