var MyPlugin = {
    SendScore: function (score) {
    	alert("ttot")
    	EndScore.endGame(score);
    }
};
mergeInto(LibraryManager.library, MyPlugin);