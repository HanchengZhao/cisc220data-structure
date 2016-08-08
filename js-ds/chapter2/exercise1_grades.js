var grades = function(){
    this.gradesdata = [];
    this.add = add;
    this.average = average;
}

var add = function(grade){
    this.gradesdata.push(grade);
}

var average = function(){
    var total = 0;
    for(var i = 0; i < this.gradesdata.length; i++){
        total += this.gradesdata[i];
    }
    return total/ this.gradesdata.length;
}

var subject1 = new grades();

subject1.add(84);
subject1.add(95);
subject1.add(98);

console.log(subject1.average());
