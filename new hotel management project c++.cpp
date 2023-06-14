#include<iostream>
using namespace std;

int main(){
	int quant;
	int choice;
	 
	//quantity of food items and room
    int qrooms=0 , qpasta=0 , qshakes=0, qnoodles=0 ,qburgur=0,  qchicken=0;
    
    //how many room or food items has been sold
    int srooms=0 , spasta=0 , sshakes=0 , snoodles=0 ,sburgur=0 ,schicken=0;
    
    //the price of room and each food items 
    int  total_room=0 , total_pasta=0 , total_shakes=0 , total_noodles=0 , total_burgur=0 , total_chicken=0;
    
    
	cout<<"\n\t quantity of item we have";
    cout<<"\n rooms available:";
    cin>>qrooms;
    cout<<"\n quantity of pasta :";
    cin>>qpasta;
    cout<<"\n quantity of shakes: ";
    cin>>qshakes;
    cout<<"\n quantites of noodles:  ";
    cin>>qnoodles;
    cout<<"\n quantity ogf burgur: ";
    cin>>qburgur;
    cout<<"\n quantity of chicken:  ";
    cin>>qchicken;
    
    m:
    cout<<"\n\t\t\t please selct from the menu";
    cout<<"\n\n1) rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) shakes";
    cout<<"\n4) noodles";
    cout<<"\n5) burgur";
    cout<<"\n6) chicken";
    cout<<"\n7) information regarding sales";
    cout<<"\n8) exit";
    
    cout<<"\n\n please enter your choice ";
    cin>>choice;
    
    switch(choice)
    {
    	case1:
    		cout<<"\n\t enter the number of room you want";
    		cin>>quant;
    		if(qrooms-srooms >=quant)
    		{
    			srooms=srooms+quant;
    			total_room= total_room+quant*1200;
    			cout<<"\n\n\t\t"<<quant<<"room/rooms that have been alloted to you";
    			
			}
    		 else
    		     cout<<"\n\tonly"<<qrooms-srooms<<"room remaining in hotel";
    		     break;
    		    
    		
        case2:
    		cout<<"\n\t enter the number of pasta want";
    		cin>>quant;
        	if(qpasta-spasta>=quant)
    		{
    			spasta=spasta+quant;
    			total_pasta=total_pasta+quant*700;
    			cout<<"\n\n\t\t"<<quant<<"pasta is the order!";	
    			
			}
             else
			    cout<<"\n\tonly"<<qpasta-spasta<<"pasta remaining in hotel";
    		    break;
		     
				 
		case3:
    		cout<<"\n\t enter the number of shakes want";
    		cin>>quant;
    		if(qshakes-sshakes>=quant)
    		{
    			sshakes=sshakes+quant;
    			total_shakes=total_shakes+quant*70;
    			cout<<"\n\n\t\t"<<quant<<"shakes is the order";
    			
			}
    		 else
    		     cout<<"\n\tonly"<<qshakes-sshakes<<"rooms remaining in hotel";
    		     break;
				 
		case4:
    		cout<<"\n\t enter the number of noodles you want";
    		cin>>quant;
    		if(qnoodles-snoodles>=quant)
    		{
    			snoodles=snoodles+quant;
    			total_noodles=total_noodles+quant*100;
    			cout<<"\n\n\t\t"<<quant<<"noodles is the order";
    			
			}
    		 else
    		     cout<<"\n\tonly"<<qnoodles-snoodles<<"noodles remaining in hotel";
    		     break;
				 
				 
		case5:
    		cout<<"\n\t enter the number of bugur you want";
    		cin>>quant;
    		if(qburgur-sburgur<=quant)
    		{
    			sburgur=sburgur+quant;
    			total_burgur=total_burgur+quant*90;
    			cout<<"\n\n\t\t"<<quant<<"burgur is the order";
    			
			}
    		 else
    		     cout<<"\n\tonly"<<qburgur-sburgur<<"burgur remaining in hotel";
    		     break;
				 
				 
		case6:
    		cout<<"\n\t enter the number of chicken you want";
    		cin>>quant;
    		if(qchicken-schicken<=quant)
    		{
    			schicken=schicken+quant;
    			total_chicken=total_chicken+quant*200;
    			cout<<"\n\n\t\t"<<quant<<"chicken is the order";
    			
			}
    		 else
    		     cout<<"\n\tonly"<<qchicken-schicken<<"chicken remaining in hotel";
    		     break;
				 
    		     
    	case7:
    		cout<<"\n\t\tdetail of sails and collection";
    		cout<<"\n\n number of rooms we had:"<<qrooms;
    		cout<<"\n\nnumber of rooms that we give on rent:"<<srooms;
    		cout<<"remaining room we had in our hotel:"<<qrooms-srooms;
    		cout<<"\n\ntotal rooms collection for the day :"<<total_room;
    	
	        cout<<"\n\n number of pasta we had:"<<qpasta;
    		cout<<"\n\nnumber of pasta that we sold:"<<spasta;
    		cout<<"remaining pasta we had in our hotel:"<<qpasta-spasta;
    		cout<<"\n\ntotal pasta collection for the day :"<<total_pasta;
    	
    		cout<<"\n\n number of shakes we had:"<<qshakes;
    		cout<<"\n\nnumber of shakes that we sold:"<<sshakes;
    		cout<<"remaining shakes we had in our hotel:"<<qshakes-sshakes;
    		cout<<"\n\ntotal shakes collection for the day :"<<total_shakes;
    		
    		cout<<"\n\n number of noodles we had:"<<qnoodles;
    		cout<<"\n\nnumber of noodles that we sold:"<<snoodles;
    		cout<<"remaining noodles we had in our hotel:"<<qnoodles-snoodles;
    		cout<<"\n\ntotal noodles collection for the day :"<<total_noodles;
    	
    		cout<<"\n\n number of burger we had:"<<qburgur;
    		cout<<"\n\nnumber of burger that we sold:"<<sburgur;
    		cout<<"remaining burger we had in our hotel:"<<qburgur-sburgur;
    		cout<<"\n\ntotal burger collection for the day :"<<total_burgur;
    	
    		cout<<"\n\n number of chicken roll we had:"<<qchicken;
    		cout<<"\n\nnumber of chicken roll that we sold:"<<schicken;
    		cout<<"remaining chicken roll we had in our hotel:"<<qchicken-schicken;
    		cout<<"\n\ntotal chicken roll collection for the day :"<<total_chicken;
    		
    	case8:
    		exit(0);
    		
    		 default:
    			cout<<"\nplaese select the number mention above";
    			
    }
    goto m;
    
}
