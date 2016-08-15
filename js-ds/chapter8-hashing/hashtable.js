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