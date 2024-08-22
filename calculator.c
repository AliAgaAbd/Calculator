#include <stdio.h>
#include <conio.h>
#include <math.h>
#define m 3.1415926535897932384
#define TRUE -1
int main ()
    {
    float u,i,o,p,a,s,d,f,j,b,n,l,k,U,sum;
    int g,h,Y,y;
    //these are the (I==1)compenets 
    int K,L,I,q2,O,q9,q16;
    float P,A,S,D,F,G,H,J,Z,X,C,V,B,N,M,q1,q3,q4,q5,q6,q7,q8,q10,q11,q12,q13,q14,q15,q17,q18,q19,q20,q21,q22;
    //these are the (I==2)compenets
    int q23;
    float q24,q25,q26,q27,q28,q29,q30,q31,q32,q33;
    //these are the (I==3)compnents
    int q34;
    float q35,q36,q37,q38,q39,q40,q41,q42,q43,q44,q45,q46,q47,q48,q49;
    //these are the (I==5) compenents
    float q55,q56,q57,q58;
    //these are the (I==4) compenents
    float q51,q52,q53;
    //exit compenents
    int q50;
    
    printf("\n \t.............Hello!!..............\n");
    printf("\n \t .......Welcome to our calculator.......\n");
    while (TRUE)
        {
        printf("\n\t\tIf you want to unit conversation enter : 1\n\t\tIf you want to calculate area enter : 2\n\t\tIf you want to calculate volume enter : 3\n\t\tIf you want to calculate BMI enter : 4\n\t\tIf you want to 2ND degree equations program enter : 5\n\t\telse enter any number:\n");
        scanf("%d",&I);
        if (I==1)
            {
                printf("\n\tEnter your unit conversatoin:\n\t\tLength=1\n\t\tweight=2\n\t\tData=3\n\t\tArea=4\n\t\tVolume=5\n");
                scanf("%d",&O);
                if (O==1)
                    {
                        printf("\n\tEnter your unit conversation:\n\t\t1=M...to...Cm\n\t\t2=M...to...Mm\n\t\t3=Cm...to...Mm\n\t\t4=Mm...to...Cm\n\t\t5=Cm...to...M\n\t\t6=Mm...to...M\n\t\t7=M...to...Km\n\t\t8=Km...to...M\n");
                        scanf("%d",&K);
                        if (K==1)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&P);
                                printf("\n\tThe answer is:%f\n",(float)(P*100));
                            }
                        else if (K==2)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&A);
                                printf("\n\tThe answer is:%f\n",(float)(A*1000));
                            }
                        else if(K==3)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&S);
                                printf("\n\tThe answer is:%f\n",(float)(S*10));
                            }
                        else if(K==4)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&D);
                                printf("\n\tThe answer is:%f\n",(float)(D/10));
                            }
                        else if(K==5)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&F);
                                printf("\n\tThe answer is:%f",(float)(F/100));
                            }
                        else if(K==6)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&G);
                                printf("\n\tThe answer is:%f",(float)(G/1000));
                            }
                        else if(K==7)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&H);
                                printf("\n\tThe answer is:%f\n",(float)(H/100));
                            }
                        else if(K==8)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&J);
                                printf("\n\tThe answer is:%f\n",(float)(J*100));
                            }
                        else 
                            {
                                printf("Invalid!!");
                            }
                    }
                else if (O==2)
                    {
                        printf("\n\tEnter your unit conversation:\n\t\t1=g...to...Kg\n\t\t2=Kg...to...g\n\t\t3=g...to...soot\n\t\t4=soot...to...g\n\t\t5=ton...to...kg\n\t\t6=Kg...to...ton\n\t\t7=ton...to...g\n\t\t8=g...to...ton\n");
                        scanf("%d",&L);
                        if (L==1)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&Z);
                                printf("\n\tThe answer is:%f\n",(float)(Z/1000));
                            }
                        else if(L==2)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&X);
                                printf("\n\tThe answer is:%f\n",(float)(X*1000));
                            }
                        else if(L==3)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&C);
                                printf("\n\tThe answer is:%f\n",(float)(C*1000));
                            }
                        else if(L==4)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&V);
                                printf("\n\tThe answer is:%f\n",(float)(V/1000));
                            }
                        else if(L==5)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&B);
                                printf("\n\tThe answer is:%f\n",(float)(B*1000));
                            }
                        else if(L==6)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&N);
                                printf("\n\tThe answer is:%f\n",(float)(N/1000));
                            }
                        else if(L==7)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&M);
                                printf("\n\tThe answer is:%f\n",(float)(M*1000000));
                            }
                        else if(L==8)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q1);
                                printf("\n\tThe answer is:%f\n",(float)(q1/1000000));
                            }
                        else
                            {
                                printf("\n\tInvalid!!\n");
                            }
                    }

                else if (O==3)
                    {
                        printf("\n\t\tEnter your unit conversation:\n\t\t1=MB...to...B\n\t\t2=GB...to...MB\n\t\t3=MB...to...GB\n\t\t4=B...to...MB\n\t\t5=GB...to...B\n\t\t6=B...to...GB\n");
                        scanf("%d",&q2);
                        if (q2==1)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q3);
                                printf("\n\tThe answer is:%f\n",(float)(q3*1000000));
                            }
                        else if (q2==2)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q4);
                                printf("\n\tThe answer is:%f\n",(float)(q4*1000));
                            }
                        else if (q2==3)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q5);
                                printf("\n\tThe answer is:%f\n",(float)(q5/1000));
                            }
                        else if (q2==4)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q6);
                                printf("\n\tThe answer is:%f\n",(float)(q6/1000000));
                            }
                        else if (q2==5)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q7);
                                printf("\n\tThe answer is:%f\n",(float)(q7*1000000000));
                            }
                        else if (q2==6)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q8);
                                printf("\n\tThe answer is:%f\n",(float)(q8/1000000000));
                            }
                        else
                            {
                                printf("\n\tInvalid!!\n");
                            }
                    }
                else if (O==4)
                    {
                        printf("\n\tEnter your unit conversation:\n\t\tm2...to...cm2\\=1\n\t\tcm2...to...m2\\=2\n\t\tmm2...to...cm2\\=3\n\t\tcm2...to...mm2\\=4\n\t\tm2...to...mm2\\=5\n\t\tmm2...to...m2\\=6\n");
                        scanf("%d",&q9);
                        if (q9==1)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q10);
                                printf("\n\tThe answer is:%f\n",(float)(q10*10000));
                            }
                        else if (q9==2)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q11);
                                printf("\n\tThe answer is:%f\n",(float)(q11/10000));
                            }
                        else if (q9==3)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q12);
                                printf("\n\tThe answer is:%f\n",(float)(q12/100));
                            }
                        else if (q9==4)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q13);
                                printf("\n\tThe answer is:%f\n",(float)(q13*100));
                            }
                        else if (q9==5)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q14);
                                printf("\n\tThe answer is:%f\n",(float)(q14*1000000));
                            }
                        else if (q9==6)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q15);
                                printf("\n\tThe answer is:%f\n",(float)(q15/1000000));
                            }
                        else 
                            {
                                printf("\n\tInvalid!!\n");
                            }
                    }
                else if (O==5)
                    {
                        printf("\n\tEnter your unit conversatoin:\n\t\tm3...to...cm3\\=1\n\t\tcm3...to...m3\\=2\n\t\tcm3...to...mm3\\=3\n\t\tmm3...to...cm3\\=4\n\t\tm3...to...mm3\\=5\n\t\tmm3...to...m3\\=6\n");
                        scanf("%d",&q16);
                        if (q16==1)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q17);
                                printf("\n\tThe answer is:%f\n",(float)(q17*1000000));
                            }
                        else if (q16==2)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q18);
                                printf("\n\tThe answer is:%f\n",(float)(q18/1000000));
                            }
                        else if (q16==3)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q19);
                                printf("\n\tThe answer is:%f\n",(float)(q19*1000));
                            }
                        else if (q16==4)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q20);
                                printf("\n\tThe answer is:%f\n",(float)(q20/1000));
                            }
                        else if (q16==5)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q21);
                                printf("\n\tThe answer is:%f\n",(float)(q21*1000000000));
                            }
                        else if (q16==6)
                            {
                                printf("\n\tEnter your number:\n");
                                scanf("%f",&q22);
                                printf("\n\tThe answer is:%f\n",(float)(q22/1000000000));
                            }
                        else 
                            {
                                printf("\n\tInvalid!!\n");
                            }
                    }
                else
                    {
                        printf("\n\tInvalid!!\n");
                    }
            }
        else if (I==2)
            {
                printf("\n\tEnter your shape:\n\t\tsquare=1\n\t\trectangle=2\n\t\tcircle=3\n\t\ttriangle=4\n");
                scanf("%d",&q23);
                if (q23==1)
                    {
                        printf("\n\tEnter one of your squares face length in (cm)\n");
                        scanf("%f",&q24);
                        q25=q24*q24;
                        printf("\n\tArea of your square is:\n");
                        printf("\n\t\t%f cm2\n",(float)(q25));
                        printf("\n\t\t%f m2\n",(float)(q25/10000));
                        printf("\n\t\t%f mm2\n",(float)(q25*100));
                    }
                else if (q23==2)
                    {
                        printf("\n\tEnter your rectangles length and ordinate in (cm)\n");
                        scanf("%f",&q26);
                        scanf("%f",&q27);
                        q28=q27*q26;
                        printf("\n\tArea of your rectangle is:\n");
                        printf("\n\t\t%f cm2\n",(float)(q28));
                        printf("\n\t\t%f m2\n",(float)(q28/10000));
                        printf("\n\t\t%f mm2\n",(float)(q28*100));
                    }
                else if (q23==3)
                    {
                        printf("\n\tEnter your circles diameter in (cm):\n");
                        scanf("%f",&q29);
                        q30=(((q29/2)*(q29/2))*m);
                        printf("\n\tArea of your circle is:\n");
                        printf("\n\t\t%f cm2\n",(float)(q30));
                        printf("\n\t\t%f m2\n",(float)(q30/10000));
                        printf("\n\t\t%f mm2\n",(float)(q30*100));
                    }
                else if (q23==4)
                    {
                        printf("\n\tEnter your triangles base and height in (cm)\n");
                        printf("\n\tEnter your base:\n");
                        scanf("%f",&q31);
                        printf("\n\tNow,Enter your height:\n");
                        scanf("%f",&q32);
                        q33=((q32*q31)/2);
                        printf("\n\tArea of your triangle is:\n");
                        printf("\n\t\t%f cm2\n",(float)(q33));
                        printf("\n\t\t%f m2\n",(float)(q33/10000));
                        printf("\n\t\t%f mm2\n",(float)(q33*100));
                    }
                else    
                    {
                        printf("\n\tInvalid!!\n");
                    }
            }
        else if (I==3)
            {
                printf("\n\tEnter your volume shape:\n\t\tCube=1\n\t\tRectangular prism \\ cuboid=2\n\t\tBall=3\n\t\tCylinder=4\n\t\tPyramid=5\n");
                scanf("%d",&q34);
                if (q34==1)
                    {
                        printf("\n\tEnter one of your cubes face length in (cm)\n");
                        scanf("%f",&q35);
                        q36=q35*q35*q35;
                        printf("\n\tVolume of your cube is:\n");
                        printf("\n\t\t%f cm3\n",(float)(q36));
                        printf("\n\t\t%f m3\n",(float)(q36/1000000));
                        printf("\n\t\t%f mm3\n",(float)(q36*1000));
                    }
                else if (q34==2)
                    {
                        printf("\n\tEnter your cuboides height,length and ordinate in (cm)\n");
                        printf("\n\tEnter height:\n");
                        scanf("%f",&q37);
                        printf("\n\tEnter length:\n");
                        scanf("%f",&q38);
                        printf("\n\tEnter ordinate:\n");
                        scanf("%f",&q39);
                        q40=q37*q38*q39;
                        printf("\n\tVolume of your cuboides is:\n");
                        printf("\n\t\t%f cm3\n",(float)(q40));
                        printf("\n\t\t%f m3\n",(float)(q40/1000000));
                        printf("\n\t\t%f mm3",(float)(q40*1000));
                    }
                else if (q34==3)
                    {
                        printf("\n\t\tEnter your balls diameter in (cm)\n");
                        scanf("%f",&q41);
                        q42=(4/3)*m*((q41/2)*(q41/2)*(q41/2));
                        printf("\n\tVolume of your ball is:\n");
                        printf("\n\t\t%f cm3\n",(float)(q42));
                        printf("\n\t\t%f m3\n",(float)(q42/1000000));
                        printf("\n\t\t%f mm3\n",(float)(q42*1000));
                    }
                else if (q34==4)
                    {
                        printf("\n\tEnter your cylinderes height and diameter of base in (cm)\n");
                        printf("\n\tEnter height:\n");
                        scanf("%f",&q43);
                        printf("\n\tEnter diameter of base:\n");
                        scanf("%f",&q44);
                        q45=(m*((q44/2)*(q44/2))*q43);
                        printf("\n\tVolume of your cylinder is:\n");
                        printf("\n\t\t%f cm3\n",(float)(q45));
                        printf("\n\t\t%f m3\n",(float)(q45/1000000));
                        printf("\n\t\t%f mm3\n",(float)(q45*1000));
                    }
                else if (q34==5)
                    {
                        printf("\n\tEnter the height of your pyramids base,Enter the base of your pyramids base and enter the pyramids height in (cm)\n");
                        printf("\n\tEnter the height of your pyramids base:\n");
                        scanf("%f",&q46);
                        printf("\n\tenter the pyramids height:\n");
                        scanf("%f",&q47);
                        printf("\n\tEnter the base of your pyramids base:\n");
                        scanf("%f",&q48);
                        q49=((q46*q48)*q47);
                        printf("\n\tVolume of your pyramid is:\n");
                        printf("\n\t\t%f cm3\n",(float)(q49));
                        printf("\n\t\t%f m3\n",(float)(q49/1000000));
                        printf("\n\t\t%f mm3\n",(float)(q49*1000));
                    }
                else   
                    {
                        printf("\n\tInvalid!!\n");
                    }
            }
        else if (I==4)
            {
                printf("\n\tEnter your weight in (Kg):\n");
                scanf("%f",&q51);
                printf("\n\tEnter your height in (cm):\n");
                scanf("%f",&q52);
                q53=(q51/((q52/100)*(q52/100)));
                    if (q53 < 18.500000)
                        {
                            printf("\n\tYou have less weight than normal !\n");
                        }
                    else if (q53 >= 18.500000 && q53 < 25.000000)
                        {
                            printf("\n\tCongratulations !! You are in normal mode !\n");
                        }
                    else if (q53 >= 25.000000 && q53 < 30.000000 )
                        {
                            printf("\n\tYou have overweight !!\n");
                        }
                    else if (q53 >= 30.000000 && q53 < 35.000000)
                        {
                            printf("\n\tOH!You are meaty level 1 ! Be carefull !!!\n");
                        }
                    else if (q53 >= 35.000000 && q53 < 40.000000)
                        {
                            printf("\n\tOH!You are meaty level 2 ! Be carefull !!!!");
                        }
                    else if (q53 >= 40.000000)
                        {
                            printf("\n\tOH! danger ! You are meaty level 3 ! You must take action immediately !!!!!");
                        }
            }
        else if (I==5)
            {
                printf("\n\t2ND degree equations general face:aX%c + bX + c = 0\n",0xFD);
                printf("\n\tEnter the value of (a) in (aX%c + bX + c = 0)\n",0xFD);
                printf("\t\t\t\t   %c\n",0x5E);
                scanf("%f",&q55);
                if (q55==0)
                    {
                        printf("\n\tEnter the value of (b) in (bX + c = 0)\n");
                        printf("\t\t\t\t   %c\n",0x5E);
                        scanf("%f",&q56);
                        printf("\n\tEnter the value of (c) in (bX + c = 0)\n");
                        printf("\t\t\t\t        %c\n",0x5E);
                        scanf("%f",&q57);
                        if (q55==0)
                        {
                            printf("\n\tThe value of (X) in (bX + c = 0) is: %f\n",(float)((-1)*(q57/q56)));
                            printf("\t\t\t      %c\n",0x5E);
                        }
                    }
                else
                    {
                        printf("\n\tEnter the value of (b) in (aX%c + bX + c = 0)\n",0xFD);
                        printf("\t\t\t\t\t %c\n",0x5E);
                        scanf("%f",&q56);
                        printf("\n\tEnter the value of (c) in (aX%c + bX + c = 0)\n",0xFD);
                        printf("\t\t\t\t\t      %c\n",0x5E);
                        scanf("%f",&q57);
                        q58=((q56*q56)-(4*(q55*q57)));
                        if (q58 < 0)
                            {
                                printf("\n\tThe 2ND degree equation don't have real response.\n");
                            }
                        else if (q58 > 0)
                            {
                                printf("\n\tThe values of (X) in (aX%c + bX + c = 0) is\tX1 : %f       \\\\\\\\ \tX2 : %f\n",0xFD,(float)(((-1*q56)+(sqrt(q58)))/(2*q55)),(float)(((-1*q56)-(sqrt(q58)))/(2*q55)));
                                printf("\t\t\t       %c     %c\n",0x5E,0x5E);
                            }
                        else
                            {
                                printf("\n\tThe value of (X) in (aX%c + bX + c = 0) is: %f\n",0xFD,(float)((-1*q56)/(2*q55)));
                                printf("\t\t\t      %c     %c\n",0x5E,0x5E);
                            }
                    }
            }
        else 
            {
                printf("\n\tEnter your work:\n\n\n   1=+\t2=-\t3=*\t4=/\t5=Average\t6=sin(arc)\t7=cos(arc)\t8=tan(arc)\t9=pow\t10=Square\n");
                scanf("%d",&y); 
                    if (y==1)
                        {
                            printf("\n\tEnter your first and second number:\n");
                            scanf("%f",&u);
                            scanf("%f",&i);
                            printf("\n\tAnswer%f:\n",(float)(u+i));
                        }
                    else if (y==2)
                        {
                            printf("\n\tEnter your first and second number:\n");
                            scanf("%f",&o);
                            scanf("%f",&p);
                            printf("\n\tAnswer:%f\n",(float)(o-p));
                        }
                    else if (y==3)
                        {
                            printf("\n\tEnter your first and second number:\n");
                            scanf("%f",&a);
                            scanf("%f",&s);
                            printf("\n\tAnswer:%f\n",(float)(a*s));
                        }
                    else if (y==4)
                        {
                            printf("\n\tEnter your first and second number:\n");
                            scanf("%f",&d);
                            scanf("%f",&f);
                            printf("\n\tAnswer:%f\n",(float)(d/f));
                        }
                    else if (y==5)
                        {
                            printf("\n\tHow many numbers do you average?...if you enter -1 anywhere your pre-enterd numbers will average.\n");
                            scanf("%d",&g);
                            printf("\n\tEnter your numbers:\n");
                            for(h=0;h<g;h++)
                                {
                                    if (j==-1) break;
                                    scanf("%f",&j);
                                    sum=(float)sum+j;
                                }
                            printf("\n\tAnswer:%f\n",(float)(sum/h));
                        }
                    else if (y==6)
                        {
                            printf("\n\tEnter your arc:\n");
                            scanf("%f",&b);
                            printf("\n\tThe sin of your arc is:%f\n",(float)(sin((b*m)/180)));
                        }
                    else if (y==7)
                        {
                            printf("\n\tEnter your arc:\n");
                            scanf("%f",&n);
                            printf("\n\tThe cos of your arc is:%f\n",(float)(cos((n*m)/180)));
                        }
                    else if (y==8)
                        {
                            printf("\n\tEnter your arc:\n");
                            scanf("%f",&l);
                            printf("\n\tThe tan if your arc is:%f\n",(float)(tan((l*m)/180)));
                        }
                    else if (y==9)
                        {
                            printf("\n\tEnter your number and your POW after , string\n");
                            scanf("%f",&k);
                            printf("         ,          ");
                            scanf("%d",&Y);
                            printf("\n\tThe answer of youe pow is:%f\n",(float)(pow(k,Y)));
                        }
                    else if (y==10)
                        {
                            printf("\n\tEnter your number to print it's SQUARE\n");
                            scanf("%f",&U);
                            printf("\n\tThe square of your number is:%f\n",(float)(sqrt(U)));
                        }
                
            }
            printf("\n\tIf you want to continue enter 1 if you want to exit enter -1 \n");
            scanf("%d",&q50);
            if (q50==-1) break;
            if (q50==1) continue;
        }
        printf("\n......Thanks using our calculator!!......\n");
        printf("\n...........Be win..........Good bye......\t**See the new realeses at my gitHub : https://www.github.com/AliAgaAbd**\n");
        getch();return 0;
    }