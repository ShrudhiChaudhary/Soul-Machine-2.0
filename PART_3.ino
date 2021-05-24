int Fan = 8; //Defined Pin as Variable

// VARIABLE CREATION 
//**************************************************************************
unsigned long Production_Delay; //delay variable creation
unsigned long Flush_Delay; //delay variable creation
unsigned long PreCharge_Delay; //delay variable creation
unsigned long Relay_Test_Delay; //delay variable creation
//**************************************************************************


void oxygen()
{

//CYCLE 1
//**************************************************************************
Serial.println("Sieve A Charge / Sieve B Purge");
    digitalWrite(Sieve_A_Valve, HIGH); 
    digitalWrite(Sieve_B_Valve, LOW); 
    digitalWrite(PreCharge_Valve, LOW); 
delay(Production_Delay);


//CYCLE 2
//**************************************************************************
Serial.println("Sieve A Charge / Sieve B Purge / Flush/PreCharge");
    digitalWrite(Sieve_A_Valve, HIGH); 
    digitalWrite(Sieve_B_Valve, LOW); 
    digitalWrite(PreCharge_Valve, HIGH); 
delay(Flush_Delay) ;
    

//CYCLE 3
//**************************************************************************
Serial.println("Sieve A Charge / Sieve B Charge / Flush/PreCharge");
    digitalWrite(Sieve_A_Valve, HIGH); 
    digitalWrite(Sieve_B_Valve, HIGH); 
    digitalWrite(PreCharge_Valve, HIGH); 
delay(PreCharge_Delay);

//CYCLE 4
//**************************************************************************
Serial.println("Sieve A Purge / Sieve B Charge");
    digitalWrite(Sieve_A_Valve, LOW); 
    digitalWrite(Sieve_B_Valve, HIGH); 
    digitalWrite(PreCharge_Valve, LOW); 
delay(Production_Delay);

//CYCLE 5
//**************************************************************************
Serial.println("Sieve A Purge / Sieve B Charge / Flush/PreCharge");
    digitalWrite(Sieve_A_Valve, LOW); 
    digitalWrite(Sieve_B_Valve, HIGH); 
    digitalWrite(PreCharge_Valve, HIGH); 
delay(Flush_Delay);


//CYCLE 6
//**************************************************************************
Serial.println("Sieve A Charge / Sieve B Charge / Flush/PreCharge");
    digitalWrite(Sieve_A_Valve, HIGH); 
    digitalWrite(Sieve_B_Valve, HIGH); 
    digitalWrite(PreCharge_Valve, HIGH); 
delay(PreCharge_Delay) ;
    
}
