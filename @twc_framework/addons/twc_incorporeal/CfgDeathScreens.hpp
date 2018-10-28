class CfgDeathScreens {
	class bleed_out {
		text = "bled out";
		sound = "twc_bleed_out";
		fadeBegins = 30; // when's the music start to fade? (duration = out - begins).
		fadeOut = 61;
	};
	
	class cardiac_arrest {
		text = "suffered a cardiac arrest";
		sound = "twc_cardiac_arrest";
		fadeBegins = 30;
		fadeOut = 50;
	};
	
	class clinical_death {
		text = "was declared clinically dead";
		sound = "clinical_death";
		fadeBegins = 30;
		fadeOut = 88;
	};
	
	class drowned {
		text = "drowned";
		sound = "twc_drowned";
		fadeBegins = 30;
		fadeOut = 67;
	};
	
	class instant_death {
		text = "was killed instantaneously";
		sound = "twc_instant_death";
		fadeBegins = 30;
		fadeOut = 63;
	};
	
	class overdose {
		text = "died via overdose";
		sound = "twc_overdose";
		fadeBegins = 30;
		fadeOut = 80;
	};
	
	class overdose_morphine: overdose {
		text = "died via morphine overdose";
	};
	
	class overdose_epinephrine: overdose {
		text = "died via epinephrine overdose";
	};
};