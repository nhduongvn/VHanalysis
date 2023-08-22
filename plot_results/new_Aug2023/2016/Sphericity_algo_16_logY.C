void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(0,0,1,1);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetFillStyle(4000);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetFrameFillStyle(1000);
   Sphericity_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.954137,1.052419,15.71242);
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
   st->SetMaximum(1.732022e+13);
   
   TH1F *st_stack_153 = new TH1F("st_stack_153","",25,0,1);
   st_stack_153->SetMinimum(0.00116019);
   st_stack_153->SetMaximum(7.010724e+13);
   st_stack_153->SetDirectory(0);
   st_stack_153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_153->SetLineColor(ci);
   st_stack_153->GetXaxis()->SetRange(1,25);
   st_stack_153->GetXaxis()->SetLabelFont(42);
   st_stack_153->GetXaxis()->SetLabelSize(0.035);
   st_stack_153->GetXaxis()->SetTitleSize(0.035);
   st_stack_153->GetXaxis()->SetTitleFont(42);
   st_stack_153->GetYaxis()->SetTitle("Events/0.04");
   st_stack_153->GetYaxis()->SetLabelFont(42);
   st_stack_153->GetYaxis()->SetLabelSize(0.05);
   st_stack_153->GetYaxis()->SetTitleSize(0.057);
   st_stack_153->GetYaxis()->SetTitleOffset(1.2);
   st_stack_153->GetYaxis()->SetTitleFont(42);
   st_stack_153->GetZaxis()->SetLabelFont(42);
   st_stack_153->GetZaxis()->SetLabelSize(0.035);
   st_stack_153->GetZaxis()->SetTitleSize(0.035);
   st_stack_153->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_153);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,801303.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,768770.2);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,445033.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,254529.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,117369.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,48136.58);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,16705.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3440.386);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,813.9854);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,942.9197);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,220.7227);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,90.1707);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,143.3444);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,86.09254);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,27.32279);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,35.95935);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,179.5198);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,43.97338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,9.306673);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,7.376411);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,19889.22);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,21095.94);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,15939.18);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,14336.23);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,5321.725);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3247.252);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2401.962);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,658.1263);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,167.9576);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,346.0049);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,56.96325);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,35.7401);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,59.68036);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,33.5936);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,14.7684);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,16.56294);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,145.6846);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,21.82859);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,6.94927);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,5.334382);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(121336);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,5315.372);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,5136.954);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2873.773);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1604.695);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,835.0141);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,392.3784);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,157.718);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,68.72339);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,33.07314);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,21.14966);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,11.24148);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,9.583045);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,5.983527);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.810998);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,1.954124);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,2.210682);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.823066);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.032072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.3429384);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.03407476);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.01849631);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,25.74489);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,24.96119);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,18.91321);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,14.26292);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,10.32505);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,7.056575);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.451984);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.852485);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.973063);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.645081);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.17138);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.184209);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8768313);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.6568681);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.441893);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.5161068);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4963382);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.4301865);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.2523516);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.04332398);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.01849631);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(335691);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,94018.09);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,97283.53);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,50999.32);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,27529.22);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,14589.34);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,7012.098);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,3050.049);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1342.637);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,663.1329);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,349.7826);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,197.186);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,122.0855);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,70.64018);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,51.76818);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,33.80472);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,21.92682);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,14.35111);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,8.758036);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,6.140167);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.02008);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.8991089);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.2659679);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,69.3795);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,70.42594);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,51.00983);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,37.56126);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,27.36644);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,18.87747);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.2987);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,8.026113);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.58257);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,4.007799);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.983455);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.347857);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.772922);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.503053);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.215191);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9768943);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.787217);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6108738);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.5249169);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3057417);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1921786);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1113153);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6260583);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3658.764);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3599.353);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1992.673);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1182.667);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,611.4619);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,260.3578);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,73.74951);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,31.57687);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.506037);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.330464);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,2.095473);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,2.679796);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,1.057731);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.5736143);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,2.924547);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.458026);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.2178702);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.4241253);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.07051581);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,40.0449);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,44.62273);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,31.54713);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,23.69366);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,16.34505);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,9.927542);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.469117);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.888648);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.080452);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8637484);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.4676167);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.6935672);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3118813);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.210278);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,1.816634);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1941128);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.09424649);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2533849);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.05149086);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(90522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2040.951);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1773.181);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1036.331);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,626.7658);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,271.9714);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,132.8788);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,49.28865);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,8.402827);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.263955);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,3.169116);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,2.489546);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,7.45095);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7162233);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.7887262);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.3810531);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.06990341);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.0286276);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,4.620989e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,50.59174);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,50.5403);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,38.31279);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,29.65673);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.33628);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,10.33063);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,8.728658);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.231189);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7070897);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.8221857);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.182489);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,5.600313);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4005934);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4436725);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.1808028);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.04925569);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.02490504);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,4.620989e-06);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(66273);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,20.90469);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,16.22223);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,8.871022);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,6.253766);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,3.743416);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.738272);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.6670301);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.1266904);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(9,0.1179106);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(10,0.08262463);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(11,0.1103859);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.58365);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.380636);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.024093);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.8653203);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.6760367);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.4611849);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.2751369);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.1266904);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(9,0.1179106);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(10,0.08262463);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(11,0.1103859);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(510);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,32.23024);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,29.40834);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,15.83144);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,8.796835);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,5.33313);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,1.851359);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.364895);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.2899744);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.07967665);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.03647169);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,1.679259);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,1.588733);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.166631);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,0.8834831);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.6873772);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.4004618);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3430445);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.1538564);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.07967665);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.03647169);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1121);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,39.35603);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,36.72848);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,21.64728);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,11.35852);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,7.945941);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.106007);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.82596);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.224829);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(10,0.37157);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2007614);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,2.846039);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,2.723274);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.105279);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.534733);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.273442);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.8082974);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.4136208);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.224829);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(10,0.2634844);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2007614);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(609);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,22.16172);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,22.29965);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,12.36107);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,7.992666);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,4.938337);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.382247);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.6670441);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.1580376);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.05790744);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.03118899);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01671603);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01152529);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.003813413);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.001578684);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001138712);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.000878137);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001143042);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.1552132);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1543424);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1151192);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.0931663);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.07385267);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.05121918);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.0269802);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01293093);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.007796627);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.005659897);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.00414426);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003374195);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.001747141);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.001198667);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001138712);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.000878137);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001143042);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,9.351048);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,9.348489);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,5.26689);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,3.233178);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,1.845137);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,0.8766404);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.289099);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1009097);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.03554497);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.02607001);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01208605);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.006124968);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.006491865);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.002412501);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.002120511);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001406261);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002184699);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0003642251);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.000968384);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.05564801);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.05531196);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.0416106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03269553);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02473485);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.01710781);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.009777263);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.005745119);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.00337284);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.002902379);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.00195799);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.00136264);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001434943);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0008175287);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0007338342);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0006095057);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0008325399);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0003642251);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0004861455);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2226727);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2335968);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1145982);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.06835835);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.06687967);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.02508772);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.00694347);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.0219562);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02204111);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01550593);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01238463);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01259643);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.007257203);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003716305);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.09799321);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.09065648);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.05029075);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.03378886);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.0177988);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.009565309);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.003665737);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.001044289);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0003466216);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0005469529);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0001854984);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002302212);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.005224655);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.004988991);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003732272);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.003046282);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002230775);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001629858);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0009957548);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.000525328);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0003466216);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0003868164);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0001854984);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002302212);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__419 = new TH1D("VbbHcc_algo_Sphericity__419","",25,0,1);
   VbbHcc_algo_Sphericity__419->SetBinContent(1,285067);
   VbbHcc_algo_Sphericity__419->SetBinContent(2,248308);
   VbbHcc_algo_Sphericity__419->SetBinContent(3,141154);
   VbbHcc_algo_Sphericity__419->SetBinContent(4,79814);
   VbbHcc_algo_Sphericity__419->SetBinContent(5,42573);
   VbbHcc_algo_Sphericity__419->SetBinContent(6,19368);
   VbbHcc_algo_Sphericity__419->SetBinContent(7,7314);
   VbbHcc_algo_Sphericity__419->SetBinContent(8,2783);
   VbbHcc_algo_Sphericity__419->SetBinContent(9,1191);
   VbbHcc_algo_Sphericity__419->SetBinContent(10,669);
   VbbHcc_algo_Sphericity__419->SetBinContent(11,375);
   VbbHcc_algo_Sphericity__419->SetBinContent(12,257);
   VbbHcc_algo_Sphericity__419->SetBinContent(13,143);
   VbbHcc_algo_Sphericity__419->SetBinContent(14,110);
   VbbHcc_algo_Sphericity__419->SetBinContent(15,87);
   VbbHcc_algo_Sphericity__419->SetBinContent(16,58);
   VbbHcc_algo_Sphericity__419->SetBinContent(17,41);
   VbbHcc_algo_Sphericity__419->SetBinContent(18,23);
   VbbHcc_algo_Sphericity__419->SetBinContent(19,22);
   VbbHcc_algo_Sphericity__419->SetBinContent(20,7);
   VbbHcc_algo_Sphericity__419->SetBinContent(21,3);
   VbbHcc_algo_Sphericity__419->SetEntries(829391);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__419->SetLineColor(ci);
   VbbHcc_algo_Sphericity__419->SetLineWidth(2);
   VbbHcc_algo_Sphericity__419->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__419->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__419->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__419->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__419->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1305[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1305[25] = {
   906460.8,
   876677.5,
   502000.1,
   285510.8,
   133701.2,
   55944.29,
   20040.53,
   4892.627,
   1521.253,
   1321.864,
   434.0753,
   231.9877,
   221.789,
   143.0381,
   66.39049,
   60.62619,
   195.9436,
   54.18799,
   15.86241,
   9.430566,
   0.8991089,
   0.2844642,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1305[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1305[25] = {
   19889.46,
   21096.18,
   15939.35,
   14336.33,
   5321.85,
   3247.346,
   2402.018,
   658.1942,
   168.0669,
   346.0342,
   57.06798,
   36.27829,
   59.71529,
   33.63721,
   14.93688,
   16.60095,
   145.6876,
   21.84284,
   6.973825,
   5.343312,
   0.1921786,
   0.1128415,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1305,Graph_from_VbbHcc_algo_Sphericity_fy1305,Graph_from_VbbHcc_algo_Sphericity_fex1305,Graph_from_VbbHcc_algo_Sphericity_fey1305);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1305 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1305","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMinimum(1018.985);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetMaximum(1018985);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1305->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1305);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__420 = new TH1D("data_mc_ratio__420","",25,0,1);
   data_mc_ratio__420->SetBinContent(1,0.3144835);
   data_mc_ratio__420->SetBinContent(2,0.2832376);
   data_mc_ratio__420->SetBinContent(3,0.2811832);
   data_mc_ratio__420->SetBinContent(4,0.2795481);
   data_mc_ratio__420->SetBinContent(5,0.318419);
   data_mc_ratio__420->SetBinContent(6,0.3462016);
   data_mc_ratio__420->SetBinContent(7,0.3649604);
   data_mc_ratio__420->SetBinContent(8,0.568815);
   data_mc_ratio__420->SetBinContent(9,0.7829073);
   data_mc_ratio__420->SetBinContent(10,0.5061037);
   data_mc_ratio__420->SetBinContent(11,0.8639053);
   data_mc_ratio__420->SetBinContent(12,1.107817);
   data_mc_ratio__420->SetBinContent(13,0.6447568);
   data_mc_ratio__420->SetBinContent(14,0.7690261);
   data_mc_ratio__420->SetBinContent(15,1.310429);
   data_mc_ratio__420->SetBinContent(16,0.9566823);
   data_mc_ratio__420->SetBinContent(17,0.2092439);
   data_mc_ratio__420->SetBinContent(18,0.4244483);
   data_mc_ratio__420->SetBinContent(19,1.386927);
   data_mc_ratio__420->SetBinContent(20,0.7422672);
   data_mc_ratio__420->SetBinContent(21,3.336637);
   data_mc_ratio__420->SetBinError(1,0.0005890124);
   data_mc_ratio__420->SetBinError(2,0.0005684019);
   data_mc_ratio__420->SetBinError(3,0.0007484156);
   data_mc_ratio__420->SetBinError(4,0.0009895029);
   data_mc_ratio__420->SetBinError(5,0.001543234);
   data_mc_ratio__420->SetBinError(6,0.002487635);
   data_mc_ratio__420->SetBinError(7,0.004267448);
   data_mc_ratio__420->SetBinError(8,0.01078238);
   data_mc_ratio__420->SetBinError(9,0.02268582);
   data_mc_ratio__420->SetBinError(10,0.0195671);
   data_mc_ratio__420->SetBinError(11,0.04461188);
   data_mc_ratio__420->SetBinError(12,0.06910376);
   data_mc_ratio__420->SetBinError(13,0.05391728);
   data_mc_ratio__420->SetBinError(14,0.07332376);
   data_mc_ratio__420->SetBinError(15,0.1404927);
   data_mc_ratio__420->SetBinError(16,0.1256185);
   data_mc_ratio__420->SetBinError(17,0.03267841);
   data_mc_ratio__420->SetBinError(18,0.08850359);
   data_mc_ratio__420->SetBinError(19,0.2956939);
   data_mc_ratio__420->SetBinError(20,0.2805506);
   data_mc_ratio__420->SetBinError(21,1.926408);
   data_mc_ratio__420->SetMinimum(0.4);
   data_mc_ratio__420->SetMaximum(1.6);
   data_mc_ratio__420->SetEntries(46.70638);
   data_mc_ratio__420->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__420->SetLineColor(ci);
   data_mc_ratio__420->SetLineWidth(2);
   data_mc_ratio__420->SetMarkerStyle(20);
   data_mc_ratio__420->SetMarkerSize(1.2);
   data_mc_ratio__420->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__420->GetXaxis()->SetRange(1,25);
   data_mc_ratio__420->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__420->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__420->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__420->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__420->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__420->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__420->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__420->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__420->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1306[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1306[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1306[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1306[25] = {
   0.02194189,
   0.02406378,
   0.03175169,
   0.05021293,
   0.03980406,
   0.05804607,
   0.119858,
   0.1345278,
   0.1104793,
   0.2617776,
   0.1314702,
   0.1563802,
   0.2692437,
   0.2351626,
   0.2249853,
   0.2738248,
   0.7435181,
   0.4030938,
   0.4396449,
   0.5665951,
   0.2137434,
   0.3966808,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1306,Graph_from_mc_statistical_error_fy1306,Graph_from_mc_statistical_error_fex1306,Graph_from_mc_statistical_error_fey1306);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1306 = new TH1F("Graph_Graph_from_mc_statistical_error1306","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1306->SetMinimum(0.1077783);
   Graph_Graph_from_mc_statistical_error1306->SetMaximum(1.892222);
   Graph_Graph_from_mc_statistical_error1306->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1306->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1306->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1306->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1306);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
