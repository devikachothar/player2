#iclude<iostream.h>
void main()
{
  char c[10];
  cin>>c;
  switch(c)
  {
      case "MONDAY": cout<<"WORKING DAY";
                     break;
      case "TUEDAY": cout<<"WORKING DAY";
                     break;
       case "WEDNESDAY": cout<<"WORKING DAY";
                     break;
      case "THURSDAY": cout<<"WORKING DAY";
                     break;
       case "FRIDAY": cout<<"WORKING DAY";
                     break;
     case "SATDAY": cout<<"HOLIDAY";
                     break;
      case "SUNDAY": cout<<"HOLIDAY";
                     break;    
       default: cout<"Wrong input";
                 break;
  }
}
