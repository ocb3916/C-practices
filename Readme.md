OH's Pratices Repository
===

<p align="center">
<img src="https://user-images.githubusercontent.com/45858414/78417894-df6bfe00-7671-11ea-9e33-dfbc063d73d7.png" width="50%">
</p>


<h1 align="center">
의뢰서
</h1><br><br><br>
<h3 align="center">
예약시스템 만들기
</h3><br><br>
<p>
 본 의뢰서는 오차해를 갑으로 지칭하며 오찬빈을 을로 지칭한다.<br>
갑은 을에게 'C를 기반으로 만드는 호실 예약 시스템' 의뢰한다.<br>
의뢰서의 내용은 다음과 같다.
</p><br><br><p>
 1. 예약시스템의 인사말은 '어서오세요! 오가네 별장입니다.' 이다.<br>
 2. 인사말 후 바로 밑에 기능 선택 문구가 나온다.<br>
 3. 기능 선택 문구는 다음과 같다.<br><br>
기능 메뉴
	<ul>
		<li>1. 예약</li>
		<li>2. 예약 확인</li>
		<li>3. 종료 </li>
	</ul>
 4. 예약시스템의 기본 기능은 '입출력'으로 입력은 5, 출력은 6 내용과 같다.<br>
 5. 입력은 기능 메뉴에서 1번을 누를 시 활성화 되며 다음과 같은 UI로 입력 한다.
	<ul>
		<li>아이디 : och5351 </li>
		<li>이름 : 오찬해</li>
		<li>호실 : 402</li>
		<li>예약일[연도,월,일 순으로 적어주세요(ex. 20200415)] : 20200415 </li>
	</ul>
데이터 타입은 아래와 같다.<br>
아이디(char), 이름(char), 호실(int), 예약일(int)<br>
중복 아이디 입력 시 입력을 할 수 없어야 한다.<br>
 6. 출력은 기능 메뉴에서 2번을 누를 시 활성화 되며, 아이디로 검색을 하여 다음과 같이 출력된다.<br><br>
	'오찬해님 반갑습니다. 예약하신 정보는 다음과 같습니다.'
	<ul>
		<li>아이디 : och5351 </li>
		<li>이름 : 오찬해</li>
		<li>호실 : 402</li>
		<li>예약일 : 20200415 </li>
	</ul>
 7. 기능 메뉴의 3번을 누를 시 프로그램은 종료된다.<br>
 8. 예약 시스템은 방은 최소 50명 이상이 예약 할 수 있어야 한다.

본 의뢰서는 을이 2020년 04월 20일까지 수행해야 한다.<br>
을이 약속기한을 넘길 시 그 시점 부터 15일간 갑은 을에게 재촉문의를 한다.<br>
을이 재촉 문의를 하는 동안 만들 지 못할 시 미래에 보상은 전혀 받을 수 없다.<br>
미래에 대한 보상은 다음과 같다. (신형 맥북 에어)
</p>

Collaborator
=== 
    * 오찬빈
    * 오찬해 

Chan-bin History
===


Chan-hae History
===
> ### 2020-04-08
     Update Readme.md

