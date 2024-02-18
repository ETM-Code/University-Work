#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float floatValue;
    char charValue;
} FloatAndChar;



FloatAndChar CalcMark (float ExamPercent, float LabPercent, float AssignmentPercent) {
char StudentGrade;
char ActualGrades[10];
char GradePercents[]= 
{
    "A:70\n"
    "B:60\n"
    "C:50\n"
    "D:40\n"
    "E:0"
};
float studentPercent = ExamPercent*0.5+LabPercent*0.25+AssignmentPercent*0.25;

char*token = strtok(GradePercents, "\n");
float ActualPercents[10];
for(int i=0; token!=NULL; i++){
sscanf(token, "%c:%f", &ActualGrades[i], &ActualPercents[i]);
token = strtok(NULL, "\n");
}

StudentGrade=ActualGrades[4];

for(int j=0; ActualPercents[j]!=0; j++){
    if (studentPercent>ActualPercents[j] || ActualPercents[j]-studentPercent<0.000001 /*Handles situations where the percentage achieved is equal to the grade, without relying on floating point accuracy*/) {StudentGrade=ActualGrades[j]; break;}
}

FloatAndChar Result;
Result.floatValue=studentPercent;
Result.charValue=StudentGrade;

return(Result);

}


int main() {
printf("Enter the following values as numbers. E.g. If the exam result is 70%%, enter \"70\"\n");
int continueLoop = 1;
float ExamPercent;
float LabPercent;
float AssignmentPercent;
while (continueLoop == 1) {

    printf("\n Enter Exam Result: ");
        
    scanf("%f",&ExamPercent);
    printf("\n Enter Lab Exam Result: ");
        
    scanf("%f",&LabPercent);
    printf("\n Enter Assignment Result: ");
        
    scanf("%f",&AssignmentPercent);

if (ExamPercent>=0&&ExamPercent<=100&&LabPercent>=0&&LabPercent<=100&&AssignmentPercent>=0&&AssignmentPercent<=100){
    continueLoop=0;
}
else {
    printf("There is an issue with the submitted results. Please resubmit, making sure the results are correct.\n");
}
} 
FloatAndChar result = CalcMark(ExamPercent, LabPercent, AssignmentPercent);
    float Percent = result.floatValue;
    char Grade = result.charValue;

printf("Student result is as follows:\n Grade:%c\n Percentage Scored:%f", Grade, Percent);


}