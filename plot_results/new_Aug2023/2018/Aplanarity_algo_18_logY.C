void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(0,0,1,1);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetFillStyle(4000);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetFrameFillStyle(1000);
   Aplanarity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.97103,1.052419,16.45454);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(7.780282e+13);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",50,0,1);
   st_stack_159->SetMinimum(0.001117881);
   st_stack_159->SetMaximum(3.250757e+14);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetRange(1,50);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetLabelSize(0.035);
   st_stack_159->GetXaxis()->SetTitleSize(0.035);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/0.02");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetLabelSize(0.05);
   st_stack_159->GetYaxis()->SetTitleSize(0.057);
   st_stack_159->GetYaxis()->SetTitleOffset(1.2);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetLabelSize(0.035);
   st_stack_159->GetZaxis()->SetTitleSize(0.035);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1548758);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,196915.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,40216.9);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,12896.33);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3050.583);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,580.825);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,197.0406);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,82.37582);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,12.96004);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,6.18835);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,6.844003);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.624065);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,29864.92);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,7031.816);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3533.798);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2614.403);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,992.8584);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,425.0381);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,78.06427);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,47.38037);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,9.183731);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,6.18835);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,6.844003);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.624065);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,10495.58);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1358.802);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,317.9592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,85.979);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.4057);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.21182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.265889);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.140698);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.822233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.7969484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.9321505);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2204194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.05527283);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.002935879);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,47.68344);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,16.63054);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,8.770001);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,4.235291);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,3.844836);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.409454);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.6807785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.4594445);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.6933464);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4102729);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4418942);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1481518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.05527283);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.09441023);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,205941.4);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,25568.51);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,5140.177);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1371.89);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,440.8506);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,178.0026);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,77.02979);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,37.66274);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,20.77072);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,10.6625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.155635);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.516092);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.964839);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.416525);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.5866338);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2520873);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.07482353);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2847521);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2815688);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.06584265);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,133.3326);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,46.63905);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,20.89177);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,10.7228);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.702585);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.734305);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.555401);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.735493);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.214045);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.8305526);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.7028591);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4887792);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3544651);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3160551);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1819209);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1290561);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.07482353);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1380413);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1425144);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.06584265);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,10396.69);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1193.525);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,257.8315);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,57.67727);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,14.91589);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,4.630401);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.4158895);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.08952303);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.09253155);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.6194864);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,87.37052);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,31.52286);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,16.22607);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,7.086619);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,6.020833);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.434789);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2402284);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.08952303);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.09253155);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.3206346);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,3207.424);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,367.465);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,55.84221);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,24.14236);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,1.226192);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,0.7516523);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,1.153135);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.141324);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,89.87341);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,28.50782);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,8.454011);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.33666);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.5423289);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,0.5055792);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.6459741);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.1096877);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_6 = new TH1D("VbbHcc_algo_Aplanarity_stack_6","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,34.67855);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,4.009627);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.9999373);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,5.339032);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,1.566755);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.7218893);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_7 = new TH1D("VbbHcc_algo_Aplanarity_stack_7","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,82.63186);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,7.230234);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,2.252594);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(8,0.3455143);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,5.721233);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.714669);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.9246244);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(8,0.3455143);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_8 = new TH1D("VbbHcc_algo_Aplanarity_stack_8","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,144.1264);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,10.29288);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.456977);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.520945);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.275309);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,6.626184);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.816712);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.8777741);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.38734);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.275309);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_9 = new TH1D("VbbHcc_algo_Aplanarity_stack_9","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,104.3307);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,7.460113);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,1.134052);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2133599);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.09213816);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01322794);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.008420504);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(13,0.002940734);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.6254095);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.1582805);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.06383217);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02573506);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01648428);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006086751);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.005056403);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(13,0.002940734);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,44.41181);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.940661);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.9655706);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2040139);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.07258716);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.0180886);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006956118);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003886246);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.002469623);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.001103764);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003929548);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001988702);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1562999);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.05161245);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02280396);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.01039772);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.006205089);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.00308359);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001873401);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001385919);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.001117406);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0007070722);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003929548);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001988702);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_11 = new TH1D("VbbHcc_algo_Aplanarity_stack_11","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.7035329);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.07156953);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.01078017);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.002203227);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.0425611);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.01476326);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.005102911);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.002203227);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_12 = new TH1D("VbbHcc_algo_Aplanarity_stack_12","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.3603853);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03147545);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005538277);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.003560232);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0004011703);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.01183307);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.003211667);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001334844);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.001096761);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0004011703);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Aplanarity__436 = new TH1D("VbbHcc_algo_Aplanarity__436","",50,0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(0,1);
   VbbHcc_algo_Aplanarity__436->SetBinContent(1,1782165);
   VbbHcc_algo_Aplanarity__436->SetBinContent(2,244724);
   VbbHcc_algo_Aplanarity__436->SetBinContent(3,52859);
   VbbHcc_algo_Aplanarity__436->SetBinContent(4,12975);
   VbbHcc_algo_Aplanarity__436->SetBinContent(5,3403);
   VbbHcc_algo_Aplanarity__436->SetBinContent(6,1037);
   VbbHcc_algo_Aplanarity__436->SetBinContent(7,404);
   VbbHcc_algo_Aplanarity__436->SetBinContent(8,176);
   VbbHcc_algo_Aplanarity__436->SetBinContent(9,88);
   VbbHcc_algo_Aplanarity__436->SetBinContent(10,51);
   VbbHcc_algo_Aplanarity__436->SetBinContent(11,29);
   VbbHcc_algo_Aplanarity__436->SetBinContent(12,18);
   VbbHcc_algo_Aplanarity__436->SetBinContent(13,15);
   VbbHcc_algo_Aplanarity__436->SetBinContent(14,10);
   VbbHcc_algo_Aplanarity__436->SetBinContent(15,7);
   VbbHcc_algo_Aplanarity__436->SetBinContent(16,1);
   VbbHcc_algo_Aplanarity__436->SetEntries(2098012);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__436->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__436->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__436->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__436->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__436->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__436->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__436->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1317[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1317[50] = {
   1779210,
   225437.7,
   45996.54,
   14436.96,
   3538.422,
   774.4528,
   278.9207,
   121.7595,
   35.55546,
   11.55308,
   8.707665,
   9.92506,
   8.811784,
   1.471798,
   3.213634,
   0.2520873,
   0.07482353,
   0.2847521,
   0.2815688,
   0.06584265,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1317[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1317[50] = {
   29865.52,
   7032.119,
   3533.918,
   2614.445,
   992.9007,
   425.0595,
   78.11209,
   47.41584,
   9.289539,
   0.9309694,
   0.8899933,
   6.20939,
   6.853177,
   0.3208519,
   2.632057,
   0.1290561,
   0.07482353,
   0.1380413,
   0.1425144,
   0.06584265,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1317,Graph_from_VbbHcc_algo_Aplanarity_fy1317,Graph_from_VbbHcc_algo_Aplanarity_fex1317,Graph_from_VbbHcc_algo_Aplanarity_fey1317);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1317 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1317","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMinimum(1989.983);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetMaximum(1989983);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1317);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Aplanarity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__437 = new TH1D("data_mc_ratio__437","",50,0,1);
   data_mc_ratio__437->SetBinContent(1,1.001661);
   data_mc_ratio__437->SetBinContent(2,1.08555);
   data_mc_ratio__437->SetBinContent(3,1.149195);
   data_mc_ratio__437->SetBinContent(4,0.8987347);
   data_mc_ratio__437->SetBinContent(5,0.9617281);
   data_mc_ratio__437->SetBinContent(6,1.33901);
   data_mc_ratio__437->SetBinContent(7,1.44844);
   data_mc_ratio__437->SetBinContent(8,1.445472);
   data_mc_ratio__437->SetBinContent(9,2.475007);
   data_mc_ratio__437->SetBinContent(10,4.414406);
   data_mc_ratio__437->SetBinContent(11,3.330399);
   data_mc_ratio__437->SetBinContent(12,1.813591);
   data_mc_ratio__437->SetBinContent(13,1.702266);
   data_mc_ratio__437->SetBinContent(14,6.794412);
   data_mc_ratio__437->SetBinContent(15,2.178219);
   data_mc_ratio__437->SetBinContent(16,3.96688);
   data_mc_ratio__437->SetBinError(1,0.0007503205);
   data_mc_ratio__437->SetBinError(2,0.00219438);
   data_mc_ratio__437->SetBinError(3,0.004998438);
   data_mc_ratio__437->SetBinError(4,0.007890015);
   data_mc_ratio__437->SetBinError(5,0.01648623);
   data_mc_ratio__437->SetBinError(6,0.04158095);
   data_mc_ratio__437->SetBinError(7,0.0720626);
   data_mc_ratio__437->SetBinError(8,0.1089566);
   data_mc_ratio__437->SetBinError(9,0.2638366);
   data_mc_ratio__437->SetBinError(10,0.6181404);
   data_mc_ratio__437->SetBinError(11,0.6184396);
   data_mc_ratio__437->SetBinError(12,0.4274675);
   data_mc_ratio__437->SetBinError(13,0.4395232);
   data_mc_ratio__437->SetBinError(14,2.148582);
   data_mc_ratio__437->SetBinError(15,0.8232895);
   data_mc_ratio__437->SetBinError(16,3.96688);
   data_mc_ratio__437->SetMinimum(0.4);
   data_mc_ratio__437->SetMaximum(1.6);
   data_mc_ratio__437->SetEntries(35.42808);
   data_mc_ratio__437->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__437->SetLineColor(ci);
   data_mc_ratio__437->SetLineWidth(2);
   data_mc_ratio__437->SetMarkerStyle(20);
   data_mc_ratio__437->SetMarkerSize(1.2);
   data_mc_ratio__437->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__437->GetXaxis()->SetRange(1,50);
   data_mc_ratio__437->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__437->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__437->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__437->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__437->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__437->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__437->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__437->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__437->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1318[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1318[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1318[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1318[50] = {
   0.01678584,
   0.03119318,
   0.0768301,
   0.1810938,
   0.2806055,
   0.5488514,
   0.2800513,
   0.3894221,
   0.261269,
   0.0805819,
   0.102208,
   0.6256275,
   0.7777287,
   0.218,
   0.8190282,
   0.5119501,
   1,
   0.4847773,
   0.5061441,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1318,Graph_from_mc_statistical_error_fy1318,Graph_from_mc_statistical_error_fex1318,Graph_from_mc_statistical_error_fey1318);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1318 = new TH1F("Graph_Graph_from_mc_statistical_error1318","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1318->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1318->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1318->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1318->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1318);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
