#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<iostream>
#include<io.h>

#define MAXINODE 50

#define READ 1
#define WRITE 2

#define MAXFILESIZE 2048

#define REGULAR 1
#define SPECIAL 2

#define START 0
#define CURRENT 1
#define END 2

typedef struct superblock
{
    int TotalInodes;
    int FreeInode;
}SUPPERBLOCK, *PSUPPERBLOCK;

typedef struct inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int FileActualSize;
    int FileType;
    char *Buffer;
    int LinkCount;
    int RefernceCount;
    int permission;
    struct inode *next;

}INODE, *PINODE,** PPINODE;


typedef struct filetable
{
    int readoffset;
    int writeoffset;
    int count;
    int mode;
    PINODE ptrinode;
}FILETABLE,*PFILETABLE;


typedef struct udft
{
    PFILETABLE ptrfiletable;
}UFDT;

UFDT UFDTArr[50];
SUPPERBLOCK SUPPERBLOCKobj;
PINODE head=NULL;

void man(char *name)
{
     if(name==NULL)return;
     
     if(strcmp(name,"create")==0)
     {
        printf("Descruption :used to create new regulra file\n");
        printf("Usage : create File_name permissions \n");

     }
     else if (strcmp(name,"read")==0)
     {
        printf("Description :used to read data from regulat file\n");
           printf("Usage : read File_name permissions \n"); printf("");
     }
     else if (strcmp(name,"write")==0)
     {
        printf("Description :used to write data from regulat file\n");
           printf("Usage : write FIle_name\n after this enter the data that we wnat to wrute \n"); 

     }else if (strcmp(name,"ls")==0)
     {
        printf("Description :used to list all infoemantions file\n");
           printf("Usage : ls \n"); 

     }
     
     else if (strcmp(name,"stat")==0)
     {
        printf("Description :used to disaplay all infoemantions file\n");
           printf("Usage : stat file_name \n"); 

     }
     else if (strcmp(name,"fstat")==0)
     {
        printf("Description :used to disaplay all infoemantions file\n");
           printf("Usage : stat file_descriptor \n"); 

     }
     else if (strcmp(name,"truncate")==0)
     {
        printf("Description :used to remove all infoemantions file\n");
           printf("Usage :  truncate file_name \n"); 

     }
     else if (strcmp(name,"open")==0)
     {
        printf("Description :used to open file\n");
           printf("Usage : open file_name mode \n"); 

     }
     else if (strcmp(name,"close")==0)
     {
        printf("Description :used to close file\n");
           printf("Usage : close file_name \n"); 

     }
     else if (strcmp(name,"closeall")==0)
     {
        printf("Description :used to closeall file\n");
           printf("Usage : closeall file_name \n"); 

     }
     else if (strcmp(name,"lseek")==0)
     {
        printf("Description :used to change offset of file\n");
           printf("Usage : lseek  file_name ChangeOffSet StartingPOint \n"); 

     }
     
     else if (strcmp(name,"rm")==0)
     {
        printf("Description :used to delte file\n");
           printf("Usage :rm file_name \n"); 

     }
     else 
     {
        printf("ERROR :  no manual entry avaible\n");
     }
}

void DisplayHelp()
{

    printf("ls :to list out all file \n");
    printf("clear :to clear console \n");
    printf("open :to open the file \n");
    printf("close :to close file \n");
    printf("closeall :to close all file \n");
    printf("read :to read file \n");
    printf("wrirte :to write file \n");
    printf("exit :to Treminate file system \n");
    printf("stat :to Dsiaplay informantiomn of  file using name\n");
    printf(" fstat:to Dsiaplay informantiomn of  file using file descriptor \n");
    printf("turncate :to Removeall dat from file \n");
    printf("rm:to delte the file \n");
    
}

int getFDFromName(char *name)

{
    int i=0;
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable!=NULL)
        {
            if(strcmp((UFDTArr[i].ptrfiletable->ptrinode->FileName),name)==0);
                break;

        }            
            i++;
    }

    if(i==50)
    return -1;

    else
    return i;

}

PINODE get_Inode(char * name)
{
    PINODE temp=head;

    int i=0;
    if(name==NULL)
    {
        return NULL;
    }

    while(temp!=NULL)
    {
        if(strcmp(name,temp->FileName)==0)
        break;
        temp=temp->next;
    }
    return temp;

}

void CreateDILB()
{

    int i=1;
    PINODE newn =NULL;
    PINODE temp=head;
    while(i<=MAXINODE)
    {
        newn =(PINODE)malloc (sizeof(INODE));

        newn->LinkCount=0;
        newn->RefernceCount=0;
        newn->FileType=0;
        newn->FileSize=0;
        newn->Buffer=NULL;
        newn->next=NULL;
          newn->InodeNumber=i;

          if(temp==NULL)
            {
                head=newn;
                temp=head;
            }
            else
            {
                temp->next=newn;
                temp=temp->next;
            }
            i++;
}
printf("DLIB create d succesfully");
}

void InitilaseSuperBlock()
{
    int i=0;
    while(i<MAXINODE)
    {
        UFDTArr[i].ptrfiletable=NULL;
        i++;

    }
    SUPPERBLOCKobj.TotalInodes=MAXINODE;
    SUPPERBLOCKobj.FreeInode=MAXINODE;
    
}

int CreateFile(char *name,int permission)
{

    int i=0;
    PINODE temp=head;
    if((name==NULL)||(permission==0)||(permission>3))
    return -1;

    if(SUPPERBLOCKobj.FreeInode==0)
    {
        return -2;
    }
    (SUPPERBLOCKobj.FreeInode)--;
    if(get_Inode(name)!=NULL)
    return -3;

while(temp!=NULL)
{
    if(temp->FileType==0)
    break;
    temp=temp->next;
}
while(i<50)
{
    if(UFDTArr[i].ptrfiletable==NULL)
    break;
i++;
}
    UFDTArr[i].ptrfiletable->count=1;
    UFDTArr[i].ptrfiletable->mode=permission;
    UFDTArr[i].ptrfiletable->readoffset=0;
    UFDTArr[i].ptrfiletable->writeoffset=0;

    
    UFDTArr[i].ptrfiletable->ptrinode=temp;

    strcpy(UFDTArr[i].ptrfiletable->ptrinode->FileName,name);

    
    UFDTArr[i].ptrfiletable->ptrinode->FileType=REGULAR;
    UFDTArr[i].ptrfiletable->ptrinode->RefernceCount=1;
    UFDTArr[i].ptrfiletable->ptrinode->LinkCount=1;
    UFDTArr[i].ptrfiletable->ptrinode->FileSize=MAXFILESIZE;
    UFDTArr[i].ptrfiletable->ptrinode->FileActualSize=0;
    UFDTArr[i].ptrfiletable->ptrinode->permission=permission;
    UFDTArr[i].ptrfiletable->ptrinode->Buffer=(char *)malloc(sizeof(MAXFILESIZE));
    

    return i;
   

}

int rm_file(char *name)
{
    int  fd =0;
    fd=getFDFromName(name);
    if(fd==-1)
        return -1;
    (UFDTArr[fd].ptrfiletable->ptrinode->LinkCount)--;

    if(UFDTArr[fd].ptrfiletable->ptrinode->LinkCount==0)
    {
        UFDTArr[fd].ptrfiletable->ptrinode->FileType=0;
        free(UFDTArr[fd].ptrfiletable);
    }
    UFDTArr[fd].ptrfiletable=NULL;
    (SUPPERBLOCKobj.FreeInode)++;

}

int ReadFile(int fd, char *arr ,int isize)
{
    int read_size=0;
    if(UFDTArr[fd].ptrfiletable==NULL)
    {
        return -1;
    }
    if(UFDTArr[fd].ptrfiletable->mode!=READ &&UFDTArr[fd].ptrfiletable->mode!=READ+WRITE)
    return -2;

    if(UFDTArr[fd].ptrfiletable->ptrinode->permission!=READ &&UFDTArr[fd].ptrfiletable->ptrinode->permission!=READ+WRITE)
    return -2;

    if(UFDTArr[fd].ptrfiletable->readoffset==UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
    return -3;

    if(UFDTArr[fd].ptrfiletable->ptrinode->FileType!=REGULAR)
    return -4;
read_size=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)-(UFDTArr[fd].ptrfiletable->readoffset);
if(read_size<isize)
{
    strncpy((arr,UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),read_size);
 UFDTArr[fd].ptrfiletable->readoffset=(UFDTArr[fd].ptrfiletable->readoffset)+read_size;
   
}
else
{
     stncpy((arr,UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->readoffset),isize);
 UFDTArr[fd].ptrfiletable->readoffset=(UFDTArr[fd].ptrfiletable->readoffset)+isize;
   
}
 return isize;
}

int WriteFile(int fd,char *arr,int isize)
{
    if(((UFDTArr[fd].ptrfiletable->mode)!=WRITE)&&((UFDTArr[fd].ptrfiletable->mode)!=READ+WRITE))
        return -1;
    if(((UFDTArr[fd].ptrfiletable->ptrinode->permission)!=WRITE)&&((UFDTArr[fd].ptrfiletable->ptrinode->permission)!=READ+WRITE))
        return -1;
    if((UFDTArr[fd].ptrfiletable->writeoffset)==MAXFILESIZE)
        return -2;
    if((UFDTArr[fd].ptrfiletable->ptrinode->FileType)!=REGULAR)
        return -3;
    strncpy((UFDTArr[fd].ptrfiletable->ptrinode->Buffer)+(UFDTArr[fd].ptrfiletable->writeoffset),arr,isize);

    (UFDTArr[fd].ptrfiletable->ptrinode->writeoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->writeoffset)+isize;
    
    (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+isize;
    return isize;
}

int OpenFile(char *name,int mode)
{
    int i=0;
    PINODE temp=NULL;
    if(name==NULL||mode<=0)
        return -1;
    temp =get_Inode(name);
    if(temp==NULL)
    return -2;
    if(temp->permission<mode)
        return -3;
    while(i<50)
    {
        if(UFDTArr[i].ptrfiletable==NULL)
        break;
    i++;

    }

    UFDTArr[i].ptrfiletable=(PFILETABLE)malloc(sizeof(FILETABLE));
    if(UFDTArr[i].ptrfiletable==NULL)
    return -1;
    UFDTArr[i].ptrfiletable->count=1;
    UFDTArr[i].ptrfiletable-mode=mode;
    if(mode==READ+WRITE)
    {
        UFDTArr[i].ptrfiletable->readoffset=0;
        UFDTArr[i].ptrfiletable->writeoffset=0;
    } 
     else if(mode==READ)
    {
        UFDTArr[i].ptrfiletable->readoffset=0;
        
    } 
      
     else if(mode==WRITE)
    {
        UFDTArr[i].ptrfiletable->writeoffset=0;
        
    } 
    UFDTArr[i].ptrfiletable->ptrinode=temp;
    ( UFDTArr[i].ptrfiletable->RefernceCount)++;

    return i;
}

void CLoseFIleByName(int fd)
{
    UFDTArr[fd].ptrfiletable->readoffset=0;
    UFDTArr[fd].ptrfiletable->writeoffset=0;
    ( UFDTArr[i].ptrfiletable->RefernceCount)--;

    
}
int CLoseFIleByName(char *name)
{
    int i=0;
    i=getFDFromName(name);

    if(i==-1)
    return -1;

    UFDTArr[i].ptrfiletable->readoffset=0;
    UFDTArr[i].ptrfiletable->writeoffset=0;
    ( UFDTArr[i].ptrfiletable->RefernceCount)--;
          return 0;

}

void CloseAllFile()
{

    int i=0;
    while(i<50)
    {

        if(UFDTArr[i].ptrfiletable!=NULL)
        {
        
    UFDTArr[i].ptrfiletable->readoffset=0;
    UFDTArr[i].ptrfiletable->writeoffset=0;
    ( UFDTArr[i].ptrfiletable->RefernceCount)--;
        
        break;
        }
        i++;
    }
}
int LseekFile(int fd,iont size,int from)
{

    if((fd<o)||(from>2)) return -1;
    if(UFDTArr[fd].ptrfiletable=NUL) return -1;

    if((UFDTArr[fd].ptrfiletable->mode==READ)||(UFDTArr[fd].ptrfiletable->mode)==READ+WRITE)
    {
        if(from==CURRENT)
        {
            if(((UFDTArr[fd].ptrfiletable->readoffset)+size)>UFDTArr[fd].ptrfiletable->readoffset->ptrinode->FileActualSize)
            return -1;
        if(((UFDTArr[fd].ptrfiletable->readoffset)+size)<0)
        return-1;
    (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->readoffset)+size;
        }
     if(from==START)
        {
            if(size>UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
            return -1;
        if(size<0)
        return-1;
    (UFDTArr[fd].ptrfiletable->readoffset)=size;
        }
     if(from==END)
        {
            if((UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size>MAXFILESIZE)
            return -1;
        if((UFDTArr[fd].ptrfiletable->readoffset)+size<0)
        return-1;
    
    (UFDTArr[fd].ptrfiletable->readoffset)=(UFDTArr[fd].ptrfiletable->readoffset)+size;
        }
           
    }
    else if(UFDTArr[fd].ptrfiletable->mode==WRITE)
    {
        if(from ==CURRENT)
        {
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)>MAXFILESIZE)
            return -1;
            if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
            return -1;
           if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)>(UFDTArr[fd].ptrfiletable->readoffset->ptrinode->FileActualSize))
        (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=(UFDTArr[fd].ptrfiletable->ptrinode->writeoffset)+size;
    
        (UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->writeoffset)+size;
        }

        else if(form==START)
        {
            if(size>MAXFILESIZE)
            return -1;
        if(size<0)
        return -1;
    if(size>(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize))
    (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)=size;
        }
        else if(from==END)
        {
            if((UFDTArr[fd].ptrfiletable->writeoffset)+size>MAXFILESIZE)
            return -1;
        if(((UFDTArr[fd].ptrfiletable->writeoffset)+size)<0)
        return -1;
    (UFDTArr[fd].ptrfiletable->writeoffset)=(UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)+size;
        }
    }
}

void lS_FILE()
{

    int i=0;
    PINODE temp=head;

    if(SUPPERBLOCKobj.FreeInode==MAXINODE)
    {
        printf("error Lthere is no file\n");
        return;
    }

    printf("\nfile name\tInode number\tfule sixze\t LInk count\n");
    printf("----------------------------------------------\n");
    while(temp!=NULL)
    {
        if(temp->FileType!=0)
        {

            printf("%s\t\t%d\t\t%d\t\t%d\n",temp->FileName,temp->InodeNumber,temp->FileActualSize,temp->LinkCount);

        }
        temp=temp->next;
    }
    printf("--------------------------------------------------------\n");
}

int fstat_file(int fd)
{
    PINODE temp=head;
    int i=0;
    if(fd<0)
    return -1;
    if(UFDTArr[fd].ptrfiletable==NULL) return -2;
    temp=UFDTArr[fd].ptrfiletable->ptrinode;

    printf("\n---------------STatixticval infoermnation about fiule ------\n");
    printf("FILE name :%s \n ",temo->FileName);
    printf("Inode Number : %d  \n",temp->InodeNumber);
    printf("file size : %d\n"temp->FileSize);
    printf("file actual sdize : %d\n",temp->FileActualSize);
    printf("link count : %d \n",temp->LinkCount);
    printf("reffrence count : %d\n",temp->RefernceCount);


    if(temp->permission==1)
    printf("file permision : read Only \n");
    else if(temp->permission==2)
    printf("file permision : write Only \n");
    else if(temp->permission==3)
    printf("file permision : write and read \n");
printf("---------------------------------\n\n");

return 0;
}

int stat_File(char *name)
{
    PINODE temp=head;

    int i=0;

    if(name ==NULL) return -1;

    while(temp!=NULL)
    {
        if(strcmp(name,temp->FileName)==0)
        break;
    temp=temp->next;
    }
    if(temp==NULL) return -2;



    printf("\n ------statistical infromation about filr ----\n");
    printf("file name : %s\n",temp->FileName);
    printf("Ionde number : %d\n",temp->InodeNumber);
    printf("filae size : ^%d \n",temp->FileSize);
    printf("actual file size : %d \n ",temp->FileSize);
    printf("actual actual file size : %d \n ",temp->FileActualSize);
    printf("Link count : %d \n",temp->LinkCount);
    printf("refrence count : %d \n",temp->RefernceCount);



    if(temp->permission==1)
    printf("file permision : read Only \n");
    else if(temp->permission==2)
    printf("file permision : write Only \n");
    else if(temp->permission==3)
    printf("file permision : write and read \n");
printf("---------------------------------\n\n");

return 0;
}

int truncat_File(char *name)
{
    int fd=getFDFromName(name);
    if(fd==-1) return -2;

    memset(UFDTArr[fd].ptrfiletable->ptrinode->Buffer,0,1024);

    UFDTArr[i].ptrfiletable->readoffset=0;
    UFDTArr[i].ptrfiletable->writeoffset=0;
    UFDTArr[i].ptrfiletable->ptrinode->FileActualSize=0;
}
int main()
{
    char *ptr=NULL;
    int ret=0,fd=0,count=0;
    char command[4][80],str[80],arr[1024];

    InitaliseSuperBlock();
    CreateDILB();

    while(1)              
    { 
        fllush(stdin);
        strcypy(str,"");
        printf("\n Mravellous VFS :>");

        fgets(str,80,stdin);
        count=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3],)

        if(count==1)
        {
            if(strcmp(command[0],"ls")==0)
            {
                ls_file();
            }

            else if(strcmp(command[0],"closseall")==0)
            {   
                CloseAllFile();
                printf("all files close successfully\n");
                    continue;
            }


            else if(strcmp(command[0],"clear")==0)
            {
                system("cls");
                    continue;
            }
            else if(strcmp(command[0],"exit")==0)
            {
                printf("teriminating the,marvellous virtual file syetm");
                break;
            }
            else{
                 mnprintf("\nerror:command not found");
    
            }
        }
    else if(count==2)
    {
           if(strcmpZ(command[0],"stat")==0)
           {
            ret=sta_file(command[1]);
            if(ret==-1)
            {
                printf("ERROR ; Incorrect parametrs\n");
            }
            if(ret==-2)
            {
                printf("ERROR ; ther is no such file \n");
            }
                    continue;
           
           }
            else if (strcmp(command[0],"fsat")==0)
            {
                 ret=fstat_file(command[1]);
                if(ret==-1)
                {
                    printf("ERROR ; Incorrect parametrs\n");
                }
                if(ret==-2)
                {
                    printf("ERROR ; ther is no such file \n");
                }
                    continue;
            }
            else if (strcmp(command[0],"close")==0)
            {
                 ret=CLoseFIleByName(command[1]);
               
                if(ret==-2)
                {
                    printf("ERROR ; ther is no such file \n");
                }
                    continue;
            }
            else if(strcmp(command[0],"rm")==0)
            {
                ret=rm_file(command[1]);
                if(ret==-1)
                    printf("ERROR : there is no suc file\n");
                
                    continue;
            }
            else if(strcmp(command[0],"man")==0)
            {
                man(command[1]);
            }
            else if(strcmp(command[0],"write")==0)
            {
                fd=GetFroemName(command[1]);
                if(fd==-1)
                {
                    printf("ERROR : Incorrect parametter\n");
                    
                    continue;
                }
                printf("ente the data");
                scanf("%[^n]",arr);

                ret=strlen(arr);
                if(ret==0)
                {
                    printf("ERROR : Incorrect parametter\n");
                    continue;
                }
                ret=WriteFile(fd,arr);
                if (ret==-1)
                    printf("ERROR : perrmission denend\n");
                if (ret==-2)
                    printf("ERROR : there is no suffoicient memory to  write\n");
                if (ret==-1)
                    printf("ERROR : ot is not a regulat file\n");
                
                    continue;
            }
            else if(strcmp(command[0],"truncat")==0)
            {
                ret=truncat_File(command[1]);
                if(ret==-1)
                    printf("ERROR : Incorate parameters\n");
                    continue;

            }
                else
                {
                    printf("ERROR: comamnd nor found");
                    
                                continue;
                }
    }
    else if(count==3)
    {
        ret=CreateFile(command[1],atoi(command[2]));
        if(ret>=0)
        printf("file is succesfully create with fd descriptor %d\n",ret);
        if(ret==-1)
        printf("ERRor : Incorrecxt parametters\n");
        if(ret==-1)
        printf("ERRor : there is no npdes\n");
        if(ret==-3)
        printf("ERRor : File alreday exist\n");
        if(ret==-4)
        printf("ERRor : Memor allocations failuire\n");
                    continue;
    
    } else if(count==3)
    {
       if(strcmp(command[0],"create")==0)
       {
        ret=OpenFile(command[1],atoi(command[2]));
        if(ret>=0)
        printf("file is succesfully create with fd descriptor %d\n",ret);
        if(ret==-1)
        printf("ERRor : Incorrecxt parametters\n");
        if(ret==-1)
        printf("ERRor : there is no npdes\n");
        if(ret==-3)
        printf("ERRor : File alreday exist\n");
        if(ret==-4)
        printf("ERRor : Memor allocations failuire\n");
                    continue;
    }
    else if(strcmp(command[0],"open")==0)
    {
        
        ret=OpenFile(command[1],atoi(command[2]));
        if(ret>=0)
        printf("file is succesfully open with fd descriptor %d\n",ret);
        if(ret==-1)
        printf("ERRor : Incorrecxt parametters\n");
        if(ret==-2)
        printf("ERRor : file is no prseent\n");
        if(ret==-3)
        printf("ERRor : permission deniedn exist\n");
                    continue;
    }

    
    else if(strcmp(command[0],"read")==0)
    {
        
        fd=getFDFromName(command[1]);
       if(fd==-1)
        printf("ERRor : Incorrecxt parametters\n");
    ptr=(char *)malloc(sizeof(atoi(command[2]))+1);
    if(ptr==NULL)

    {
        printf("error : memory allocation failure\n");
        continue;
    }
    ret=ReadFile(fd,ptr,atoi(command[2]));
    if(ret==-1)
        printf("error :file not existing\n");

    if(ret==-2)
        printf("error :persiison Denend\n");

    if(ret==-3)
        printf("error :Reached at end of file\n");

    if(ret==-4)
        printf("error :it us not regular file\n");

    if(ret==0)
        printf("error :file empty\n");

        if(ret>)
        {
            write(2,ptr,ret);
        }

                    continue;
    }
    else 
    {
        printf("\n Error :command not found!!\n");

                    continue;
        
    }
        
    }    
    elseif(count==4)
    {
        if(strcmp(command[0],"lseek")==0)
        {
            fd=getFDFromName(command[1]);
            if(fd==-1)
            {
                printf("error :Incorrect parameter p=\n");
                
                    continue;
            }
            ret =LseekFile(fd,atoi(command[2]),atoi(command[3]));
            if(ret==-1)
            {
                printf("error l:unalbel to  leseek !!\n");
                
            }
        }else
    {
        printf("erro : command not foudnd!!1 \n");
        
                    continue;
    }
    }
    else
    {
        printf("erro : command not foudnd!!1 \n");
        
                    continue;
    }

    }

    return 0;
}