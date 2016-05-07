/*
OJEDA ESCOBAR, CÉSAR ARLEY                                       06/Mayo/2016
216306568
D21
Seminario de Solución de Problemas de Programación
                                PROYECTO SEMESTRAL
*/

#include <iostream>
#include <cstdlib>
#include<cstdio>
#include <conio.h>

int cant_a=0, cant_b=0, permisive=0, o_borr=0, o_mos=0;

using namespace std;

//--------------------------------------------------------
//PRIMERA CLASE- ALUMNOS METODOS: Capturar, Mostrar, Buscar, Editar, Eliminar

class alumnos
{
    public:
        int pos;
        int cod_alum;
        string nom_alum;
        int al_pos;
        void capturar_alum();
        void mostrar_alum();
        void buscar_alum();
        void editar_alum();
        void eliminar_alum();

    private:
        string fecha_reg_alum;


}alum[10];

void alumnos::capturar_alum()
{
    cout << "Nombre del Alumno:" << endl;
    fflush(stdin);
    getline(cin,nom_alum);
    cout << "Codigo del alumno: (Solo numeros) " << endl;
    cin >> cod_alum;
    cout << "Fecha de registro:" << endl;
    fflush(stdin);
    getline(cin,fecha_reg_alum);

    system("pause");
    system("cls");
}

void alumnos::mostrar_alum()
{
    cout << "Nombre del Alumno:" << endl;
    cout << nom_alum << endl;
    cout << "Codigo del alumno:" << endl;
    cout << cod_alum << endl;
    cout << "Fecha de registro:" << endl;
    cout << fecha_reg_alum << endl << endl;
    system("pause");
}

void alumnos::buscar_alum()
{

    if(cant_a>0)
    {
        int cod_alum_s, op_edi;

        system("cls");

        cout << "Escriba el codigo del alumno que desea buscar: " << endl;
        cin >> cod_alum_s;
        int NumCod;

        for(al_pos=0;al_pos<cant_a;al_pos++)
        {

            if(alum[al_pos].cod_alum==cod_alum_s)
            {
                if(o_borr==1)
                {
                    alum[al_pos].eliminar_alum();
                }
                if(o_mos==1)
                {
                    system("cls");
                    alum[al_pos].mostrar_alum();
                }

                if(permisive==1)
                {
                    cout << endl << endl << "Deseas modificar?";
                    cout << endl << "1. Si";
                    cout << endl << "2. No" << endl;
                    cin >> op_edi;

                    switch(op_edi)
                    {
                        case 1:
                            alum[al_pos].editar_alum();
                            system("cls");
                            break;
                        case 2:
                            system("cls");
                            break;

                    }
                }

            }

            else
            {
                system("cls");
                cout << "No existe el alumno" << endl;
                system("pause");
            }


        }
    }
    else
    {
        cout << "No existe ningun registro" << endl;
        system("pause");
        system("cls");
    }
}

void alumnos::editar_alum()
{
    char op_mod_a;


    cout << "Este es el menu para modificar los datos del alumno con codigo " << alum[al_pos].cod_alum << ":" << endl;
    cout << "Que desea modificar?" << endl;
    cout << "1. Nombre del alumno" << endl;
    cout << "2. Fecha de registro" << endl;
    cout << "3. Regresar"<< endl;
    cin >> op_mod_a;

    switch(op_mod_a)
    {
        case '1':
            cout << "Nombre actual " << alum[al_pos].nom_alum << " \t modificar a: " << endl;
            getline(cin,nom_alum);
            break;
        case '2':
            cout << "Fecha de registro actual " << alum[al_pos].fecha_reg_alum << "\t modificar a: " << endl;
            getline(cin,fecha_reg_alum);
            break;
        case '3':
            break;
        default:
            cout << "Esa no es una opcion" << endl<< endl;
            system("pause");
            system("cls");
            break;
    }
}

void alumnos::eliminar_alum()
{
    char borrar;
    if(cant_a>0)
    {
        cout << "Desea borrar el alumno seleccionado?"<< endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> borrar;

        switch(borrar)
        {
            case '1':
                cod_alum=-100;
                nom_alum="";
                fecha_reg_alum="";
                cout << "Borrado con exito" << endl << endl;
                system("pause");
                system("cls");
                break;
            case '2':
                break;

        }
    }
}

//--------------------------------------------------------
//SEGUNDA CLASE- MAESTROS METODOS: Capturar, Mostrar, Buscar, Editar, Eliminar

class maestro
{
    public:
        int cod_maes;
        string nom_maes;
        int pos;
        int maes_pos;
        void capturar_maes();
        void mostrar_maes();
        void buscar_maes();
        void editar_maes();
        void eliminar_maes();

    private:
        string fecha_reg_maes;
        string domi_maes;
        string tel_casa_maes;
        string cel_maes;
        string rfc_maes;
        string nom_refe;
        string cel_refe;
}maes[10];

void maestro::capturar_maes()
{
        cout << "Nombre del maestro: " << endl;
        fflush(stdin);
        getline(cin,nom_maes);
        cout << "Codigo del maestro:(Solo numeros) " << endl;
        fflush(stdin);
        cin >> cod_maes;
        cout << "Fecha de registro:(DD/MM/AAAA):" << endl;
        fflush(stdin);
        getline(cin,fecha_reg_maes);
        cout << "Domicilio del maesto:(Calle Ext Int Colonia):" << endl;
        fflush(stdin);
        getline(cin,domi_maes);
        cout << "Telefono de casa del maestro:" << endl;
        fflush(stdin);
        cin >> tel_casa_maes;
        cout << "Celular del maestro:" << endl;
        fflush(stdin);
        cin >> cel_maes;
        cout << "RFC del Maestro:" << endl;
        fflush(stdin);
        getline(cin,rfc_maes);
        cout << "Nombre de la referencia del maestro:" << endl;
        fflush(stdin);
        getline(cin,nom_refe);
        cout << "Numero del celular de referencia del maestro:" << endl;
        fflush(stdin);
        getline(cin,cel_refe);

        system("pause");
        system("cls");
}

void maestro::mostrar_maes()
{
        cout << "Nombre del maestro: " << endl;
        cout << nom_maes << endl;
        cout << "Codigo del maestro:(0-9) " << endl;
        cout << cod_maes << endl;
        cout << "Fecha de registro:(DD/MM/AAAA):" << endl;
        cout << fecha_reg_maes << endl;
        cout << "Domicilio del maesto:(Calle Ext Int Colonia):" << endl;
        cout << domi_maes << endl;
        cout << "Telefono de casa del maestro:" << endl;
        cout << tel_casa_maes << endl;
        cout << "Celular del maestro:" << endl;
        cout << cel_maes << endl;
        cout << "RFC del Maestro:" << endl;
        cout << rfc_maes << endl;
        cout << "Nombre de la referencia del maestro:" << endl;
        cout << nom_refe << endl;
        cout << "Numero del celular de referencia del maestro:" << endl;
        cout << cel_refe << endl;

        system("pause");
        system("cls");
}

void maestro::buscar_maes()
{
    if(cant_b>0)
    {
        int cod_maes_s, op_edi;

        system("cls");

        cout << "Escriba el codigo del maestro que desea buscar: " << endl;
        cin >> cod_maes_s;
        int NumCod;

        for(maes_pos=0;maes_pos<cant_b;maes_pos++)
        {

            if(maes[maes_pos].cod_maes==cod_maes_s)
            {

                if(o_borr==1)
                {
                    system("cls");
                    maes[maes_pos].eliminar_maes();
                }

                if(o_mos==1)
                {
                    system("cls");
                    maes[maes_pos].mostrar_maes();
                }

                if(permisive==1)
                {
                    system("cls");
                    cout << endl << endl << "Deseas modificar?";
                    cout << endl << "1. Si";
                    cout << endl << "2. No" << endl;
                    cin >> op_edi;

                    switch(op_edi)
                    {
                        case 1:
                            maes[maes_pos].editar_maes();
                            system("cls");
                            break;
                        case 2:
                            system("cls");
                            break;

                    }
                }

            }

            else //if(al_pos=cant_a&&alum[al_pos].cod_alum!=cod_alum_s)
            {
                system("cls");
                cout << "No existe el maestro" << endl;
                system("pause");
            }


        }
    }
    else
    {
        cout << "No existe ningun registro" << endl;
        system("pause");
        system("cls");
    }
}

void maestro::editar_maes()
{
    char op_mod_m;

    cout << "Este es el menu para modificar los datos del maestro con codigo " << pos << ":" << endl;
    cout << "Que desea modificar?" << endl;
    cout << "1. Nombre del maestro" << endl;
    cout << "2. Fecha de registro" << endl;
    cout << "3. Domicilio" << endl;
    cout << "4. Telefono" << endl;
    cout << "5. Celular" << endl;
    cout << "6. RFC" << endl;
    cout << "7. Nombre de la referencia" << endl;
    cout << "8. Celular de la referencia" << endl;
    cin >> op_mod_m;

    switch(op_mod_m)
    {
        case '1':
            cout << "Nombre actual " << nom_maes << " \t modificar a: " << endl;
            getline(cin,nom_maes);
            break;
        case '2':
            cout << "Fecha de registro actual " << fecha_reg_maes << "\t modificar a: " << endl;
            getline(cin,fecha_reg_maes);
            break;
        case '3':
            cout << "Domicilio actual " << domi_maes << "\t modificar a:"<< endl;
            getline(cin,domi_maes);
            break;
        case '4':
            cout << "Telefono actual " << tel_casa_maes << "\t modificar a: " << endl;
            cin >> tel_casa_maes;
            break;
        case '5':
            cout << "Celular actual " << cel_maes << "\t modificar a " << endl;
            cin >> cel_maes;
            break;
        case '6':
            cout << "RFC actual " << rfc_maes << "\t modificar a " << endl;
            getline(cin,rfc_maes);
            break;
        case '7':
            cout << "Referencia actual " << nom_refe << "\t modificar a " << endl;
            getline(cin,nom_refe);
            break;
        case '8':
            cout << "Celular de la referencia actual " << cel_refe << "\t modificar a" << endl;
            getline(cin,cel_refe);
            break;
        case '9':
            break;
        default:
            cout << "Esa es no es una opcion" << endl;
            system("pause");
            system("cls");
        }
}

void maestro::eliminar_maes()
{
    char borrar;
    if(cant_a>0)
    {
        cout << "Desea borrar el maestro seleccionado?"<< endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cin >> borrar;

        switch(borrar)
        {
            case '1':
                cod_maes=-100;
                nom_maes="";
                fecha_reg_maes="";
                domi_maes="";
                tel_casa_maes="";
                cel_maes="";
                rfc_maes="";
                nom_refe="";
                cel_refe="";

                cout << "Borrado con exito" << endl << endl;
                system("pause");
                system("cls");
                break;
            case '2':
                break;

        }
    }
}

//--------------------------------------------------------
//TERCERA CLASE- MENUS METODOS: Menu Capturar, Menu Buscar, Menu Editar, Menu Eliminar
//Esta clase contiene los menus que desglosa hacia los diferentes metodos de las clases maestros y alumno

//No utilizo el metodo mostrar, pues es  necesaria una busqueda para activar este metodo

class menu : public maestro, public alumnos
{
    public:
        void menu_capturar();
        void menu_buscar();
        void menu_editar();
        void menu_eliminar();

};

void menu::menu_capturar()
{
    int op_cap,no_op;
    do
    {
        system("cls");
        cout << "Desde aqui puedes registrar un nuevo alumno o un nuevo maestro"<< endl<< endl;
        cout << "Que desea registrar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_cap;

        no_op=1;

        switch(op_cap)
        {
            case 1:
                system("cls");
                alumnos::capturar_alum();
                alumnos::mostrar_alum();
                cant_a++;
                break;
            case 2:
                system("cls");
                maestro::capturar_maes();
                maestro::mostrar_maes();
                cant_b++;
                break;
            case 3:
                system("cls");
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
        }

    }while(no_op==0);
}

void menu::menu_buscar()
{
    int no_op;

   do
    {
        system("cls");
        int op_bus;

        cout << "Que desea buscar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        fflush(stdin);
        cin >> op_bus;

        no_op=1;

        switch(op_bus)
        {
            case 1:
                system("cls");
                o_mos=1;
                alumnos::buscar_alum();
                o_mos=0;
                break;
            case 2:
                system("cls");
                o_mos=1;
                maestro::buscar_maes();
                o_mos=0;
                break;
            case 3:
                system("cls");
                break;
            default:
                system("cls");
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
                break;
        }
    }while(no_op==0);
}

void menu::menu_editar()
{
    int op_edit, no_op;
    do
    {
        system("cls");
        cout << "Que desea editar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_edit;

        no_op=1;

        switch(op_edit)
        {
            case 1:
                system("cls");
                alumnos::editar_alum();
                break;
            case 2:
                system("cls");
                maestro::editar_maes();
                break;
            case 3:
                system("cls");
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
        }
    }while(no_op=0);
}

void menu::menu_eliminar()
{
    int no_op, op_elim;

    do
    {
        system("cls");
        cout << "Que desea eliminar" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_elim;

        no_op=1;

        switch(op_elim)
        {
            case 1:
                system("cls");
                o_borr=1;
                alumnos::mostrar_alum();
                o_borr=0;
                break;
            case 2:
                system("cls");
                o_borr=1;
                maestro::mostrar_maes();
                o_borr=0;
                break;
            case 3:
                system("cls");
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
        }
    }while(no_op=0);
}

//--------------------------------------------------------
//CUARTA CLASE- USUARIOS METODOS: Menu Administrador, Menu Secretaria, Menu Invitado
//Esta clase contiene los menus para cada tipo de usuario admitido


class usuarios : public menu
{
    public:
        void menu_admin();
        void menu_secre();
        void menu_user();

    private:
        char op_a,op_s,op_u;

};

void usuarios::menu_admin()
{
    permisive=1;
    int no_op;
    do
    {
        system("cls");
        cout << "-------------------------Bienvenido al usuario Administrador--------------------" << endl;
        cout << "                                 Que desea hacer?" << endl;

        cout << "1. Registrar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Editar" << endl;
        cout << "4. Eliminar" << endl;
        cout << "5. Regresar al login" << endl;
        fflush(stdin);
        cin >> op_a;

        no_op=1;

        switch(op_a)
        {
            case '1':
                system("cls");
                menu::menu_capturar();
                no_op=0;
                break;
            case '2':
                system("cls");
                menu::menu_buscar();
                no_op=0;
                break;
            case '3':
                system("cls");
                menu::menu_editar();
                no_op=0;
                break;
            case '4':
                system("cls");
                menu::menu_eliminar();
                no_op=0;
                break;
            case '5':
                system("cls");
                break;
            default:
                system("cls");
                cout << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");

        }
    }while(no_op==0);
}

void usuarios::menu_secre()
{
    int no_op;
    permisive=0;
    do
    {
        system("cls");
        cout << "--------------------------Bienvenido al usuario Secretaria----------------------" << endl;
        cout << "                                  Que desea hacer?" << endl;

        cout << "1. Registrar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Regresar al login" << endl;
        cin >> op_s;

        no_op=1;

        switch(op_s)
        {
            case '1':
                system("cls");
                menu::menu_capturar();
                no_op=0;
                break;
            case '2':
                system("cls");
                menu::menu_buscar();
                no_op=0;
                break;
            case '3':
                system("cls");
                break;
            default:
                system("cls");
                cout << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");system("cls");


        };
    }while(no_op==0);
}

void usuarios::menu_user()
{
    permisive=0;
    int no_op;

    do
    {
        system("cls");
        cout << "---------------------------Bienvenido al usuario invitado-----------------------" << endl;
        cout << "Como invitado solo puede buscar usuarios registrados" << endl;
        cout << "Si desea realizar otra funcion por favor contacte con el administrador" << endl << endl;

        cout << "Desea?" << endl << "1. Buscar" << endl << "2. Regresar al login" << endl;
        cin >> op_u;

        no_op=1;

        switch(op_u)
        {
            case '1':
                system("cls");
                menu::menu_buscar();
                no_op=0;
                break;
            case '2':
                system("cls");
                break;
            default:
                system("cls");
                cout << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");

        };
    }while(no_op==0);
}


//--------------------------------------------------------
//SEXTA CLASE- LOGIN METODOS: Acceso Principal
//Esta es lo primero que se muestra al ejecutar el programa

class login : public usuarios
{
   public:
    int principal();
    string _cod;


};

int login::principal()
{

    system("color 9f");

    int acce = 0;
    int erro_cod=0;
    string pass="";
    char ch;

    do
    {
        system("cls");
        cout << "------------------Bienvenido al sistema de registro de Usuarios----------------" << endl;
        cout << "--------------------------Laboratorio de electronica---------------------------" << endl << endl;
        cout << "Por favor coloque su codigo y nip para logearse como Administrador o secretario" << endl;
        cout << "             O escriba 0 en codigo y Nip para ingresar como invitado           " << endl << endl;
        cout << "                    Escriba salir para salir del programa                      " << endl;
        cout << "                         Tiene " << 10-erro_cod << " intentos disponibles                " << endl << endl;
        cout << "Codigo: " ;
        fflush(stdin);
        cin >> _cod;
        cout << "Nip: ";
        pass="";
        ch =_getch();
        while (ch !=13)
        {
            pass.push_back(ch);
            cout<<"*";
            ch=_getch();
        }

        acce=1;

        if(_cod=="216306568" && pass=="2509")
        {
            erro_cod=0;
            permisive=1;
            system("cls");
            usuarios::menu_admin();
        }
        else if(_cod=="12345" && pass=="12345")
        {
            erro_cod=0;
            permisive=1;
            system("cls");
            usuarios::menu_secre();
        }
        else if(_cod=="0" && pass=="0")
        {
            erro_cod=0;
            system("cls");
            usuarios::menu_user();
        }
        else if((_cod=="salir"||_cod=="SALIR")&&(pass=="salir"||pass==""||pass=="SALIR"))
        {
            goto salir;
        }
        else
        {
            cout << endl << endl << "..........:::::::::::::::::::Codigo o Nip erronea::::::::::::::::::::::........." << endl << endl;
            system("pause");
            system("cls");
            erro_cod++;


        }

    }while(erro_cod<=9);
    system("cls");
    if(erro_cod<=9)
    {
        cout << "La cantidad de intentos ha sido sobrepasado" << endl;
        cout << "Por favor contacte con el administrador" << endl << endl;
        system("pause");
    }
    salir:;
}

//--------------------------------------------------------
/*
    El uso y aparacion de los metodos de las diferentes clases en este programa
    se encuentran en un orden ascendente como lo muestra el siguiente diagrama:


                ALUMNOS                         MAESTROS
                  ||                               ||
                  ||                               ||
                  ||                               ||
                  [--------------MENUS--------------]
                   \\             ||              //
                    \\            ||             //
  TIPO USUARIO       ADMINIS   SECRETARIO    INVITADO
                        \\        ||         //
                         \\       ||        //
                          \\      ||       //
                           \\     ||      //
                            \\    ||     //
                              MENU LOGIN
*/


//--------------------------------------------------------
//En el main solo tengo el constructor de la primera clase.

int main()
{
    login p_menu;
    p_menu.principal();

    return 0;
}


//                            Página 1 de 1
