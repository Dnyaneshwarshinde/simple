import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-emp',
  template: `<input type="text" value="{{Name}}">`
})
export class EmpComponent{
  No:number;
  Name:string;
  Address:string;

  constructor() {

    this.No=1;
    this.Name="Dnyaneshwar";
    this.Address="Uplavi";

   }

  

}
