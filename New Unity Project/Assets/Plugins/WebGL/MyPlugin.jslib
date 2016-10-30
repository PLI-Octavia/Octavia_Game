var MyPlugin = {
    SendScore: function (score) {
    	console.log(score);
  		finscore = score
    }
};
mergeInto(LibraryManager.library, MyPlugin);