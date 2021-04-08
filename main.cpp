#include <iostream>

using namespace std;

int main()
{
    unsigned short ejercicio;
    cout << "ingrese el numero del ejercicio a ejecutar:";
    cin >> ejercicio;


    switch (ejercicio){
    case 1:
    {
        char caracter;
        cout << "Ingrese caracter" << endl;
        cin>>caracter;

        if( caracter>=65 && caracter<=122){
           if(caracter=='A'||caracter=='a'||caracter=='E'||caracter=='e'||caracter=='I'||caracter=='i'||caracter=='O'||caracter=='o'|caracter=='U'||caracter=='u'){
           cout<<"El caracter "<<caracter<<" es una vocal "<<endl<<endl;
            }
           else
           cout<<"El caracter "<< caracter<<" es una consonante"<<endl;
            }
            else
            cout<<"Esto no es vocal ni consonante, ingrese un valor valido"<<endl;
     break;
     }
     case 2:
     {
        int dinero, bill50000, bill20000, bill10000, bill5000, bill2000, bill1000, mone500, mone200, mone100, mone50,restante;
        cout<<"ingrese cantidad de dinero"<<endl;
        cin>>dinero;
        cout<<endl;
        bill50000=dinero/50000;
        restante=dinero%50000;
        bill20000=restante/20000;
        restante=restante%20000;
        bill10000=restante/10000;
        restante=restante%10000;
        bill5000=restante/5000;
        restante=restante%5000;
        bill2000=restante/2000;
        restante=restante%2000;
        bill1000=restante/1000;
        restante=restante%1000;
        mone500=restante/500;
        restante=restante%500;
        mone200=restante/200;
        restante=restante%200;
        mone100=restante/100;
        restante=restante%100;
        mone50=restante/50;
        restante=restante%50;

        cout<<"50000: "<<bill50000<<endl;
        cout<<"20000: "<<bill20000<<endl;
        cout<<"10000: "<<bill10000<<endl;
        cout<<"5000: "<<bill5000<<endl;
        cout<<"2000: "<<bill2000<<endl;
        cout<<"1000: "<<bill1000<<endl;
        cout<<"500: "<<mone500<<endl;
        cout<<"200: "<<mone200<<endl;
        cout<<"100: "<<mone100<<endl;
        cout<<"50: "<<mone50<<endl;
        cout<<"Restante: "<<restante << endl;

        break;
    }
    case 3:
    {
        int d,m;

        cout << "Introduce el dia: ";
        cin >> d;
        cout << "Introduce el mes: ";
        cin >> m;
        //comprobamos que los datos ingresados esten en un rango valido
        if(d>0 && d<32 && m>0 && m<13){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
         {
         cout << d<<"/"<<m << " Fecha valida"<<endl;
         }
         else
          {
         if(m==2 && d==29)
         cout << d<<"/"<<m << " Fecha valida en bisiesto"<<endl;
         else if(m==2 && d<29 )
         cout<< d<<"/"<<m << " Fecha valida"<<endl;
         else if(m!=2 && d<31)
         cout << d<<"/"<<m << " Fecha valida"<<endl;
         else
         cout << "Fecha no valida"<<endl;
               }
         }
         else
         cout << "Fecha no valida"<<endl;
        break;
    }
    case 4:
    {
        int num1,num2,res,flag=2; //Se declara el flag para verificar si el número es válido
        cout<<"Ingrese un numero entre 0 y 2359"<<endl;
        do{
        cout<<"Ingrese el numero: ";cin>>num1;
        }
        while(num1<0 || num1>=2360);
        cout<<"Ingrese otro numero entre 0 y 2359"<<endl;
        do{
        cout<<"Ingrese el numero: ";cin>>num2;
        }
        while(num2<0 || num2>=2360);
        int v1[2],v2[2];  //Es el tamaño de los tiempos
        for(int i=0;i<2;i++){   //Separo el número ingresado en 2 vectores.. ej: el 345 será [3] [45]; el 1782 será: [17] [82]
        res=num1%100;
        num1-=res;
        num1=num1/100;
        v1[i]=res;
         }
        if(v1[0] >= 60) flag=0;  //El tiempo 1 es inválido

        for(int i=0;i<2;i++){  //Separo los tiempos del otro vector
        res=num2%100;
        num2=num2-res;
        num2=num2/100;
        v2[i]=res;
        }
        if(v2[0] >= 60) flag=1;  //El tiempo 2 es inválido
        if(v1[0]>=60 && v2[0]>=60) flag=3;   //Los 2 tiempos son inválidos
        if(flag == 2){  //Si el tiempo es válido haga el funcionamiento
        int v3[2], rang=0; // Este me guarda la suma de los 2 vectores anteriores (v3[2])
        cout<<"La hora es: ";
        for(int i=0;i<2;i++){
        v3[i]=v2[i]+v1[i];
        }
        while(v3[0] >= 60){   // Si la suma de los minutos da mayor o igual a 60, le decremente 60 a los minutos e incremente 1 a las horas
        v3[0]-=60;
        v3[1]+=1;
        }
        for(int i=1;i>=0;i--){
        if(v3[1] >= 24){
        v3[i]-=24; //Como es un formato de 24 horas, si se pasa de las 24 horas, se le resta 24 porque pasa al siguiente día.
        cout<<v3[i];
        }
        else cout<<v3[i]; //Muestra la hora militar.
        }
        }
        else if(flag == 3){
        cout<<"Los 2 tiempos son invalidos: "<<endl;  //Me muestre los 2 tiempos inválidos.
        for(int i=1;i>=0;i--) cout<<v1[i];
        cout<<endl;
        for(int i=1;i>=0;i--) cout<<v2[i];
        }
        else{
        if(flag == 0){
        for(int i=1;i>=0;i--) cout<<v1[i];
        }
        else if(flag == 1) for(int i=1;i>=0;i--) cout<<v2[i];
        cout<<" Es un tiempo invalido";
        }
        break;
    }
    case 5:
    {
         int n, m=0;
         cout << "Ingrese numero impar" << endl;
         cin>>n;
         for(int i=0; i<n/2+1; i++){
         for(int j=n/2-m; j>0;j--){
         cout<<" ";
         }
         for(int k=1; k<=2*i+1;k++){
         cout<<"*";
         }

         for(int j=n/2-m; j>0;j--){
         cout<<" ";
         }
         cout<<endl;
         m++;
         }
         m=1;
         for(int i=1; i<=n/2; i++){
         for(int j=i; j>0;j--){
         cout<<" ";
         }
         for(int k=n-2*m;k>0;k--){
         cout<<"*";
         }
         m++;
         for(int j=i; j>0;j--){
         cout<<" ";
         }
         cout<<endl;
         }


        break;
     }
    case 6:
    {
        int n;
        double elemento, permutacion,suma=0;
        cout << "Ingrese el numero de elementos usados en la aproximacion" << endl;
        cin>>n;
        for(int i=1;i<=n-1;i++){//for para el elemento
        permutacion=1;
        for(int j=i;j>0;j--){//for para la permutacion

        permutacion=permutacion*j;
        }
        elemento=1/permutacion;
        suma=suma+elemento;
        }

       cout<<"e es aproximadamente "<<1+suma;
         break;
    }
    case 7:
    {
        int n, elemento=1,anterior=0, aux, suma=0;
        cout << "Ingrese numero " << endl;
        cin>>n;

        while(elemento<n){
        aux=elemento;
        elemento+=anterior;
        anterior=aux;
        if(elemento%2==0){
        suma=suma+elemento;
            }
       }
        cout<<"El resultado de la suma es "<<suma<<endl;
    break;
    }
    case 8:
    {
        int a,b,c,multiplo=0,multiplob=0,i=1,suma1=0,suma2=0;
        cout << "Ingrese 3 numeros " << endl;
        cin>>a>>b>>c;


        while(multiplo<c){
        multiplo=a*i;
        if(multiplo>=c){
        break;
            }
        suma1+=multiplo;
        i++;
    }
        int j=1; multiplo=0; i=1;
        int k=0;

        while(multiplob<c){
        multiplob=b*j;
        if(multiplob>=c)
        break;
        i=1;
        multiplo=a*i;
        while(multiplo<c){
        multiplo=a*i;
        if (multiplo>c)
        break;
        if(multiplob==multiplo){
        k++;
        }
        i++;
        }
        if(k==0){
        suma2+=multiplob;
        }
        else if(k>0){
        break;
        }
        j++;
        k=0;
        }
    cout<<"La sumatoria es "<<suma2+suma1<<endl;
    break;
    }
     case 9:
     {
     int n,a,b, suma=0, suma_digito=1;
     cout << "Ingrese numero" << endl;
     cin>>n;

     while(n!=0){
     a=n%10;
     b=n/10;
     suma_digito=1;
     int i=a;
     while(i>=1){
     suma_digito*=a;
     i--;
     }
     suma+=suma_digito;
     n=b;
     }

     cout<<" El resultado de la suma es "<<suma<<endl;
     break;
    }
    case 10:
    {
     int a, primo, div, enesimo,n;

     primo = 1;

     a = 1;

     cout<<"Ingrese numero para saber el enesimo numero primo"<<endl;
     cin>>n;

     if(n == 1)
     enesimo = 2;
     else
     {
     for(enesimo = 3; enesimo <= 1000; enesimo++)
     {
     for(div = 2; div <= enesimo/2; div++)
     {
     if(enesimo%div == 0)
     {
     primo = 0;
     break;
     }
     }

     if(primo == 1)
     a++;
     else
     primo = 1;
     if(a == n)
     break;
     }
     }
     cout<<"El primo numero "<<n<<" es "<<enesimo<<endl;

     break;
    }
    case 11:
    {
        break;}
    case 12:
    {
        int n, primo=0;
        cout << "Ingrese numero" << endl;
        cin>>n;

        for(int i=1; i<n; i++){
        if(n%i==0){
        primo=i;
        }
        else{
        primo = primo;
        }
        }

        cout<<"El mayor factor primo de "<<n<<" es "<<primo<<endl;


    break;}
     case 13:
    {
        int n,m=0,k=0, suma=0;
        cout << "Ingrese numero" << endl;
        cin>>n;


        for(int i=2;i<=n; i++)
        {
        m=0;
        for(k=i;k>0;k--){
        if(i%k==0){
        m++;
        }
        else
        {int  m =m;}
         }

        if(m==2){
        suma+=i;
        }
        }

       cout<<"El resultado de la suma es "<<suma<<endl;
        break;
    }
     case 14:
    {break;}

     case 15:
    {
        int n, Num_diagonal=1,k=0, Suma=0;
         cout << "Ingrese numero impar para calcular la suma de los numeros en la diagonal de una espiral" << endl;
         cin>>n;

         for(int i=1;2*i<n;i++){
         k=0;
         while(k<=3){
         Num_diagonal+=2*i;
         Suma+=Num_diagonal;
         k++;
        }

            }

        cout<<"En una espiral de "<<n<<"X"<<n<<" la suma es "<<Suma+1<<endl;
        break;
    }
       case 16:
      {
        int n,k,m=0;
        cout<<"Ingrese el numero"<<endl;
        cin>>n;
        k=n;

        while(n!=1){
        if(n%2==0){
        n=n/2;
                }
        else{
        n=3*n+1;
      }

        cout<<n<<endl;
        m++;

        }
         cout<<"La serie mas larga es con la semilla "<<k<<"teniendo "<<m<<" terminos"<<endl;
         break;
    }
       case 17:
    {   int k, angular,n=1,i=1,cont=0;
        cout << "Ingrese numero " << endl;
        cin>>k;


        while(cont!=k){
        i=1;
        cont=0;
        angular = n*(n+1)/2;
        while(i<=angular){
        if(angular%i==0)
        cont++;
        else
        cont=cont;
        i++;

        }
        n++;
        if(cont==k)
        break;
        }

        cout<<"El numero es "<< angular<<" que tiene "<<k<<" divisores"<<endl;
        break;}













    default:
        cout << "El ejercicio no existe" << endl;
    break;


    }
    return 0;
}
