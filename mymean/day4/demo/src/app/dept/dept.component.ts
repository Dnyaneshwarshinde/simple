import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-dept',
  templateUrl: './dept.component.html',
  styleUrls: ['./dept.component.css']
})
export class DeptComponent{
depts=[];
 msg;
  constructor() { 
this.depts=[

  {"DNo": 11, "DName": "IT", "DCity": "pune"},
  {"DNo": 12, "DName": "mech", "DCity": "kolhapur"},
  {"DNo": 13, "DName": "elect", "DCity": "Karad"}


]

  }
  DoSomething()
    {
      //this.msg="Hello..";
   //console.log("Hello");
this.depts.push({"DNo": 10, "DName": "admin", "DCity": "pune"});
     // this.depts.splice(0,1);
    }


  }


