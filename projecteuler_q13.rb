#Project Euler question 3
#Answer 5537376230

sum = 0 #Initiate sum to zero
infile = File.new("test.txt","r") #Open file containing the numbers
infile.each do |line| #For each line (each line is a 50 digit number) convert it into an integer
			sum+=line.to_i #and find total sum
		  end
puts sum #Print the sum
			
