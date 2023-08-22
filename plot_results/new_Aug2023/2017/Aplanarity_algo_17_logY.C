void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(0,0,1,1);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.964001,1.052419,16.14262);
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
   st->SetMaximum(4.137181e+13);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",50,0,1);
   st_stack_158->SetMinimum(0.001135286);
   st_stack_158->SetMaximum(1.705901e+14);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetRange(1,50);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetLabelSize(0.035);
   st_stack_158->GetXaxis()->SetTitleSize(0.035);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/0.02");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetLabelSize(0.05);
   st_stack_158->GetYaxis()->SetTitleSize(0.057);
   st_stack_158->GetYaxis()->SetTitleOffset(1.2);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetLabelSize(0.035);
   st_stack_158->GetZaxis()->SetTitleSize(0.035);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1173254);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,146034);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,35687.66);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,7565.632);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3575.091);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,643.5055);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,378.4002);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,11.71824);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,9.013856);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,17.27555);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4.304069);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,241.5156);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,1.825068);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,36394.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,4742.256);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,2626.387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1097.834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1504.331);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,250.4812);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,290.181);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,6.874213);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,6.387391);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,17.27555);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,4.304069);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,236.8033);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1.825068);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(106115);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,7910.911);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1108.477);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,247.6016);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,60.50779);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,25.01519);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,7.014654);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.47666);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.438601);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.198962);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.2811819);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.5171776);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3000766);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.0251266);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.02187584);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,36.29238);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,13.41538);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,6.353394);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.060912);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.091783);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.013358);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.7102565);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.4319192);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.4792451);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1082949);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3597835);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2016807);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.0251266);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.02187584);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(142925);

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
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.08717088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,150534.7);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,19458.78);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,3903.971);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1056.003);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,342.9136);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,131.589);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,58.04237);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,26.881);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,13.56199);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,8.159049);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,4.324614);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,2.752368);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.864031);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.7693777);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.4087682);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2980184);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.2197594);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2702604);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.1432011);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.0358719);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04673127);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.08717088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,98.12484);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,34.70862);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,15.35965);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,7.902273);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,4.443533);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,2.729528);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,1.780405);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.199504);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.8517376);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.6552765);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.4683578);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.3794408);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3153327);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.1986397);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1539396);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1178467);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1035344);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1278986);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.08953724);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.0358719);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04673127);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3114170);

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
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,6926.737);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,876.9807);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,173.2163);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,41.13268);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,10.66974);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,2.971538);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.6773113);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.593193);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1097655);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1060274);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.0401489);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.4484253);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.02783533);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,55.59026);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,24.94733);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,10.08299);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.712963);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.026516);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.8333056);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2907356);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.2940431);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.07765459);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1060274);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.0401489);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.305904);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.02783533);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(54777);

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
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2378.584);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,296.9372);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,53.30918);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,15.56311);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,2.823364);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.017985);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.1790557);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.01238512);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.08410375);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,52.24537);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,22.84158);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,10.37348);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,3.810581);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.628899);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.347527);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.1462967);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.01238512);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.08410375);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(15759);

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
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,23.24009);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,1.196786);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.3528268);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.2291478);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,2.702598);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.6044425);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.3528268);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2291478);
   VbbHcc_algo_Aplanarity_stack_6->SetEntries(83);

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
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,56.61872);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,7.209356);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.268921);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.4820855);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,3.807657);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.318349);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.5794176);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.2883615);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(272);

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
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,91.08254);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,10.33798);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,1.788141);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.4761877);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.2598602);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,4.734621);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.579141);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.6835033);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3383431);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.2598602);
   VbbHcc_algo_Aplanarity_stack_8->SetEntries(443);

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
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,64.77901);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,5.103571);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.764772);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.1741914);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.04621323);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.01605005);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.003886773);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.002512017);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001430525);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3222793);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.08794043);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.03399979);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.01662129);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.008306846);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.004897749);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002248049);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.001779214);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001248212);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001430525);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(49206);

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
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,30.88893);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,3.436287);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.6715656);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1418941);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05048522);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01258084);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.004838061);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.002702929);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001717652);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0007676805);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002733046);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001383166);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1087084);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03589706);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01586042);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.007231732);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004315712);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002144673);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001302972);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0009639229);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.000777169);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004917769);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002733046);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001383166);
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
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.5437226);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04020391);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.004457967);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.0008168461);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.02908178);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.00748989);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.002536375);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.0008168461);
   VbbHcc_algo_Aplanarity_stack_11->SetEntries(413);

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
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2454051);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.02761144);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.005687859);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0006465882);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0005423052);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.007044993);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.002349833);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001067378);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0003332643);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.0003291566);
   VbbHcc_algo_Aplanarity_stack_12->SetEntries(1460);

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
   
   TH1D *VbbHcc_algo_Aplanarity__433 = new TH1D("VbbHcc_algo_Aplanarity__433","",50,0,1);
   VbbHcc_algo_Aplanarity__433->SetBinContent(1,200582);
   VbbHcc_algo_Aplanarity__433->SetBinContent(2,26504);
   VbbHcc_algo_Aplanarity__433->SetBinContent(3,6100);
   VbbHcc_algo_Aplanarity__433->SetBinContent(4,1589);
   VbbHcc_algo_Aplanarity__433->SetBinContent(5,522);
   VbbHcc_algo_Aplanarity__433->SetBinContent(6,185);
   VbbHcc_algo_Aplanarity__433->SetBinContent(7,55);
   VbbHcc_algo_Aplanarity__433->SetBinContent(8,35);
   VbbHcc_algo_Aplanarity__433->SetBinContent(9,14);
   VbbHcc_algo_Aplanarity__433->SetBinContent(10,7);
   VbbHcc_algo_Aplanarity__433->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__433->SetBinContent(12,3);
   VbbHcc_algo_Aplanarity__433->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(14,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__433->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__433->SetEntries(235659);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity__433->SetLineColor(ci);
   VbbHcc_algo_Aplanarity__433->SetLineWidth(2);
   VbbHcc_algo_Aplanarity__433->SetMarkerStyle(20);
   VbbHcc_algo_Aplanarity__433->SetMarkerSize(1.2);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity__433->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity__433->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity__433->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fx1315[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fy1315[50] = {
   1341273,
   167802.6,
   40070.61,
   8740.343,
   3956.87,
   787.1273,
   440.6053,
   40.63625,
   24.0666,
   8.560842,
   22.24187,
   7.805077,
   243.3796,
   0.7693777,
   2.258962,
   0.3198942,
   0.2197594,
   0.2980957,
   0.1432011,
   0,
   0.0358719,
   0.04673127,
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fex1315[50] = {
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
   Double_t Graph_from_VbbHcc_algo_Aplanarity_fey1315[50] = {
   36394.91,
   4742.523,
   2626.479,
   1097.888,
   1504.343,
   250.5031,
   290.1875,
   6.997616,
   6.463849,
   0.6726905,
   17.2859,
   4.33627,
   236.8035,
   0.1986397,
   1.831721,
   0.11986,
   0.1035344,
   0.1308925,
   0.08953724,
   0,
   0.0358719,
   0.04673127,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Aplanarity_fx1315,Graph_from_VbbHcc_algo_Aplanarity_fy1315,Graph_from_VbbHcc_algo_Aplanarity_fex1315,Graph_from_VbbHcc_algo_Aplanarity_fey1315);
   gre->SetName("Graph_from_VbbHcc_algo_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Aplanarity1315 = new TH1F("Graph_Graph_from_VbbHcc_algo_Aplanarity1315","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMinimum(1515.434);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMaximum(1515434);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Aplanarity1315);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__434 = new TH1D("data_mc_ratio__434","",50,0,1);
   data_mc_ratio__434->SetBinContent(1,0.149546);
   data_mc_ratio__434->SetBinContent(2,0.1579475);
   data_mc_ratio__434->SetBinContent(3,0.1522313);
   data_mc_ratio__434->SetBinContent(4,0.1818006);
   data_mc_ratio__434->SetBinContent(5,0.1319225);
   data_mc_ratio__434->SetBinContent(6,0.2350319);
   data_mc_ratio__434->SetBinContent(7,0.1248283);
   data_mc_ratio__434->SetBinContent(8,0.8612999);
   data_mc_ratio__434->SetBinContent(9,0.5817191);
   data_mc_ratio__434->SetBinContent(10,0.8176766);
   data_mc_ratio__434->SetBinContent(11,0.2248012);
   data_mc_ratio__434->SetBinContent(12,0.3843652);
   data_mc_ratio__434->SetBinContent(13,0.008217616);
   data_mc_ratio__434->SetBinContent(14,2.599503);
   data_mc_ratio__434->SetBinContent(15,0.8853623);
   data_mc_ratio__434->SetBinContent(17,4.550432);
   data_mc_ratio__434->SetBinContent(18,6.709254);
   data_mc_ratio__434->SetBinError(1,0.0003339096);
   data_mc_ratio__434->SetBinError(2,0.0009701907);
   data_mc_ratio__434->SetBinError(3,0.001949122);
   data_mc_ratio__434->SetBinError(4,0.004560721);
   data_mc_ratio__434->SetBinError(5,0.005774089);
   data_mc_ratio__434->SetBinError(6,0.01727989);
   data_mc_ratio__434->SetBinError(7,0.01683184);
   data_mc_ratio__434->SetBinError(8,0.1455863);
   data_mc_ratio__434->SetBinError(9,0.155471);
   data_mc_ratio__434->SetBinError(10,0.3090527);
   data_mc_ratio__434->SetBinError(11,0.1005342);
   data_mc_ratio__434->SetBinError(12,0.2219134);
   data_mc_ratio__434->SetBinError(13,0.005810732);
   data_mc_ratio__434->SetBinError(14,1.838127);
   data_mc_ratio__434->SetBinError(15,0.6260457);
   data_mc_ratio__434->SetBinError(17,4.550432);
   data_mc_ratio__434->SetBinError(18,4.744159);
   data_mc_ratio__434->SetMinimum(0.4);
   data_mc_ratio__434->SetMaximum(1.6);
   data_mc_ratio__434->SetEntries(5.713763);
   data_mc_ratio__434->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__434->SetLineColor(ci);
   data_mc_ratio__434->SetLineWidth(2);
   data_mc_ratio__434->SetMarkerStyle(20);
   data_mc_ratio__434->SetMarkerSize(1.2);
   data_mc_ratio__434->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__434->GetXaxis()->SetRange(1,50);
   data_mc_ratio__434->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__434->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__434->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__434->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__434->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__434->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__434->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__434->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__434->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__434->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__434->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__434->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__434->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__434->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__434->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1316[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1316[50] = {
   0.02713461,
   0.02826252,
   0.06554627,
   0.1256116,
   0.3801851,
   0.3182498,
   0.658611,
   0.1722013,
   0.2685817,
   0.07857761,
   0.7771782,
   0.5555705,
   0.9729802,
   0.2581823,
   0.8108681,
   0.3746862,
   0.4711262,
   0.4390956,
   0.6252551,
   0,
   1,
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
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1316,Graph_from_mc_statistical_error_fy1316,Graph_from_mc_statistical_error_fex1316,Graph_from_mc_statistical_error_fey1316);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1316 = new TH1F("Graph_Graph_from_mc_statistical_error1316","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1316->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1316->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1316->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1316->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1316);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
