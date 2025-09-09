/*Challenge 1 : Affichage d'une Chaîne
Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.*/
 #include<stdio.h>
 #include<string.h>
  int main (){
    char chaine[30];
    printf("entrez un chaine de caractére:");
    scanf("%[^\n]",&chaine);
    printf("une chaîne de caractères entrée par l'utilisateur est :%s",chaine);
    return 0;
  }

  /*Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().*/

 #include<stdio.h>
 #include<string.h>
  int main (){
    char chaine[30];
    int i=0 ,cmpt=0;
     printf("entrez un chaine de caractére:");
      scanf("%[^\n]",&chaine);
      while(chaine[i]!='\0'){
        cmpt++;
        i++;
      }
      printf("la longueur de la chaîne de caractères est:%d ",cmpt);
      return 0;
  }
  /*Challenge 3 : Concaténation de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.*/
 
#include<stdio.h>
 #include<string.h>
  int main (){
    char chaine1[30],chaine2[30];
    
     printf("entrez un chaine de caractére 1:");
      scanf(" %[^\n]",chaine1);
    printf("entrez un chaine de caractére 2:");
      scanf(" %[^\n]",chaine2);
      strcat(chaine1,chaine2);
      printf("la concaténation entre chaine1et chaine2:%s:",chaine1);
      return 0;
  }
  /* Challenge 4 : Comparaison de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non.
 Affichez un message indiquant si les chaînes sont égales ou différentes.*/

#include<stdio.h>
 #include<string.h>
  int main (){
    char chaine1[30],chaine2[30];
    
     printf("entrez un chaine de caractére 1:");
      scanf(" %[^\n]",chaine1);
    printf("entrez un chaine de caractére 2:");
      scanf(" %[^\n]",chaine2);
      if(strcmp(chaine2,chaine1)==0){
        printf("les deux chaines de caractere est égales");
      }
      else 
       printf("les deux chaines de caractere est différentes");
return 0;
    }
/*Challenge 5 : Inversion de Chaîne
Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. Par exemple,
 si la chaîne est "abcd", le programme doit afficher "dcba".*/
 #include<stdio.h>
 #include<string.h>
 int main(){
    char chaine[30];
    int n;
    printf("entrez un chaine de caractere:");
    scanf("%s",chaine);
    n=strlen(chaine);
    for(int i=n-1;i>=0;i--){
        printf("%c",chaine[i]);
       

    }
 return 0;
 }
 /*Challenge 6 : Compte des Occurrences d'un Caractère
Écrivez un programme C qui lit une chaîne de caractères et un caractère,
 puis compte et affiche combien de fois le caractère apparaît dans la chaîne.*/
 #include<stdio.h>
 #include<string.h>
 int main(){
    char chaine[30],cara;
    int cmpt=0,i;
     printf("entrez un chaine de caractere:");
    scanf("%s",chaine);
     printf("entrez un  caractere:");
    scanf(" %c",&cara);
    for(i=0;i<strlen(chaine);i++){
if(chaine[i]==cara){
    cmpt++;
}
        
    }
printf("le caractere %c apparait %d fois dans la chaine",cara,cmpt);
return 0;
}
/*Écrivez un programme C qui lit une chaîne de caractères et convertit
 tous les caractères en majuscules. Affichez la chaîne modifiée.*/
  #include<stdio.h>
 #include<string.h>
 int main(){
    char chaine[30];
    int i;
     printf("entrez un chaine de caractere:");
    scanf("%s",chaine);
     for(i=0;i<strlen(chaine);i++){
        if(chaine[i]>='Z'&& chaine[i]>='A'){
            chaine[i]=chaine[i]-'a'+'A';
        }  }
        printf("la chaine en majuscule est:%s",chaine);
        return 0;
  }
/*Challenge 8 : Conversion en Minuscules
Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en minuscules. 
Affichez la chaîne modifiée.*/
  #include<stdio.h>
 #include<string.h>
 int main(){
    char chaine[30];
    int i;
     printf("entrez un chaine de caractere:");
    scanf("%s",chaine);
     for(i=0;i<strlen(chaine);i++){
        //if(chaine[i]>='a'&& chaine[i]>='a'){
            chaine[i]=chaine[i]-'A'+'a';
        }
        printf("la chaine en majuscule est:%s",chaine);
        return 0;
  }

  /*Challenge 9 : Suppression des Espaces
Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces.
 Affichez la chaîne résultante.*/
  #include<stdio.h>
 #include<string.h>
 int main(){
    char chaine[30], chaine1[30];
    int cmpt=0,i;
    int n=strlen(chaine);
     printf("entrez un chaine de caractere:");
   fgets(chaine, sizeof(chaine), stdin);
   
        if(chaine[n-1]=='\n'){
         chaine[n-1]=='\0';
        }
          for(i=0;i<strlen(chaine);i++){
        if(chaine[i]!=' '){
            chaine1[cmpt]=chaine[i];
            cmpt++;

        }  }
        printf("%s",chaine1 );
        return 0;
        
  }
  /*Challenge 10 : Trouver un Sous-String
Écrivez un programme C qui lit une chaîne de caractères principale et une sous-chaîne, 
puis vérifie si la sous-chaîne est présente dans la chaîne principale. 
Affichez un message indiquant si la sous-chaîne est trouvée ou non*/
#include<stdio.h>

/*Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour représenter une personne 
avec les champs nom, prenom, et age. 
Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.*/
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct {
        char nom[30];
        char prenom[30];
        int age;
    }personne;
personne p;
printf("entrez un nom d'un personne:");
scanf("%s",p.nom);
printf("entrez un prenom d'un personne:");
scanf("%s",p.prenom); 
printf("entrez un  age d'un personne:");
scanf("%d",&p.age);
printf("%s %s %d",p.nom,p.prenom,p.age);
return 0;

}

/*Challenge 2 : Structure avec Tableau
Écrivez un programme C qui définit une structure pour représenter un étudiant 
avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes. 
Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.*/

#include<stdio.h>
#include<string.h>
int main(){
    typedef struct {
        char nom[30];
        char prenom[30];
        int note[30];
    }Etudiant;
    Etudiant etd;
    int i;
    printf("entrez un nom d'un Etudiant:");
scanf("%s",etd.nom);
printf("entrez un prenom d'un Etudiant:");
scanf("%s",etd.prenom);
for(i=0;i<=3;i++){
    printf("Entrez la note %d : ", i + 1);
        scanf("%d",&etd.note[i]);
}
printf("\nInformations de l'étudiant :\n");
    printf("Nom : %s\n", etd.nom);
    printf("Prénom : %s\n", etd.prenom);
    printf("Notes : ");
    for (i = 0; i < =3; i++) {
        printf("%d ", etd.note[i]);
}
return 0;
}
/*Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur.
 Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. 
Affichez l'aire dans le programme principal.*/




