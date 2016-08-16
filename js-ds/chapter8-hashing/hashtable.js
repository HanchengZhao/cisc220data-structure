function HashTable(){
    this.table = new Array(137);
    this.simpleHash = simpleHash;
    this.showDistro = showDistro;
    this.put = put;
}

function simpleHash(data){
    var total = 0;
    for(var i = 0; i < data.length; ++i){
        total += data.charCodeAt(i);  //The charCodeAt() method returns an integer between 0 and 65535 representing the UTF-16 code unit at the given index 
    }
    return total % this.table.length;
}

function put(data){
    var pos = this.simpleHash(data);
    this.table[pos] = data;
}

function showDistro() {
    var n = 0;
    for(var i = 0; i < this.table.length; ++i ){
        if(this.table[i] != undefined){
            console.log(i + ': ' +this.table[i]);
        }
    }
    // body...
}


var someNames = ["David", "Jennifer", "Donnie", "Raymond",
"Cynthia", "Mike", "Clayton", "Danny", "Jonathan"];
var hTable = new HashTable();
for (var i = 0; i < someNames.length; ++i) {
    hTable.put(someNames[i]);
    }
    
hTable.showDistro();