require 'kramdown'
require 'erb'
require 'fileutils'

puts "time to publicize"
the_only = Time.now # to

remember = "#{the_only.year}-#{the_only.month}-#{the_only.day}-#{the_only.hour}#{the_only.min}"
FileUtils.mkdir_p 'docs/' + remember

puts "to set everything up"
everything = []

attention = `git diff --stat --name-only && git ls-files --others --exclude-standard`
attention = attention.split("\n")

attention.each do | for_this_fragment |
	there_is_a = /^(?!admin)(.*md)$/
	if there_is_a.match for_this_fragment
		everything << for_this_fragment
		puts for_this_fragment
		puts "and"
	end
end

fashion = %{
	<!DOCTYPE html>
	<html>
		<head>
			<meta charset="utf-8"/>
			<title>works in public</title>
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
				<a href="/thesis/index.html">cover</a>
			</div>
			<div class="holding tight">
				<%= rest %>
			</div>
		</body>
	</html>
}

everything.each do | it |
	# everyone needs a place to stay
	es = /(\w*\/?\w*\/?\w*\/?)\w+/
	puts it
	a_home = it.match(es)
	FileUtils.mkdir_p 'docs/'+remember+'/'+a_home.to_s#tay

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
express = /(\d+)-(\d+)-(\d+)-(\d+)\/(.*\.html)/

files = Dir.glob("docs/**/**").sort_by { |f| File.mtime(f) }
chaos = files.reverse

chaos.each do | bit |
	deconstruct = bit.match(express)

	if deconstruct
		year = deconstruct[1]
		if !all.has_key? year
			all[year] = Hash.new # we create a new array to store all the months, only if that doesn't exist already
		end

		month = deconstruct[2]
		if !all[year].has_key? month
			all[year][month] = Hash.new
		end

		day = deconstruct[3]
		if !all[year][month].has_key? day
			all[year][month][day] = Hash.new
		end

		time = deconstruct[4]
		if !all[year][month][day].has_key? time
			all[year][month][day][time] = Array.new
		end

		all[year][month][day][time] << deconstruct[5]
	end
end

puts "they need to be together"
space = %{
	<!DOCTYPE html>
	<html>
		<head>
			<meta charset="utf-8"/>
			<title>the role of aesthetics in source code understandings</title>
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
				<h1>the role of aesthetics in source code understandings</h1>
				<p>what you see here is the automatic rendering of all the notes taken during <a href="https://pierredepaz.net">my</a> thesis. since it is a thesis on source code, i thought i might as well show its own source code.</p>
				<p>the main question i'm asking is: <i>how do aesthetics enable understanding in source code, and what kind of understanding might derive from their presence, or absence?</i> this touches upon issues of style, clarity, epistemology, psychology, programming and literature.</p>
				<p>this doctoral work is being done at the university of sorbonne nouvelle, under the joint direction of alexandre gefen and nick montfort.</p>
                                <p>you can start with the <a href="three.pdf" target="_blank">most recent summary</a>, or the whole <a href="https://github.com/periode/thesis">github repository</a>.</p>
				<hr/>
				<% all.each_key do | year | %>
					<% all[year].each_key do | month | %>
						<% all[year][month].each_key do | day | %>
							<h2> <%= year %> - <%= month %> - <%= day %> </h2>
							<% all[year][month][day].each_key do | time | %>
								<h3> <%= time %> </h3>
								<% all[year][month][day][time].each do | trace | %>
									<li><a href="<%= year+"-"+month+"-"+day+"-"+time+"/"+trace %>"><%= trace %></a></li>
								<% end %>
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

puts "then"
puts "it's done, for now"
