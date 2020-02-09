/*
    ID: 2315232
    NAME: BERKANT TUGBERK DEMIRTAS */


#include<stdio.h>
#include<math.h>


int main(){

    int base,validBase; /* BASE VARIABLES */

    int ip_1,ip_2,ip_3,ip_4,validIP; /* BASE 10 IP VARIABLES*/

    /* Checks if base is valid or not */
    do {
        printf("Please enter the Base for your IP Address (10/16): ");
        scanf("%d",&base);

        if (base==10 || base==16){

            validBase=1;
        }
        else
            printf("Sorry that is not a valid base!\n");
            fflush(stdin);

    } while (validBase!=1);

    /* ------------------------------------------------------------------------------------------------ */
    /* CHECKS VALID IP IN 16 BASE */

    char ip_1a,ip_1b,ip_2a,ip_2b,ip_3a,ip_3b,ip_4a,ip_4b,point1,point2,point3,temporary; /* BASE 16 IP VARIABLES */

    int realip_1a,realip_2a,realip_3a,realip_4a; /*TO CONVERT BASE 16 TO 10 VARIABLES*/

    int counter,check=0,err; /* BASE 16 LOOP VAEIABLES, FOR GETTING INPUT AND ASSIGNMENT*/

    /* IF BASE IS 16 GET THE VALUES*/

    if (base == 16){
    do{
        counter=0;
        printf("Please enter the IP Address: ");

        /* GETS THE VALUES  */

        while(counter!=11){ // GETS VALUES USING BUFFER, EVERY VARIABLES ARE CHAR SO TOTALLY 11 INPUT //

            scanf(" %c",&temporary);

            if (temporary>=48 && temporary<=57) // IF CHAR IS A NUMBER CONVERT THEM TO INTEGER //
                check=temporary-'0';
            else if (temporary>=65 && temporary<=70) // IF CHAR IS A CHARACTER IN BASE 16 CONVERT THEM TO INTEGER //
                check=temporary - 55;
            else if (temporary=='.') // IF CHAR IS A "."
                check = temporary;
            else
                err=1; // ERROR CHECKER

            if (counter == 0)  // ASSIGNMENTS COMING FROM BUFFER//
                ip_1a=check;
            else if (counter == 1)
                ip_1b=check;
            else if (counter == 2)
                point1=check;
            else if (counter == 3)
                ip_2a=check;
            else if (counter == 4)
                ip_2b=check;
            else if (counter == 5)
                point2=check;
            else if (counter==6)
                ip_3a=check;
            else if (counter==7)
                ip_3b=check;
            else if (counter==8)
                point3=check;
            else if (counter==9)
                ip_4a=check;
            else if (counter==10){
                ip_4b = check;
            }
            counter ++;
        }

        /* CONVERTS THE BASE 16 TO BASE 10 */

    if (ip_1a==10 || ip_1a==11 || ip_1a==12 || ip_1a==13 || ip_1a==14 || ip_1a==15 )
            realip_1a = ip_1a * 16;
    else
        realip_1a = ip_1a*10;

    if (ip_2a==10 || ip_2a==11 || ip_2a==12 || ip_2a==13 || ip_2a==14 || ip_2a==15 )
            realip_2a = ip_2a * 16;
    else
        realip_2a = ip_2a*10;

    if (ip_3a==10 || ip_3a==11 || ip_3a==12 || ip_3a==13 || ip_3a==14 || ip_3a==15 )
            realip_3a = ip_3a * 16;
    else
        realip_3a = ip_3a*10;

    if (ip_4a==10 || ip_4a==11 || ip_4a==12 || ip_4a==13 || ip_4a==14 || ip_4a==15 )
            realip_4a = ip_4a * 16;
    else
        realip_4a = ip_4a*10;

    /* CHECKS THE IP */

    if ( err!=1 && realip_1a+ip_1b >=0 && realip_1a+ip_1b <=255 && point1 == '.' && realip_2a+ip_2b >=0 && realip_2a+ip_2b <=255 && point2 == '.' && realip_3a+ip_3b >=0 && realip_3a+ip_3b <=255 && point3 == '.' && realip_4a+ip_4b >=0 && realip_4a+ip_4b <=255 ){
        printf("\nThanks it is a valid IP address!\n");
        validIP =1;
    }
    else
        printf("\nThis is NOT a valid IP Address!\n");
        err=0; // FOR NOT INFINITE LOOP
        fflush(stdin);

    } while (validIP!=1);
    }

    /* ----------------------------------------------------------------------------------------------------------------------------------*/

    /* CHECKS VALID IP IN 10 BASE */

    else if (base == 10){

        do {
            printf("Please enter the IP Address:");
            scanf("%d.%d.%d.%d",&ip_1,&ip_2,&ip_3,&ip_4);

            if (ip_1<=255 && ip_1>=0  && ip_2<=255 && ip_2>=0  && ip_3<=255 && ip_3>=0 && ip_4<=255 && ip_4>=0  ){

                printf("\nThanks it is a valid IP address!\n");

                validIP=1;
            }
            else
                printf("\nThis is NOT a valid IP Address!\n");

                fflush(stdin);
        } while (validIP!=1);
    }
 /* ---------------------------------------------------------------------------------------------------------------------------*/

    /* SUBNET MASK BASE 10 */

int mask_1,mask_2,mask_3,mask_4,validMask10; /* FOR BASE 10 */
int realmask_1a,realmask_2a,realmask_3a,realmask_4a; /*FOR BASE 16 CONVERTING HEXA TO DEC */
char mask_1a,mask_1b,mask_2a,mask_2b,mask_3a,mask_3b,mask_4a,mask_4b,Maskpoint1,Maskpoint2,Maskpoint3,temporaryMask; // FOR GETTING INPUTS IN CHAR

int counterMask,checkMask=0,errMask; //FOR LOOPS
   if (base == 10){
        do {
            printf("Please enter the Subnet Mask:");
            scanf("%d.%d.%d.%d",&mask_1,&mask_2,&mask_3,&mask_4);

            if (mask_1<=255 && mask_1>=0  && mask_2<=255 && mask_2>=0  && mask_3<=255 && mask_3>=0 && mask_4<=255 && mask_4>=0  ){

                printf("\nThanks it is a valid Subnet Mask!\n");

                validMask10=1;
            }
            else
                printf("\nThis is NOT a valid Subnet Mask!\n");
                fflush(stdin);
        } while (validMask10!=1);
    }
 /* ------------------------------------------------------------------------------------------------------------- */

    /* Checks if subnet mask valid or not in base 16*/

    else if (base ==16){

    int maskValid;
     do{
        counterMask=0;

        printf("Please enter the Subnet Mask: ");

        /* GETS THE VALUES */

        while(counterMask!=11){

            scanf(" %c",&temporaryMask);

            if (temporaryMask>=48 && temporaryMask<=57) // IF CHAR IS A NUMBER CONVERT THEM TO INTEGER /
                checkMask=temporaryMask-'0';
            else if (temporaryMask>=65 && temporaryMask<=70) // IF CHAR IS A CHARACTER IN BASE 16 CONVERT THEM TO INTEGER //
                checkMask = temporaryMask - 55;

            else if (temporaryMask=='.') // IF CHAR IS A "."
                checkMask = temporaryMask;
            else
                errMask=1; // ERROR CHECKER


            if (counterMask == 0)
                mask_1a=checkMask;
            else if (counterMask == 1)
                mask_1b=checkMask;
            else if (counterMask == 2)
                Maskpoint1=temporaryMask;
            else if (counterMask == 3)
                mask_2a=checkMask;
            else if (counterMask == 4)
                mask_2b=checkMask;
            else if (counterMask == 5)
                Maskpoint2=temporaryMask;
            else if (counterMask==6)
                mask_3a=checkMask;
            else if (counterMask==7)
                mask_3b=checkMask;
            else if (counterMask==8)
                Maskpoint3=temporaryMask;
            else if (counterMask==9)
                mask_4a=checkMask;
            else if (counterMask==10)
                mask_4b = checkMask;

            counterMask ++;
        }

        /* CONVERTS THE BASE 16 TO BASE 10 */

    if (mask_1a==10 || mask_1a==11 || mask_1a==12 || mask_1a==13 || mask_1a==14 || mask_1a==15 )
            realmask_1a = mask_1a * 16;
    else
        realmask_1a = mask_1a*10;

    if (mask_2a==10 || mask_2a==11 || mask_2a==12 || mask_2a==13 || mask_2a==14 || mask_2a==15 )
            realmask_2a = mask_2a * 16;
    else
        realmask_2a = mask_2a*10;

    if (mask_3a==10 || mask_3a==11 || mask_3a==12 || mask_3a==13 || mask_3a==14 || mask_3a==15 )
            realmask_3a = mask_3a * 16;
    else
        realmask_3a = mask_3a*10;

    if (mask_4a==10 || mask_4a==11 || mask_4a==12 || mask_4a==13 || mask_4a==14 || mask_4a==15 )
            realmask_4a = mask_4a * 16;
    else
        realmask_4a = mask_4a*10;

    /* CHECKS THE MASK */

    if ( errMask!=1 && realmask_1a+mask_1b >=0 && realmask_1a+mask_1b <=255 && Maskpoint1 == '.' && realmask_2a+mask_2b >=0 && realmask_2a+mask_2b <=255 && Maskpoint2 == '.' && realmask_3a+mask_3b >=0 && realmask_3a+mask_3b <=255 && Maskpoint3 == '.' && realmask_4a+mask_4b >=0 && realmask_4a+mask_4b <=255 ){
         printf("\nThanks it is a valid Mask Net !\n");
        maskValid=1;
    }
    else
         printf("\nThis is NOT a valid Mask Net!\n");
         errMask=0; // FOR NOT INFINITE LOOP
         fflush(stdin);

    }while (maskValid!=1);
    }

    /* MENU BEGINS HERE */

    int menu;

    while (menu!=6){

        printf("\n1. Convert IP address to binary\n2. Convert subnet mask to binary\n3. Specify the class of the IP address\n4. Specify the number of host addresses available\n5. Provide new IP Address and subnet mask\n");
        printf("6. Exit\n");
        scanf("%d",&menu);

    switch(menu){

        /* IP TO BINARY */

        int i,realip_1,realip_2,realip_3,realip_4,tempip_1,tempip_2,tempip_3,tempip_4; /* For Bınary IP's in base 10*/;
        int hexamask1,hexamask2,hexamask3,hexamask4; /* For Binary Subnet Mask's in base 16 */
        int hexatempmask1,hexatempmask2,hexatempmask3,hexatempmask4; /* For Binary Subnet Mask's in base 16 */
        int hexaip1,hexaip2,hexaip3,hexaip4; /* For Bınary IP's in base 16*/
        int hexatempip1,hexatempip2,hexatempip3,hexatempip4;/* For Bınary IP's in base 16, HOLDS THE VALUE OF 2 CHAR */
        int realsub_1,realsub_2,realsub_3,realsub_4,tempsub_1,tempsub_2,tempsub_3,tempsub_4;/* For Binary Subnet Mask's in base 10 */

    case 1:
        printf("\nBinary representation of IP Address:\n");

         /* CONVERTING TO BINARY */
        tempip_1=ip_1;
        tempip_2=ip_2;
        tempip_3=ip_3;
        tempip_4=ip_4;

        if (base == 10){
            /* FOR FIRST BASE10 IP */
         for (i=128 ; i!=0 ; i/=2){
                realip_1 = tempip_1 / i;

                if (realip_1==1)
                    tempip_1-=i;

                printf("%d",realip_1);
            }
            printf(".");
         /* FOR SECOND BASE10 IP */
        for (i=128 ; i!=0 ; i/=2){
                realip_2 = tempip_2 / i;

                if (realip_2==1)
                    tempip_2-=i;

                printf("%d",realip_2);
            }
            printf(".");
         /* FOR THIRD BASE10 IP */
        for (i=128 ; i!=0 ; i/=2){
                realip_3 = tempip_3 / i;

                if (realip_3==1)
                    tempip_3-=i;

                printf("%d",realip_3);
            }

            printf(".");
         /* FOR FOURTH BASE10 IP */
        for (i=128 ; i!=0 ; i/=2){
                realip_4 = tempip_4 / i;

                if (realip_4==1)
                    tempip_4-=i;

                printf("%d",realip_4);
            }
            printf("\n");
        }

        else{
         /* FOR FIRST HEXAIP */
            hexatempip1= (realip_1a+ip_1b);
             for (i=128 ; i!=0 ; i/=2){
                hexaip1 = hexatempip1 / i;

                if (hexaip1==1)
                    hexatempip1-=i;

                printf("%d",hexaip1);
            }
            printf(".");
        /* FOR SECOND HEXAIP */
            hexatempip2= (realip_2a+ip_2b);
             for (i=128 ; i!=0 ; i/=2){
                hexaip2 = hexatempip2 / i;

                if (hexaip2==1)
                    hexatempip2-=i;

                printf("%d",hexaip2);
            }
            printf(".");
        /* FOR THIRD HEXAIP */
            hexatempip3= (realip_3a+ip_3b);
             for (i=128 ; i!=0 ; i/=2){
                hexaip3= hexatempip3 / i;

                if (hexaip3==1)
                    hexatempip3-=i;

                printf("%d",hexaip3);
            }
            printf(".");
        /* FOR FOURTH HEXAIP */
            hexatempip4= (realip_4a+ip_4b);
             for (i=128 ; i!=0 ; i/=2){
                hexaip4 = hexatempip4 / i;

                if (hexaip4==1)
                    hexatempip4-=i;

                printf("%d",hexaip4);
            }
        }
       continue;
/*---------------------------------------------------------------------------------------------------------------------*/
    case 2:
        /*BINARY CONVERTION FOR SUBNET */
        printf("\nBinary representation of Subnet Mask is :\n");

        tempsub_1=mask_1;
        tempsub_2=mask_2;
        tempsub_3=mask_3;
        tempsub_4=mask_4;

        if (base==10){
            /* FOR FIRST SUBNET MASK */
            for (i=128; i>0; i/=2){

                 realsub_1=tempsub_1/i;

                if (realsub_1==1){
                tempsub_1-=i;
            }
                printf("%d", realsub_1);
        }
        printf(".");
     /* FOR SECOND SUBNET MASK */
        for (i=128; i>0; i/=2){
                 realsub_2=tempsub_2/i;

                if (realsub_2==1){
                tempsub_2-=i;
            }

                printf("%d", realsub_2);
        }
        printf(".");
     /* FOR THIRD SUBNET MASK */
        for (i=128; i>0; i/=2){
                 realsub_3=tempsub_3/i;
                if (realsub_3==1){
                tempsub_3-=i;
            }
                printf("%d", realsub_3);
        }
        printf(".");
     /* FOR FOURTH SUBNET MASK */
         for (i=128; i>0; i/=2){
                 realsub_4=tempsub_4/i;

                if (realsub_4==1){
               tempsub_4-=i;
            }
                printf("%d", realsub_4);
        }
        }

        else {
            /* FOR FIRST SUBNET MASK */
            hexatempmask1= (realmask_1a+mask_1b);
             for (i=128 ; i!=0 ; i/=2){
                hexamask1 = hexatempmask1 / i;

                if (hexamask1==1)
                    hexatempmask1-=i;

                printf("%d",hexamask1);
            }
            printf(".");
        /* FOR SECOND SUBNET MASK */
            hexatempmask2= (realmask_2a+mask_2b);
             for (i=128 ; i!=0 ; i/=2){
                hexamask2 = hexatempmask2 / i;

                if (hexamask2==1)
                    hexatempmask2-=i;

                printf("%d",hexamask2);
            }
            printf(".");
        /* FOR THIRD SUBNET MASK */
            hexatempmask3= (realmask_3a+mask_3b);
             for (i=128 ; i!=0 ; i/=2){
                hexamask3= hexatempmask3 / i;

                if (hexamask3==1)
                    hexatempmask3-=i;

                printf("%d",hexamask3);
            }
            printf(".");
        /* FOR FOURTH SUBNET MASK */
            hexatempmask4= (realmask_4a+mask_4b);
             for (i=128 ; i!=0 ; i/=2){
                hexamask4 = hexatempmask4 / i;

                if (hexamask4==1)
                    hexatempmask4-=i;

                printf("%d",hexamask4);
            }
            printf("\n");
        }

        continue;
/* ------------------------------------------------------------------------------------------------------------------------------ */
    case 3:

    /* FOR CLASS */

        if (base==16){
            hexatempip1= (realip_1a+ip_1b);
           if (hexatempip1>=0 && hexatempip1<=127)
                printf("The class of the given IP Address is: A");
           else if (hexatempip1>=128 && hexatempip1<=191)
                printf("The class of the given IP Address is: B");
           else if (hexatempip1>=192 && hexatempip1<=223)
                printf("The class of the given IP Address is: C");
           else
                printf("The class of the given IP Address is: D");
        }
        else{
            if (ip_1>=0 && ip_1<=127)
                printf("The class of the given IP Address is: A");
           else if (ip_1>=128 && ip_1<=191)
                printf("The class of the given IP Address is: B");
           else if (ip_1>=192 && ip_1<=223)
                printf("The class of the given IP Address is: C");
           else
                printf("The class of the given IP Address is: D");
        }
        continue;
/*------------------------------------------------------------------------------------------------------------------------------*/
int checker,host,count=0; /* VARIABLES FOR HOST */
    case 4:
        /*HOST ADDRESSES*/
        if (base == 16){

            hexatempmask4= (realmask_4a+mask_4b);
             for (i=128 ; i!=0 ; i/=2){
                hexamask4 = hexatempmask4 / i;

                if (hexamask4==1){
                    hexatempmask4-=i;
                    count=0;
                }

                if (hexamask4==0)
                    count+=1;
            }
            host= pow(2,count)-2;
            printf("\nThe number of available host addresses for the given Subnet Mask: %d \n",host);
        }
        else{
            for (i=128; i>0; i/=2){
                 realsub_4=mask_4/i;

                if (realsub_4==1){
                mask_4-=i;
                count=0;
            }
                else
                    count+=1;
        }
            host= pow(2,count)-2;

            printf("\nThe number of available host addresses for the given Subnet Mask: %d \n",host);
    }
        continue;
/* ------------------------------------------------------------------------------------------------------------------------------------*/
    case 5:
        if (base == 16){

    do{
        counter=0;
        validIP=0;
        printf("Please enter the IP Address: ");

        /* GETS THE VALUES  */

        while(counter!=11){ // GETS VALUES USING BUFFER, EVERY VARIABLES ARE CHAR SO TOTALLY 11 INPUT //

            scanf(" %c",&temporary);

            if (temporary>=48 && temporary<=57) // IF CHAR IS A NUMBER CONVERT THEM TO INTEGER //
                check=temporary-'0';
            else if (temporary>=65 && temporary<=70) // IF CHAR IS A CHARACTER IN BASE 16 CONVERT THEM TO INTEGER //
                check=temporary - 55;
            else if (temporary=='.') // IF CHAR IS A "."
                check = temporary;
            else
                err=1; // ERROR CHECKER

            if (counter == 0)  // ASSIGNMENTS COMING FROM BUFFER//
                ip_1a=check;
            else if (counter == 1)
                ip_1b=check;
            else if (counter == 2)
                point1=check;
            else if (counter == 3)
                ip_2a=check;
            else if (counter == 4)
                ip_2b=check;
            else if (counter == 5)
                point2=check;
            else if (counter==6)
                ip_3a=check;
            else if (counter==7)
                ip_3b=check;
            else if (counter==8)
                point3=check;
            else if (counter==9)
                ip_4a=check;
            else if (counter==10){
                ip_4b = check;
            }
            counter ++;
        }

        /* CONVERTS THE BASE 16 TO BASE 10 */

    if (ip_1a==10 || ip_1a==11 || ip_1a==12 || ip_1a==13 || ip_1a==14 || ip_1a==15 )
            realip_1a = ip_1a * 16;
    else
        realip_1a = ip_1a*10;

    if (ip_2a==10 || ip_2a==11 || ip_2a==12 || ip_2a==13 || ip_2a==14 || ip_2a==15 )
            realip_2a = ip_2a * 16;
    else
        realip_2a = ip_2a*10;

    if (ip_3a==10 || ip_3a==11 || ip_3a==12 || ip_3a==13 || ip_3a==14 || ip_3a==15 )
            realip_3a = ip_3a * 16;
    else
        realip_3a = ip_3a*10;

    if (ip_4a==10 || ip_4a==11 || ip_4a==12 || ip_4a==13 || ip_4a==14 || ip_4a==15 )
            realip_4a = ip_4a * 16;
    else
        realip_4a = ip_4a*10;

    /* CHECKS THE IP */

    if ( err!=1 && realip_1a+ip_1b >=0 && realip_1a+ip_1b <=255 && point1 == '.' && realip_2a+ip_2b >=0 && realip_2a+ip_2b <=255 && point2 == '.' && realip_3a+ip_3b >=0 && realip_3a+ip_3b <=255 && point3 == '.' && realip_4a+ip_4b >=0 && realip_4a+ip_4b <=255 ){
        printf("\nThanks it is a valid IP address!\n");
        validIP =1;
    }
    else
        printf("\nThis is NOT a valid IP Address!\n");
        err=0; // FOR NOT INFINITE LOOP

    } while (validIP!=1);
    }

    /* CHECKS VALID IP IN 10 BASE */

    else if (base == 10){
            validIP=0;
        do {
            printf("Please enter the IP Address:");
            scanf("%d.%d.%d.%d",&ip_1,&ip_2,&ip_3,&ip_4);

            if (ip_1<=255 && ip_1>=0  && ip_2<=255 && ip_2>=0  && ip_3<=255 && ip_3>=0 && ip_4<=255 && ip_4>=0  ){

                printf("\nThanks it is a valid IP address!\n");

                validIP=1;
            }
            else
                printf("\nThis is NOT a valid IP Address!\n");
                fflush(stdin);
        } while (validIP!=1);
    }

   if (base == 10){
        validMask10=0;
        do {
            printf("Please enter the Subnet Mask:");
            scanf("%d.%d.%d.%d",&mask_1,&mask_2,&mask_3,&mask_4);

            if (mask_1<=255 && mask_1>=0  && mask_2<=255 && mask_2>=0  && mask_3<=255 && mask_3>=0 && mask_4<=255 && mask_4>=0  ){

                printf("\nThanks it is a valid Subnet Mask!\n");

                validMask10=1;
            }
            else
                printf("\nThis is NOT a valid Subnet Mask!\n");
                fflush(stdin);
        } while (validMask10!=1);
    }

    /* Checks if subnet mask valid or not in base 16*/

    else if (base ==16){

    int maskValid=0;
     do{
        counterMask=0;

        printf("Please enter the Subnet Mask: ");

        /* GETS THE VALUES */

        while(counterMask!=11){

            scanf(" %c",&temporaryMask);

            if (temporaryMask>=48 && temporaryMask<=57) // IF CHAR IS A NUMBER CONVERT THEM TO INTEGER /
                checkMask=temporaryMask-'0';
            else if (temporaryMask>=65 && temporaryMask<=70) // IF CHAR IS A CHARACTER IN BASE 16 CONVERT THEM TO INTEGER //
                checkMask = temporaryMask - 55;

            else if (temporaryMask=='.') // IF CHAR IS A "."
                checkMask = temporaryMask;
            else
                errMask=1; // ERROR CHECKER


            if (counterMask == 0)
                mask_1a=checkMask;
            else if (counterMask == 1)
                mask_1b=checkMask;
            else if (counterMask == 2)
                Maskpoint1=temporaryMask;
            else if (counterMask == 3)
                mask_2a=checkMask;
            else if (counterMask == 4)
                mask_2b=checkMask;
            else if (counterMask == 5)
                Maskpoint2=temporaryMask;
            else if (counterMask==6)
                mask_3a=checkMask;
            else if (counterMask==7)
                mask_3b=checkMask;
            else if (counterMask==8)
                Maskpoint3=temporaryMask;
            else if (counterMask==9)
                mask_4a=checkMask;
            else if (counterMask==10)
                mask_4b = checkMask;

            counterMask ++;
        }

        /* CONVERTS THE BASE 16 TO BASE 10 */

    if (mask_1a==10 || mask_1a==11 || mask_1a==12 || mask_1a==13 || mask_1a==14 || mask_1a==15 )
            realmask_1a = mask_1a * 16;
    else
        realmask_1a = mask_1a*10;

    if (mask_2a==10 || mask_2a==11 || mask_2a==12 || mask_2a==13 || mask_2a==14 || mask_2a==15 )
            realmask_2a = mask_2a * 16;
    else
        realmask_2a = mask_2a*10;

    if (mask_3a==10 || mask_3a==11 || mask_3a==12 || mask_3a==13 || mask_3a==14 || mask_3a==15 )
            realmask_3a = mask_3a * 16;
    else
        realmask_3a = mask_3a*10;

    if (mask_4a==10 || mask_4a==11 || mask_4a==12 || mask_4a==13 || mask_4a==14 || mask_4a==15 )
            realmask_4a = mask_4a * 16;
    else
        realmask_4a = mask_4a*10;

    /* CHECKS THE MASK */

    if ( errMask!=1 && realmask_1a+mask_1b >=0 && realmask_1a+mask_1b <=255 && Maskpoint1 == '.' && realmask_2a+mask_2b >=0 && realmask_2a+mask_2b <=255 && Maskpoint2 == '.' && realmask_3a+mask_3b >=0 && realmask_3a+mask_3b <=255 && Maskpoint3 == '.' && realmask_4a+mask_4b >=0 && realmask_4a+mask_4b <=255 ){
         printf("\nThanks it is a valid Mask Net !\n");
        maskValid=1;
    }
    else
         printf("\nThis is NOT a valid Mask Net!\n");
         errMask=0; // FOR NOT INFINITE LOOP
         fflush(stdin);

    }while (maskValid!=1);
    }

    default:
        printf("\nPlease try again.\n");

    }
    }

    return 0;
}
