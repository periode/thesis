require 'kramdown'
require 'erb'
require 'fileutils'

puts "time to publicize"
the_only = Time.now
remember = "#{the_only.year}/#{the_only.month}/#{the_only.day}/#{the_only.hour}-#{the_only.min}-#{the_only.sec}"
FileUtils.mkdir_p 'docs/' + remember

puts "to set everything up"
everything = []
there_is_a = /^(?!admin)(.*md)$/
Dir.glob("**/**") do | for_this_fragment |
	if there_is_a.match for_this_fragment
		everything << for_this_fragment
	end
end

fashion = %{
	<!DOCTYPE html>
	<html>
		<head>
			<meta charset="utf-8"/>
			<link rel="stylesheet" href="style.css"/>
		</head>
		<body>
			<style>
				body {
					background-color: white;
					font-family: sans-serif, serif;
				}

				.holding{
					margin: auto;
				}

				.tight{
					width: 70%;
				}

				.way {
					position: absolute;
					top: 10px;
					left: 10px;
				}
			</style>
			<div class="way">
				<a href="/index.html">back</a>
			</div>
			<div class="holding tight">
				<%= rest %>
			</div>
		</body>
	</html>
}

everything.each do | it |
	# everyone needs a place to stay
	es = /(\w*\/)\w+/
	a_home = it.match(es)
	FileUtils.mkdir_p 'docs/'+remember+'/'+a_home.to_s

	fond = File.open(it)
	form = fond.read
	rest = Kramdown::Document.new(form).to_html
	finally = ERB.new(fashion).result(binding)
	til = it.sub! '.md', '.html'
	til = remember + '/' + til
	File.write('docs/'+til, finally)
	fond.close
end

# i need to find all the years
# and then all the months
# and then all the
all = Hash.new
traces = []
express = /(\d+)\/(\d+)\/(\d+)\/(\d+-\d+-\d+)\/(.*\.html)/
files = Dir.glob("docs/**/**").reverse
files.each do | first |
	deconstruct = first.match(express)

	if deconstruct
		year = deconstruct[1]
		if !all.has_key? year
			all[year] = Hash.new # we create a new array to store all the months, only if that doesn't exist already
		end

		month = deconstruct[2]
		if !all[year].has_key? month
			all[year][month] = Hash.new
		end

		day = deconstruct[3].to_s
		if !all[year][month].has_key? day
			all[year][month][day] = Array.new
		end
		all[year][month][day] << deconstruct[5]
	end
end

puts "they need to be together"
space = %{
	<!DOCTYPE html>
	<html>
		<head>
			<meta charset="utf-8"/>
		</head>
		<body>
			<style>
				body {
					background-color: white;
					font-family: sans-serif, serif;
				}

				.holding{
					margin: auto;
				}

				.tight{
					width: 70%;
				}
			</style>
			<div class="holding tight">
				<h1>works in public</h1>
				<p>here are the continuous notes for my doctoral work at the university of sorbonne nouvelle.</p>
				<% all.each_key do | year | %>
					<% all[year].each_key do | month | %>
						<% all[year][month].each_key do | day | %>
							<h2> <%= year %> - <%= month %> - <%= day %> </h2>
							<% all[year][month][day].each do | trace | %>
								<li><a href="<%= trace %>"><%= trace %></a></li>
							<% end %>
						<% end %>
					<% end %>
				<% end %>
			</div>
		</body>
	</html>
}

public = ERB.new(space).result(binding)
File.write("docs/index.html", public)

puts "and"
puts "it's done, for now"
