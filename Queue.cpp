//Nama  : Jaka Saputra
//NPM   : G1A016020

#include <iostream>
    using namespace std;
    
  //inisialisasi
    int data = 5, head = 0, tail = 0;
    int queueData[5];
    
  //pengecekakn jika data queue penuh
    bool isFullQueue()
    {
      if(tail == data ){
        return true;
      }else{
        return false;
      }
    }
    
    //pengecekakn jika data queue kosong
    bool isEmptyQueue()
    {
      if( tail == 0 ){
        return true;
      }else{
        return false;
      }
    }
    
    
    //penambahan data antrian
    void enqueue(int num ){
    
      if( isFullQueue() ){
        cout << "Data Antian Full!!" << endl;
      }else{
        // cek apakah datanya kosong atau tidak
        if( isEmptyQueue() ){
          //jika kosong, data kan ditambahkan  
          queueData[0] = num;
          head++;
          tail++;
        }else{
          //jika tidak kosong data akan ditambahakn dibagian tail(belakang)
          queueData[tail] = num;
          tail++;
        }
      }
    
    }
    
    //penghapusan data depan pada queue
    void dequeue(){
      if( isEmptyQueue() ){
        cout << "Data Antrian Kosong!!" << endl;
      }else{
        for( int i = 0; i < tail; i++ ){
          queueData[i] = queueData[i+1];
        }
        tail--;
      }
    }
    
    //menghitung banyak data yang ada
    int countQueue(){
    
      if( isEmptyQueue() ){
        return 0;
      }else if( isFullQueue() ){
        return data;
      }else{
        return tail;
      }
    
    }
    
    //menghapus semua data/element yg ada
    void destroyQueue(){
      if( isEmptyQueue() ){
        cout << "Data Antrian Kosong!!" << endl;
      }else{
        for( int i = 0; i < data; i++ ){         
          if( tail > 1 ){
            queueData[tail - 1];
            tail--;
          }else if( tail == 1 ){
            queueData[tail - 1];
            tail = 0;
            head = 0;
          }  
        }
      }
    }
    
    
    // menampilkan data 
    void printQueue()
    {
      cout << "Total Queue Data : " << countQueue() << " data." << endl;
      if( isEmptyQueue() ){
        cout << "Data Antrian Kosong!!" << endl;
      }else{
        for( int i = 0; i < data; i++ ){
          if(queueData[i]){
            cout << queueData[i]<<endl;
          }
        }
      }
      cout << "\n" << endl;
    }
    
    int main(){
        enqueue(1);
        printQueue();
    
        enqueue(2);
        enqueue(3);
        enqueue(5);
        printQueue();
    
        enqueue(6);
        printQueue();

        dequeue();
        printQueue();
    }
