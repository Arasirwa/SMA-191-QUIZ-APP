#include <gtk/gtk.h>
#include <string>
#include <iostream>
#include <vector>

struct Question {
    std::string question;
    std::string answer;
};

std::vector<Question> questions;
int currentQuestionIndex = 0;
int points = 0;

GtkWidget *window;
GtkWidget *label;
GtkWidget *entry;
GtkWidget *button;

void updateQuestion() {
    std::string questionText = "Question " + std::to_string(currentQuestionIndex + 1) + ": " + questions[currentQuestionIndex].question;
    gtk_label_set_text(GTK_LABEL(label), questionText.c_str());
}

void checkAnswer(GtkWidget *widget, gpointer data) {
    const gchar *userAnswer = gtk_entry_get_text(GTK_ENTRY(entry));
    if (userAnswer && questions[currentQuestionIndex].answer == userAnswer) {
        points++;
        std::cout << "Correct!\n";
    } else {
        std::cout << "Incorrect.\n";
    }
    currentQuestionIndex++;
    if (currentQuestionIndex < questions.size()) {
        updateQuestion();
        gtk_entry_set_text(GTK_ENTRY(entry), "");
    } else {
        g_print("\nTotal points: %d\n", points);
        gtk_widget_destroy(window);
    }
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    questions.push_back({"What is the capital of France?", "Paris"});
    questions.push_back({"What is the capital of Japan?", "Tokyo"});
    questions.push_back({"Which country does Canberra belong to?", "Australia"});
    questions.push_back({"What is the capital of Brazil?", "Brasilia"});
    questions.push_back({"Who was the first president of Kenya?", "Jomo Kenyatta"});
    questions.push_back({"When did Kenya gain independence?", "1963"});
    questions.push_back({"What is the capital of France?", "Paris"});
questions.push_back({"What is the capital of Japan?", "Tokyo"});
questions.push_back({"Which country does Canberra belong to?", "Australia"});
questions.push_back({"What is the capital of Brazil?", "Brasilia"});
questions.push_back({"Who was the first president of Kenya?", "Jomo Kenyatta"});
questions.push_back({"When did Kenya gain independence?", "1963"});
questions.push_back({"What is the largest ocean on Earth?", "Pacific Ocean"});
questions.push_back({"What is the tallest mountain in the world?", "Mount Everest"});
questions.push_back({"What is the largest mammal in the world?", "Blue Whale"});
questions.push_back({"Which planet is known as the Red Planet?", "Mars"});
questions.push_back({"What is the currency of Japan?", "Japanese Yen"});
questions.push_back({"Who painted the Mona Lisa?", "Leonardo da Vinci"});
questions.push_back({"Who wrote the Harry Potter series?", "J.K. Rowling"});
questions.push_back({"What is the chemical symbol for water?", "H2O"});
questions.push_back({"Who is known as the Father of Computers?", "Charles Babbage"});
questions.push_back({"Which gas do plants use for photosynthesis?", "Carbon Dioxide"});
questions.push_back({"What is the longest river in the world?", "Nile River"});
questions.push_back({"Who wrote 'To Kill a Mockingbird'?", "Harper Lee"});
questions.push_back({"What is the national animal of Australia?", "Kangaroo"});
questions.push_back({"What is the capital of Canada?", "Ottawa"});
questions.push_back({"Who discovered penicillin?", "Alexander Fleming"});
questions.push_back({"What is the main ingredient in guacamole?", "Avocado"});
questions.push_back({"Who wrote 'Romeo and Juliet'?", "William Shakespeare"});
questions.push_back({"What is the chemical symbol for gold?", "Au"});
questions.push_back({"Who was the first person to walk on the moon?", "Neil Armstrong"});
questions.push_back({"What is the largest desert in the world?", "Sahara Desert"});
questions.push_back({"Who composed 'Symphony No. 9'?", "Ludwig van Beethoven"});
questions.push_back({"What is the tallest animal in the world?", "Giraffe"});
questions.push_back({"What is the capital of South Africa?", "Pretoria"});
questions.push_back({"What is the hardest natural substance on Earth?", "Diamond"});
questions.push_back({"Who painted 'Starry Night'?", "Vincent van Gogh"});
questions.push_back({"What is the chemical symbol for iron?", "Fe"});
questions.push_back({"Who wrote 'The Great Gatsby'?", "F. Scott Fitzgerald"});
questions.push_back({"What is the fastest land animal?", "Cheetah"});
questions.push_back({"What is the capital of Italy?", "Rome"});
questions.push_back({"What is the largest bird in the world?", "Ostrich"});
questions.push_back({"What is the chemical symbol for sodium?", "Na"});
questions.push_back({"Who is known as the King of Pop?", "Michael Jackson"});
questions.push_back({"What is the currency of the United Kingdom?", "British Pound"});
questions.push_back({"Who painted 'The Last Supper'?", "Leonardo da Vinci"});
questions.push_back({"What is the chemical symbol for silver?", "Ag"});
questions.push_back({"Who was the first female Prime Minister of the United Kingdom?", "Margaret Thatcher"});
questions.push_back({"What is the capital of India?", "New Delhi"});
questions.push_back({"What is the tallest tree species in the world?", "Redwood"});
questions.push_back({"What is the chemical symbol for oxygen?", "O"});
questions.push_back({"Who wrote 'The Catcher in the Rye'?", "J.D. Salinger"});
questions.push_back({"What is the national sport of Japan?", "Sumo Wrestling"});
questions.push_back({"Who discovered gravity?", "Isaac Newton"});
questions.push_back({"What is the chemical symbol for carbon?", "C"});
questions.push_back({"Who painted 'The Scream'?", "Edvard Munch"});
questions.push_back({"What is the largest planet in our solar system?", "Jupiter"});
questions.push_back({"What is the capital of Spain?", "Madrid"});
questions.push_back({"What is the national animal of China?", "Giant Panda"});
questions.push_back({"What is the chemical symbol for lead?", "Pb"});
questions.push_back({"Who wrote 'Pride and Prejudice'?", "Jane Austen"});
questions.push_back({"What is the national sport of Canada?", "Ice Hockey"});
questions.push_back({"Who discovered electricity?", "Benjamin Franklin"});
questions.push_back({"What is the chemical symbol for potassium?", "K"});
questions.push_back({"Who painted 'The Birth of Venus'?", "Sandro Botticelli"});
questions.push_back({"What is the smallest planet in our solar system?", "Mercury"});
questions.push_back({"What is the capital of Australia?", "Canberra"});
questions.push_back({"What is the national animal of Russia?", "Russian Bear"});
questions.push_back({"What is the chemical symbol for mercury?", "Hg"});
questions.push_back({"What is the chemical symbol for hydrogen?", "H"});
questions.push_back({"Who wrote '1984'?", "George Orwell"});
questions.push_back({"What is the currency of China?", "Chinese Yuan"});
questions.push_back({"Who painted 'The Persistence of Memory'?", "Salvador Dalí"});
questions.push_back({"What is the chemical symbol for helium?", "He"});
questions.push_back({"Who discovered the theory of relativity?", "Albert Einstein"});
questions.push_back({"What is the national flower of Japan?", "Cherry Blossom"});
questions.push_back({"Who wrote 'The Lord of the Rings'?", "J.R.R. Tolkien"});
questions.push_back({"What is the capital of Spain?", "Madrid"});
questions.push_back({"What is the chemical symbol for nitrogen?", "N"});
questions.push_back({"Who composed 'Moonlight Sonata'?", "Ludwig van Beethoven"});
questions.push_back({"What is the largest island in the world?", "Greenland"});
questions.push_back({"Who wrote 'The Odyssey'?", "Homer"});
questions.push_back({"What is the chemical symbol for potassium?", "K"});
questions.push_back({"Who discovered the theory of evolution?", "Charles Darwin"});
questions.push_back({"What is the national animal of Canada?", "Beaver"});
questions.push_back({"Who painted 'The Starry Night'?", "Vincent van Gogh"});
questions.push_back({"What is the chemical symbol for calcium?", "Ca"});
questions.push_back({"Who invented the telephone?", "Alexander Graham Bell"});
questions.push_back({"What is the capital of Russia?", "Moscow"});
questions.push_back({"What is the chemical symbol for magnesium?", "Mg"});
questions.push_back({"Who wrote 'The Iliad'?", "Homer"});
questions.push_back({"What is the national bird of the United States?", "Bald Eagle"});
questions.push_back({"Who painted 'The Birth of Venus'?", "Sandro Botticelli"});
questions.push_back({"What is the chemical symbol for phosphorus?", "P"});
questions.push_back({"Who discovered electricity?", "Benjamin Franklin"});
questions.push_back({"What is the capital of Australia?", "Canberra"});
questions.push_back({"What is the chemical symbol for sulfur?", "S"});
questions.push_back({"Who wrote 'War and Peace'?", "Leo Tolstoy"});
questions.push_back({"What is the national flower of India?", "Lotus"});
questions.push_back({"Who painted 'Guernica'?", "Pablo Picasso"});
questions.push_back({"What is the chemical symbol for chlorine?", "Cl"});
questions.push_back({"Who discovered penicillin?", "Alexander Fleming"});
questions.push_back({"What is the capital of Argentina?", "Buenos Aires"});
questions.push_back({"What is the chemical symbol for neon?", "Ne"});
questions.push_back({"Who wrote 'Pride and Prejudice'?", "Jane Austen"});
questions.push_back({"What is the national animal of Australia?", "Kangaroo"});
questions.push_back({"Who painted 'The Girl with a Pearl Earring'?", "Johannes Vermeer"});
questions.push_back({"What is the chemical symbol for aluminum?", "Al"});
questions.push_back({"Who discovered America?", "Christopher Columbus"});
questions.push_back({"What is the capital of Germany?", "Berlin"});
questions.push_back({"What is the chemical symbol for silicon?", "Si"});
questions.push_back({"Who wrote 'The Divine Comedy'?", "Dante Alighieri"});
questions.push_back({"What is the national animal of China?", "Giant Panda"});
questions.push_back({"Who painted 'The Mona Lisa'?", "Leonardo da Vinci"});
questions.push_back({"What is the chemical symbol for copper?", "Cu"});
questions.push_back({"Who discovered radioactivity?", "Marie Curie"});
questions.push_back({"What is the capital of Brazil?", "Brasília"});
questions.push_back({"What is the chemical symbol for zinc?", "Zn"});
questions.push_back({"Who wrote 'The Canterbury Tales'?", "Geoffrey Chaucer"});
questions.push_back({"What is the national sport of Japan?", "Sumo Wrestling"});
questions.push_back({"Who painted 'The Persistence of Memory'?", "Salvador Dalí"});
questions.push_back({"What is the chemical symbol for gold?", "Au"});
questions.push_back({"Who discovered gravity?", "Isaac Newton"});
questions.push_back({"What is the capital of Italy?", "Rome"});
questions.push_back({"What is the largest bird in the world?", "Ostrich"});
questions.push_back({"What is the chemical symbol for sodium?", "Na"});
questions.push_back({"Who is known as the King of Pop?", "Michael Jackson"});
questions.push_back({"What is the currency of the United Kingdom?", "British Pound"});
questions.push_back({"Who painted 'The Last Supper'?", "Leonardo da Vinci"});
questions.push_back({"What is the chemical symbol for silver?", "Ag"});



    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Quiz App");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 400, 200);


    label = gtk_label_new("Welcome to the Quiz App!");
    gtk_label_set_justify(GTK_LABEL(label), GTK_JUSTIFY_CENTER);

    entry = gtk_entry_new();
    gtk_entry_set_max_length(GTK_ENTRY(entry), 50);
    gtk_entry_set_text(GTK_ENTRY(entry), "");
    gtk_entry_set_placeholder_text(GTK_ENTRY(entry), "Your answer");


    button = gtk_button_new_with_label("Next");
    g_signal_connect(button, "clicked", G_CALLBACK(checkAnswer), NULL);

    
    GtkWidget *vbox = gtk_vbox_new(TRUE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), label, TRUE, TRUE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), entry, TRUE, TRUE, 5);
    gtk_box_pack_start(GTK_BOX(vbox), button, TRUE, TRUE, 5);

    
    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_widget_show_all(window);

    
    updateQuestion();

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_main();

    return 0;
}
