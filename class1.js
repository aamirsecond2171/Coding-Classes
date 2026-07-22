// a= 1;
// for(let i=1;i<=100;i++){
//     console.log(a);
//     a++;
// }

// for-of loop
// str= "AAMIR";
// for(let x of str){
//     console.log(x);
// }

// alert("Game");
// let gnum = 66;
// let unum = prompt("Enter a number:");
// while (unum != gnum){
//    unum = prompt("You entered wrong number, try again:");
// }
// console.log("congratulations, you won.");


//to find length of a string
// let x= "AAMIR";
// console.log(x.length);


//to recieve a particular character from a string
// let x = "AAMIR";
// console.log(x[2]); //M


//practice
// fname= prompt("Enter your first name:");
// lname= prompt("Enter your last name:");
// fullname= fname + lname;
// Name=fullname.toLowerCase();
// len= fullname.length;
// username= console.log(`@${Name}${len}`);


//Loop over an array
// let marks =[94,34,23,46,89];
// let a = marks.length;
// for(let i=0; i<a; i++){
//     console.log(i,"=",marks[i]);
// } 

//practice
// let marks =[85,97,44,37,76,60];
// let len= marks.length;
// let total=0;
// for(let i of marks){
//     total+=i;
// }
// let avg= total/len;
// console.log(`The avarage marks is ${avg}`);

//practice
// let prices = [250,645,300,900,50];
// let offer = 10/100;
// let len=prices.length;
// for(let i=0; i<len; i++){
//     x=prices[i];
//     oprice=offer*x;
//     rprice=prices[i]-oprice;
//     prices[i]=rprice;
// }


//practice
// let arr=["bloomberg","microsoft","uber","google","IBM","netflix"];
// console.log(arr.shift());
// console.log(arr);
// console.log(arr.splice(1,1,"ola"));
// console.log(arr);
// arr.push("Amazon");
// console.log(arr);

//arrow function
// const arr = (a,b)=>{
//     console.log(a+b);
// }


//practice
// function vowels(s){
//     let n =0;
//     for(let i of s){
//         if(i=="a" || i=="A" ){
//             n+=1;
//         } else if(i=="e" || i=="E" ){
//             n+=1;
//         }  else if(i=="i" || i=="I" ){
//             n+=1;
//         }  else if(i=="o" || i=="O" ){
//             n+=1;
//         }  else if(i=="u" || i=="U" ){
//             n+=1;
//         }
//     } 
//     return n;
// }


//practice2
// const vowel= (s)=>{
//      let n =0;
//     for(let i of s){
//         if(i=="a" || i=="A" ){
//             n+=1;
//         } else if(i=="e" || i=="E" ){
//             n+=1;
//         }  else if(i=="i" || i=="I" ){
//             n+=1;
//         }  else if(i=="o" || i=="O" ){
//             n+=1;
//         }  else if(i=="u" || i=="U" ){
//             n+=1;
//         }
//     } 
//     return n;
// }

//forEach loop in array
// let no=[12,23,34,45,56];
// let x=0;
// no.forEach(function add(a){
//     x+=a;
// });
// console.log(x);

// no.forEach( add =(a)=>{
//     x+=a;
// });
// console.log(x);

//practice
// let arr = [12,23,34,45,56];
// arr.forEach(function square(a){
//     console.log(`Square of ${a} = ${a*a}`);
// });


//filter
// let arr =[12,23,34,45,56,67,78,89,90];
// let newArr = arr.filter( (i)=>{
//     return i%2 === 0;
// });
// console.log(arr);
// console.log(newArr);


//reduce
// let arr =[1,2,3,4,5];
// const output = arr.reduce((pre,curr)=>{
//     return pre + curr;
// })
// console.log(output);


//practice
// let marks=[69,59,70,96,80,92];
// let aGrade= marks.filter( grade = (x)=>{
//     return x>90;
// })
// console.log(aGrade);


//practice2
// let n = prompt("enter any no:");
// let list =[];
// for(let i=1;i<=n;i++){
//     list.push(i);
// }
// console.log(list);
// const sum = list.reduce((pre, curr) =>{
//     return pre + curr;
// });
// console.log(`The sum of the numbers from 1-${n} = ${sum}.`)
// const product = list.reduce((pre, curr) =>{
//     return pre * curr;
// });
// console.log(`The product of the numbers from 1-${n} = ${product}.`)


// practice 1
// let h3 = document.querySelector("h3");
// console.dir(h3.innerText);
// h3.innerText= h3.innerText+ " From google";

//practice 2
// let divs = document.querySelectorAll(".name");
// console.log(divs);
// divs[0].innerText= "AADARSH";
// divs[1].innerText= "AAMIR";
// divs[2].innerText= "ALTAF";

//Attribute
// let div= document.querySelector("div");
// let classname = div.getAttribute("class");
// console.log(classname);

// let div= document.querySelector("div");
// let classname = div.setAttribute("class", "friends");
// console.log(classname);
