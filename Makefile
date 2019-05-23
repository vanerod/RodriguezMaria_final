all: plot.git datos.dat RodriguezMaria_final_15.x

plot.git: datos_v.dat graficar.py
	python3 graficar.py

datos_v.dat: RodriguezMaria_final_15.x
	./RodriguezMaria_final_15.x

RodriguezMaria_final_15.x: RodriguezMaria_final_15.cpp
	g++ RodriguezMaria_final_15.cpp -o RodriguezMaria_final_15.x

clean:
	rm -rf *.x *.dat *.png
