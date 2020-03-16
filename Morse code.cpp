    main () {
    int size;
    cin >> size;
    vector <string> words(size);
    for (int i=0; i < size; i++){
        string w;
        cin >> w;
        words.push_back(w);
    }
    unordered_set <string> coded;
    unordered_map <char, string> morse = {{'a', ".-"},{'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}};
    for (int i=0; i < words.size(); i++) {
        string word = "";
        for (int j=0; j < words[i].size(); j++){
            word +=morse[j];
    }
    coded.insert(word);
    }
    for (auto now: coded) {
        cout << now << " ";
    }
    system ("pause")
    return 0;
    }
