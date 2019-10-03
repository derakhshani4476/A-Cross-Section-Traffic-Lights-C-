#include "mbed.h"



DigitalOut BRTGREEN (PTC7);
DigitalOut BRTRED (PTC3);
DigitalOut BRTYELLOW (PTC0);


DigitalOut TBUSRED (PTC6);
DigitalOut TBUSYELLOW (PTC5);
DigitalOut TBUSGREEN (PTC4);

DigitalOut VCARRED (PTC12);
DigitalOut VCARYELLOW (PTC11);
DigitalOut VCARGREEN (PTC10);


DigitalOut TCARRED (PTC17);
DigitalOut TCARYELLOW (PTC16);
DigitalOut TCARGREEN (PTC13);


DigitalOut RLEFTRED (PTA13);
DigitalOut RLEFTYELLOW (PTA17);
DigitalOut RLEFTGREEN (PTA16);


DigitalOut TWRed(PTE2); //walking lights in taleghani
DigitalOut TWGreen(PTB8);

DigitalOut VWRed(PTE0); //walking lights in valiasr
DigitalOut VWGreen(PTE1);

DigitalOut emergencylight (PTB0);

InterruptIn button1(PTD4);  //push button

//initial state
int state ;
int em = 0; //emergency flag



// interrupt routine
void int_button(){
    em =1;
    }


    
int main() {
     
     
  
 
     button1.rise(&int_button);
    while(true) {
    
              
           
        switch(state){
            
            case 0:
                emergencylight=0; 
                VCARGREEN = 1;
                VCARYELLOW = 0;
                VCARRED = 0;
                BRTGREEN =1;
                BRTYELLOW =0;
                BRTRED =0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TCARGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                TBUSGREEN = 0;
                VWRed = 1;
                VWGreen = 0;
                TWGreen = 1;
                TWRed = 0;
                for(int count = 0; count<100;count++){
               
               wait(0.1);
              
                if(em == 1) {
                    state = 5;
                     //emergencylight = 1;
                    
                    }
                    else state = 1;
            }
                break;
                
            case 1:
            emergencylight=0; 
                VCARGREEN = 1;
                VCARYELLOW = 0;
                VCARRED = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 0;
                RLEFTGREEN = 1;
                RLEFTYELLOW = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TCARGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                TBUSGREEN = 0;
                VWRed = 1;
                VWGreen = 0;
                TWGreen = 1;
                TWRed = 0;
                for(int count = 0; count<100;count++){
                    wait(0.1);
                if(em == 1) {
                    state = 6;
                     //emergencylight = 1;
                    
                    }
                    else state=2;
        
        }
                break;
                
            case 2:
            emergencylight=0; 
                VCARGREEN = 0;
                VCARYELLOW = 1;
                VCARRED = 0;
                BRTGREEN =0;
                BRTRED = 0;
                BRTYELLOW = 1;
                RLEFTRED = 0;
                RLEFTGREEN = 0;
                RLEFTYELLOW = 1;
                TCARRED = 0;
                TCARYELLOW = 1;
                TCARGREEN = 0;
                TBUSRED = 0;
                TBUSYELLOW = 1;
                TBUSGREEN = 0;
                VWRed = 1;
                VWGreen = 0;
                TWRed = 1;
                TWGreen = 0;
            for(int count = 0; count<100;count++){
                wait(0.1);
            if(em == 1) {
                    state = 7;
                     //emergencylight = 1;
                    }
                    else state=3;
            }
        
                break;
                
                
            case 3:
            emergencylight=0; 
                VCARGREEN = 0;
                VCARYELLOW = 0;
                VCARRED = 1;
                BRTGREEN =0;
                BRTYELLOW = 0;
                BRTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTGREEN = 0;
                TCARRED = 0;
                TCARYELLOW = 0;
                TCARGREEN = 1;
                TBUSRED = 0;
                TBUSYELLOW = 0;
                TBUSGREEN = 1;
                VWRed = 0;
                VWGreen = 1;
                TWGreen = 0;
                TWRed = 1;
                for(int count = 0; count<100;count++){
                wait(0.1);
                 if(em == 1) {
                    state = 8;
                     //emergencylight = 1;
                    
                    }
                    else state=4;
        }
                break;
                
                
            case 4:
            emergencylight=0; 
                VCARGREEN = 0;
                VCARRED = 0;
                VCARYELLOW = 1;
                BRTGREEN =0;
                BRTRED = 0;
                BRTYELLOW = 1;
                RLEFTRED = 0;
                RLEFTYELLOW = 1;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 0;
                TCARYELLOW = 1;
                TBUSGREEN = 0;
                TBUSRED = 0;
                TBUSYELLOW = 1;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
            for(int count = 0; count<100;count++){
                 wait(0.1);
                 if(em == 1) {
                     //emergencylight = 1;
                    state = 9;
                    
                    }
                    else state=0;
            }
                break;
            
            case 5:
                // lights go yellow for a second
               
                VCARGREEN = 0;
                VCARRED = 0;
                VCARYELLOW = 1;
                BRTGREEN =0;
                BRTRED = 0;
                BRTYELLOW = 1;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(10);
                //all lights go red
                emergencylight = 1;
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(10);
                
                emergencylight = 0;
                em = 0;
                state = 0;
                
                break;
            
            case 6:
            
             // Green lights go yellow for a second and Red lights stay Red
             
                VCARGREEN = 0;
                VCARRED = 0;
                VCARYELLOW = 1;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 0;
                RLEFTYELLOW = 1;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(1);
                //all lights go red
                emergencylight = 1;
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(3);
                
                emergencylight = 0;
                em = 0;
                state = 1;
        
                break;
            
            case 7:
        emergencylight = 1;
                //all lights go red
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(10);
                
                emergencylight = 0;
                em = 0;
                state = 2;
        
                break;
            
            case 8:
            
             // Green lights go yellow for a second and Red lights stay Red
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 0;
                TCARYELLOW = 1;
                TBUSGREEN = 0;
                TBUSRED = 0;
                TBUSYELLOW = 1;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
                
                wait(10);
                //all lights go red
                emergencylight = 1;
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
               
                wait(10);
                
                emergencylight = 0;
                em = 0;
                state = 3;
        
                break;
            
            case 9:
            
                //all lights go red
                emergencylight = 1;
                VCARGREEN = 0;
                VCARRED = 1;
                VCARYELLOW = 0;
                BRTGREEN =0;
                BRTRED = 1;
                BRTYELLOW = 0;
                RLEFTRED = 1;
                RLEFTYELLOW = 0;
                RLEFTGREEN = 0;
                TCARGREEN = 0;
                TCARRED = 1;
                TCARYELLOW = 0;
                TBUSGREEN = 0;
                TBUSRED = 1;
                TBUSYELLOW = 0;
                VWGreen = 0;
                VWRed = 1;
                TWGreen = 0;
                TWRed = 1;
              
                wait(10);
                
                emergencylight = 0;
                em = 0;
                state = 4;
        
                break;
            } 
    
  
    
    }
}
