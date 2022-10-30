
#Print a day based on daynumber---Using Switch case 

int main() {
   int day;
    cin>>day;
    switch (day){
        case 1:
            cout<<"Monday";
                break;
        case 2:
            cout<<"Tuesday";
                break;   
        case 3:
            cout<<"Wednesday";
                break;                       
        case 4:
            cout<<"THRUSDAY";
                break;             
        case 5:
            cout<<"Friday";
                break;     
        case 6:
            cout<<"Saturday";
                break ;    
        case 7:
            cout<<"Sunday";
          default :
            cout<<"Deafault_Day" ;            
    }
    return 0;

}


# Write a programme to take a input from user if char is vovel print vovel either consonenet 

int main (){
    char cha;
    cin>>cha;
    if (cha=='a' || cha=='A'){
        cout<<"Vovel";
    }
    else if (cha=='e' || cha=='E'){
        cout<<"Vovel";
    }
    else if (cha=='i' || cha=='I'){
        cout<<"Vovel";
    }
    else if (cha=='o' || cha=='O'){
        cout<<"Vovel";
    }
    else if (cha=='u' || cha=='U'){
        cout<<"Vovel";
    }
    else {
        cout<<"Consnonet";
    }
}

