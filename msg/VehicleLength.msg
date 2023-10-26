uint16 vehicle_length_value			            	# Fahrzeuglaenge; wenn ein Anhaenger angehaengt ist soll dieser auch erkannt werden und die Laenge (vorne/hinten) entsprechend angepasst werden 
						                        # Von 0-1023 in 1/10 Metern; 1023= Information nicht vorhanden
						                        # Einheit 0,1 Meter
						                        
uint8 vehicle_length_confidence_indication	    		# Hier wird angezeigt ob ein Anhaenger erkannt wurde oder nicht und ob die Laenge bekannt ist, nachfolgend der jeweilige Status
						                        # Werte von 0 bis 4; 0=kein Trailer vorhanden; 1= Trailer erkannt mit Laenge des Trailers; 2=Trailer erkannt Laenge unbekannt;
						                        # 3=Trailer Praesenz ist unbekannt; 4= Keine Information vorhanden
