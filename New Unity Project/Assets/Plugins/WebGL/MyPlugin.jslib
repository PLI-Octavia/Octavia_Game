var MyPlugin = {
    SendScore: function (score) {
    	EndScore.endGame(score);
    }
};
mergeInto(LibraryManager.library, MyPlugin);