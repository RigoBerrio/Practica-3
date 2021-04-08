#include <iostream>

using namespace std;

int main()
{
   // float pi=0;
    //unsigned short n;
    //long long int mul;
    //short a;
    //bool band=true, band2=true;
    int A, B, N, n;

    cout << "¿Qué ejercicio quieres ver (de 1 - 30)?" << endl;
    int caso;
    cin>>caso;
    switch(caso) {

    case 1:
    {
        cout <<"Ingrese dos numeros: " << endl;
        cin >>A>>B;

        cout <<"El residuo de la división entre "<<A<<" y "<<B<<" es "<<A%B<< endl;

    break;
    }


    case 2:
    {
        cout << "ingrese un numero:";
        cin >> N;

        if (N%2==0)
            cout << "el numero es par ";
        else
            cout <<"el numero es impar" << endl;


    break;
    }


    case 3:
     /*Programa que pide dos números A y B e imprime en pantalla el mayor*/
    {
        cout <<"Ingrese números: " << endl;
        cin>>A>>B;
        if (A>B)
            cout<<A<<" es mayor que "<<B<<endl;
        else if(A<B)
            cout<<B<<" es mayor que "<<A<<endl;
        else
            cout<<"Ingrese dos números diferentes"<<endl;

        break;
    }


    case 4:
    {
        cout << "ingrese dos numero A/B ";
        cin >> A>> B;

        if (A>B)
            cout<<"es mayor "<<A<<" que "<< B<<endl;
        else if (B>A)
            cout<<"es mayor " <<B<< " que " <<A<<endl;



        break;
    }


    case 5:
    /*Programa que pide dos números A y B e imprime en la pantalla la división A/B con redondeo*/
    {
        float A,B, Division;
        int Division1;
        cout << "Ingrese dos números: " << endl;
        cin>>A>>B;

        Division=A/B;
        Division1=10*Division;

        if ((Division1%10)==0)
            Division1=Division;
        else if((Division1%10)>=5)
            Division1=(Division/10)+1;
        else if((Division1%10)<5)
            Division1=(Division1/10);

        cout<<"La division de "<<A<<"/"<<B<<" con redondeo es: "<<Division1<<endl;

        break;
    }


    case 6:
    {
        cout << "ingrese un numero:";
        cin >> N;

        if (N%2==0)
            cout << "el numero es par ";
        else
            cout <<"el numero es impar" << endl;


        break;
    }



    case 7:
        /*Programa que pide un número N e imprime en pantalla la suma de todos los números entre 0 y N (incluyendo el mismo)*/
    {
        int Suma=0;
        cout << "Ingrese número "<<endl;
        cin>>N;

        for(int i=N; i>0; i--)
        {
            Suma=Suma+i;
        }

        cout<<"La suma de todos los números entre 0 y "<<N<<" es "<<Suma<<endl;


        break;
    }


    case 8:
    {
        int factorial=1;
        cout << "Ingrese numero " << endl;
        cin>>N;

        for(int i=N;i>0;i--){
            factorial=factorial*i;
        }

        cout<<"El factorial de "<<N<<" es "<<factorial<<endl;

            break;
}


    case 9:
        /*Programa que pide un número N e imprime el perímetro y área de un círculo con radio N.
         * Nota: use 3.1416 como una aproximación de pi*/
    {
        float Perimetro, Area, PI=3.1416;
        cin>>n;

        Perimetro=2*PI*n;
        Area=PI*n*n;

        cout<<"Un circulo de radio "<<n<<" tiene un perimetro de "<<Perimetro<<" unidades y un area de "<<Area<<" unidades cuadradas"<<endl;


        break;
    }


    case 10:
        /*Programa que pide un número N e imprime en pantalla todos los múltiplos de dicho número entre 1 y 100*/
    {
        int multiplo;
        cout<< "Ingrese un número "<<endl;
        cin>>n;

        cout<<"Multiplos de "<<n<<" menores que 100"<<endl;

        for(int i=1; i>0; i++){
            multiplo= n*i;

            if(multiplo>=100){
                break;
            }
            cout<<multiplo<<endl;
        }

        break;
    }


    case 11:
        /*Programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN*/
    {
        int multiplo;
        cout<<" Ingrese un número "<<endl;
        cin>>N;

        for(int i=1; i<=10; i++){
            multiplo=N*i;
            cout<<"x"<<N<<"= "<<multiplo<< endl;
        }

        break;
    }


      case 12:
        /*Escriba un programa que pida un número N e imprima todas las potencias desde N1 hasta N5*/
    {
        int Potencia, i;
        cout<<" Ingrese un número: "<<endl;
        cin>>n;

        for(i=1; i<=5; i++){
            Potencia=1;
            for(int j=i; j>0; j--){
                Potencia=Potencia*n;
            }
            cout<<n<<" elevado a la "<<i<<" es igual a "<<Potencia<<endl;

        }

        break;
    }


    case 13:
        /*Programa que pide un número N e imprime todos los divisores de N*/
    {
        cout << "Ingrese un número: "<< endl;
        cin>>n;
        cout<<" Los divisores de "<<n<<" son: "<<endl;

        for(int i=1; i<=n; i++){
            if(n%i==0){
                cout<<i<<endl;
            }
        }

        break;
    }


    case 14:
        /*Programa que imprime dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1*/
    {
        for(int i=1, j=0; i&&j<50; j++, i++){
            cout<<i<<"                                                "<<50-j<<endl;
        }

        break;
    }


    case 15:
    /*Escriba un programa que pida constantemente números hasta que se ingrese
     el número cero e imprima en pantalla la suma de todos los números ingresados.
    */
    {
        int n=1, Suma=0;
        while(n!=0){
            cout<<" Ingrese números y cero para ver la sumatoria"<<endl;
            cin>>n;
            Suma=Suma+n;
        }
        cout<<" El resultado de la sumatoria es "<<Suma<<endl;

        break;
    }


    case 16:
        /*Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima
          en pantalla el promedio de los números ingresados (excluyendo el cero)*/
    {
        int n=1,Suma=0, i=0;
        while(n!=0){
            cout<<" Ingrese números y cero para ver el promedio "<<endl;
            cin>>n;
            if(n!=0){
                Suma=Suma+n;
                i++;
            }
        }
        float promedio=Suma/i;
        cout<<" El promedio es "<<promedio<<endl;

        break;
    }


    case 17:
        /*Escriba un programa que pida constantemente números hasta que se ingrese el número cero e
          imprima en pantalla el mayor de todos los números ingresados */
    {
        int n=1, mayor=0;
        while(n!=0){
            cout<<"Ingrese números y cero para ver el número mayor ingresado "<<endl;
            cin>>n;
            if(n!=0){
                if(n>mayor)
                    mayor=n;
            }
        }

        cout<<" El número mayor ingresado fue "<<mayor<<endl;


        break;
    }


    case 18:
        /*Programa que pide un número N e imprime si es o no un cuadrado perfecto */
    {
        int i;
        cout<<" Ingrese un número: "<<endl;
        cin>>n;

        for(i=n/2; i>0; i--){
            if(i*i==n){
                cout<<n<<" es un cuadrado perfecto"<<endl;
                break;
            }
        }
        if(i==0)
            cout<<n<<" no es un cuadrado perfecto"<<endl;

        break;
    }


    case 19:
        /*Programa que pide un número N e imprime si es o no un número primo */
    {
        int k=0;
        cout<<" Ingrese un número: "<<endl;
        cin>>n;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                k++;
            }
        }

        if(k==2)
            cout<<n<<" es un número primo"<<endl;
        else
            cout<<n<<" no es un número primo"<<endl;

        break;
    }


    case 20:
        /*Programa que pide un número N e imprime si es o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha)*/
    {
        int num, num1, residuo=0, palin=0;
        cout<<" Ingrese un número: "<<endl;
        cin>>num;

        num1=num;

        while(num1!=0){
            residuo=num1%10;
            palin=palin+residuo;
            num1=num1/10;
            if(num1==0)
                break;
            palin=palin*10;
        }

        if(num==palin)
            cout<<num<<" es un número palindromo"<<endl;

        else
            cout<<num<<" no es un número palindromo"<<endl;


        break;
    }


    case 21:
        /*Programa que pide un carácter C, si es una letra la convierte de mayúscula a minúscula y viceversa e imprimirla*/
    {
        char letra, letra_convertida;
        cout<<"Ingrese una letra: "<<endl;
        cin>>letra;
        if(letra>=65&&letra<91){
            letra_convertida=letra+32;
        }
        else{
            letra_convertida=letra-32;
        }

        cout<<"La letra convetida es "<<letra_convertida<<endl;


        break;
    }


    case 22:
        /*Programa que pide una cantidad entera de segundos y la imprime en formato horas:minutos:segundos */
    {
        int segundos, minutos, horas;
        cout<<"Ingrese el número de segundos: "<<endl;
        cin>>n;

        horas=(n/3600);
        minutos=(n%3600)/60;
        segundos=(n%3600)%60;

        cout<<horas<<"."<<minutos<<":"<<segundos<<endl;


        break;
    }


    case 24:
        /*Programa que pide un número entero e imprime un cuadrado de dicho tamaño,
         *los bordes del cuadrado estan hechos con el carácter '+' y el interior */
    {
        cout<<"Ingrese un número: "<<endl;
        cin>>n;

        for(int i=0; i<n; i++){
            cout<<"+";
        }
        cout<<endl;

        for(int i=0; i<n-2; i++){
            cout<<"+";
            for(int j=0; j<n-2; j++){
                cout<<" ";
            }

            cout<<"+"<<endl;
        }
        for(int i=0;i<n; i++){
            cout<<"+";
        }
        cout<<endl;


        break;
    }


    case 25:
        /*Programa que pide un número N e imprime en pantalla la cantidad de dígitos de N */
    {
        int k2,i=0;
        cout<<"Ingrese un número: "<<endl;
        cin>>N;

        n=N;
        while(n!=0){
           // k=n%10;
            k2=n/10;
            n=k2;
            i++;
        }
        cout<<N<<" tiene "<<i<<" digitos"<<endl;


        break;
    }



    case 26:
        /*Programa que pide tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno)
         *que se formaría, si sus lados tienen la longitud definida por los números ingresados */
    {
        float A,B,C;
           cout << "Ingrese los tres lados de un triangulo" << endl;
           cin>>A>>B>>C;

            if(A+B>C && A+C>B && B+C>A){
                if(A==B && A==C){
                    cout<<"Se forma un triangulo equilatero"<<endl;
                }
                else if(A==B || A==C || B==C){
                   cout<<"Se forma un triangulo isosceles"<<endl;
                }
                else if(A!=B&&A!=C){
                   cout<<" Se forma un triangulo escaleno"<<endl;
                }
            }
           else
           cout<<"Las longitudes ingresadas no forman un triangulo"<<endl;


        break;
    }


    case 27:
        /*Programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división,
          el usuario ingresa los operandos y la operación a realizar*/
    {
        int a, b, suma, resta, multiplicacion;
            float division;
            char operacion;
            cout<<" Ingrese operandos "<<endl;
            cin>>a>>b;
            cout<<"Ingrese operacion a realizar: +,-,*,/ "<<endl;
            cin>>operacion;

            switch (operacion) {

                case '+':
            {
                suma=a+b;
                cout<<"Suma de "<<a<<" y "<<b<<" es "<<suma<<endl;
                break;
            }

            case '-':
            {
            resta=a-b;
            cout<<"Resta de "<<a<<" y "<<b<<" es "<<resta<<endl;
            break;
            }

            case '*':
            {
            multiplicacion=a*b;
            cout<<"Multiplicacion de "<<a<<" y "<<b<<" es "<<multiplicacion<<endl;
            break;
            }
            case '/':
            {
            division=a*b;
            cout<<"Division de "<<a<<" entre "<<b<<" es "<<division<<endl;
            break;
            }


        break;
    }}


    case 28:
        /*Programa que encuentra el valor aproximado de pi en base a una suma infinita */
    {
        int n;
            float c, sumatoria, a;
            cout <<"Ingrese el numero de elementos usados en la aproximacion" << endl;
            cin>>n;

            for(int i=2; i<=n; i++){
                a=(2*i-1);
                if(i%2==0){
                  c=-1/a;
                }
                else
                    c=1/a;

            sumatoria+=c;
            }

        cout<<"Pi es aproximadamente "<<4*(1+sumatoria)<<endl;


        break;
    }


    return 0;
}}
