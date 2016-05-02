#include <iostream>
#include <cstdlib>
#include<cstdio>

using namespace std;

//--------------------------------------------------------

class acceso
{
    public:
        void login();
        int _cod, _pass;
        int acce = 0;


    private:
        const int cod_admin = 216306568;
        const int pass_admin = 2509;
        const int cod_secr = 12345;
        const int pass_secr = 12345;
};

void acceso::login()
{


    do
    {
        cout << "------------------Bienvenido al sistema de registro de Usuarios---------------- \n--------------------------Laboratorio de electronica---------------------------" << endl;
        cout << "Por favor coloque su codigo y contraseña para logearse \n o escriba 0 en codigo y pass para invitado" << endl << endl;
        cout << "Codigo: " ;
        cin >> _cod;
        cout << "Contraseña: ";
        cin >> _pass;
        acce=1;

        if(_cod==cod_admin && _pass==pass_admin)
        {
           //goto admin;
        }
        else if(_cod==cod_secr && _pass==pass_secr)
        {
            // goto secr;
        }
        else if(_cod==0 && _pass==0)
        {
           // goto user;
        }
        else
        {
            cout << "-------EL CODIGO O LA CONTRASEÑA NO SON CORRECTOS-------" << endl;
            acce=0;
            system("pause");
            system("cls");
        }
    }while(acce==0);
}


//--------------------------------------------------------

class usuarios
{
    public:
        void menu_admin();
        void menu_secre();
        void menu_user();

    private:
        int op_a,op_s,op_u;

};

void usuarios::menu_admin()
{
    int no_op;
    do
    {
        cout << "Bienvenido al usuario Administrador" << endl;
        cout << "Que desea hacer?" << endl;

        cout << "1. Registrar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Editar" << endl;
        cout << "4. Eliminar" << endl;
        cout << "5. Regresar al login" << endl;
        cout << "6. Salir" << endl;
        cin >> op_a;

        no_op=1;

        switch(op_a)
        {
            case 1:

                //goto menu_capturar;
                break;
            case 2:
                //goto menu_buscar;
                break;
            case 3:
                //goto menu_editar;
                break;
            case 4:
                //goto menu_eliminar;
                break;
            case 5:
                //goto login;
                break;
            case 6:
                //goto salir;
                break;
            default:
                cout << "Opcion incorrecta";
                no_op=0;
                system("pause");
                system("cls");

        }
    }while(no_op==0);
}

void usuarios::menu_secre()
{
    int no_op;

    do
    {
        cout << "Bienvenido al usuario Secretaria" << endl;
        cout << "Que desea hacer?" << endl;

        cout << "1. Registrar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Regresar al login" << endl;
        cout << "4. Salir" << endl;
        cin >> op_s;

        no_op=1;

        switch(op_s)
        {
            case 1:
                //goto menu_capturar;
                break;
            case 2:
                //goto menu_buscar;
                break;
            case 3:
                //goto login;
                break;
            case 4:
                //goto salir;
                break;
            default:
                cout << "Opcion incorrecta";
                no_op=0;
                system("pause");
                system("cls");


        };
    }while(no_op==0);
}

void usuarios::menu_user()
{
    int no_op;

    do
    {
        cout << "Bienvenido al usuario invitado" << endl;
        cout << "Como invitado solo puede buscar usuarios registrados" << endl;
        cout << "Si desea realizar otra funcion por favor contacte con el administrador" << endl << endl;

        cout << "Desea?" << endl << "1. Buscar" << endl << "2. Regresar al login" << endl << "3. Salir" << endl ;
        cin >> op_u;

        no_op=1;

        switch(op_u)
        {
            case 1:
                //goto menu_buscar;
                break;
            case 2:
                //goto login;
                break;
            case 3:
                //goto salir;
            break;
            default:
                cout << "Opcion incorrecta";
                no_op=0;
                system("pause");
                system("cls");

        };
    }while(no_op==0);
}


//--------------------------------------------------------

class menu
{
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
        cout << "Que desea registrar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_cap;

        no_op=1;

        switch(op_cap)
        {
            case 1:
                //goto capturar_alum;
                break;
            case 2:
                //goto capturar_maes;
                break;
            case 3:
                //goto menu_capturar;
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

        int op_bus;

        cout << "Que desea buscar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_bus;

        no_op=1;

        switch(op_bus)
        {
            case 1:
                //goto buscar_alum;
                break;
            case 2:
                //goto buscar_maes;
                break;
            case 3:
                //goto menu_buscar;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
        }
    }while(no_op==0);
}

void menu::menu_editar()
{
    int op_edit, no_op;
    do
    {
        cout << "Que desea editar?" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_edit;

        no_op=1;

        switch(op_edit)
        {
            case 1:
                //goto editar_alum;
                break;
            case 2:
                //goto editar_maes;
                break;
            case 3:
                //goto menu_editar;
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
        cout << "Que desea eliminar" << endl;
        cout << "1. Alumno" << endl;
        cout << "2. Maestro" << endl;
        cout << "3. Regresar" << endl;
        cin >> op_elim;

        no_op=1;

        switch(op_elim)
        {
            case 1:
                //goto elim_alum;
                break;
            case 2:
                //goto elim_maes;
                break;
            case 3:
                //goto menu_eliminar;
            default:
                cout << endl << "Opcion incorrecta" << endl;
                no_op=0;
                system("pause");
                system("cls");
        }
    }while(no_op=0);
}

//---------------------------------------------------------

class maestro
{
    public:
        int cod_maes;
        string nom_maes;
        int pos;

        void capturar_maes();
        void mostrar_maes();
        void buscar_maes();
        void editar_maes();
        void eliminar_maes();

    private:
        string fecha_reg_maes;
        string domi_maes;
        int tel_casa_maes;
        unsigned long int cel_maes;
        string rfc_maes;
        string nom_refe;
        unsigned long int cel_refe;
}maes[10];

void maestro::capturar_maes()
{
        cout << "Nombre del maestro: " << endl;
        fflush(stdin);
        getline(cin,nom_maes);
        cout << "Codigo del maestro:(0-9) " << endl;
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
        cin >> cel_refe;

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
    int maes_s,pos;

    cout << "Escriba el codigo del maestro que desea buscar: " << endl;
    cin >> maes_s;

    maes[pos];
    pos=0;
    esc:

    for(;maes_s!=pos;)
    {
        pos++;
        goto esc;
    }

    //goto mostrar_maes;
}

void maestro::editar_maes()
{
    int op_mod_m;

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
        case 1:
            cout << "Nombre actual " << nom_maes << " \t modificar a: " << endl;
            getline(cin,nom_maes);
            break;
        case 2:
            cout << "Fecha de registro actual " << fecha_reg_maes << "\t modificar a: " << endl;
            getline(cin,fecha_reg_maes);
            break;
        case 3:
            cout << "Domicilio actual " << domi_maes << "\t modificar a:"<< endl;
            getline(cin,domi_maes);
            break;
        case 4:
            cout << "Telefono actual " << tel_casa_maes << "\t modificar a: " << endl;
            cin >> tel_casa_maes;
            break;
        case 5:
            cout << "Celular actual " << cel_maes << "\t modificar a " << endl;
            cin >> cel_maes;
            break;
        case 6:
            cout << "RFC actual " << rfc_maes << "\t modificar a " << endl;
            getline(cin,rfc_maes);
            break;
        case 7:
            cout << "Referencia actual " << nom_refe << "\t modificar a " << endl;
            getline(cin,nom_refe);
            break;
        case 8:
            cout << "Celular de la referencia actual " << cel_refe << "\t modificar a" << endl;
            cin >> cel_refe;
            break;
        default:
            cout << "Esa es no es una opcion" << endl;
            system("pause");
            system("cls");
        }
}

void maestro::eliminar_maes()
{

}

//------------------------------------------------------------

class alumnos
{
    public:
        int pos;
        int cod_alum;
        string nom_alum;

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
    cout << "Codigo del alumno:(0-9)" << endl;
    fflush(stdin);
    cin >> cod_alum;
    cout << "Fecha de registro:" << endl;
    fflush(stdin);
    getline(cin,fecha_reg_alum);
}

void alumnos::mostrar_alum()
{
    cout << "Nombre del Alumno:" << endl;
    cout << nom_alum << endl;
    cout << "Codigo del alumno:(0-9)" << endl;
    cout << cod_alum << endl;
    cout << "Fecha de registro:" << endl;
    cout << fecha_reg_alum << endl;
}

void alumnos::buscar_alum()
{
    int cod_alum_s;

    cout << "Escriba el codigo del alumno que desea buscar: " << endl;
    cin >> cod_alum_s;


}

void alumnos::editar_alum()
{
    int op_mod_a;

    cout << "Este es el menu para modificar el dato del alumno con codigo " << pos << ":" << endl;
    cout << "Que desea modificar?" << endl;
    cout << "1. Nombre del alumno" << endl;
    cout << "2. Fecha de registro" << endl;
    cin >> op_mod_a;

    switch(op_mod_a)
    {
        case 1:
            cout << "Nombre actual " << nom_alum << " \t modificar a: " << endl;
            getline(cin,nom_alum);
            break;
        case 2:
            cout << "Fecha de registro actual " << fecha_reg_alum << "\t modificar a: " << endl;
            getline(cin,fecha_reg_alum);
            break;
    }
}

void alumnos::eliminar_alum()
{

}

//-----------------------------------------------------------

int main()
{
    acceso principal;

    principal.login();

    return 0;
}
