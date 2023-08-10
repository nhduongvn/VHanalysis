void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-4264.846,1.052419,4260591);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(3651529);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",50,0,1);
   st_stack_158->SetMinimum(0.01);
   st_stack_158->SetMaximum(3834106);
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
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1443556);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,182723.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,44360.35);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,9317.226);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,4527.398);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,813.4823);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,440.9153);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,14.99854);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,11.55834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,17.87387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,5.50891);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,301.3229);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.33596);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,37869.52);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,6051.79);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,3344.651);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1350.694);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,2041.798);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,329.7629);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,342.7821);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,8.798516);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,8.18943);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,17.87387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,5.50891);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,295.2697);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.33596);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(112106);

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
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,9279.851);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1321.973);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,294.9545);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,72.63233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.02298);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,8.38518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,4.287014);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.685229);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.512328);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.3578049);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.5757627);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2995002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.027729);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,42.21338);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,15.91569);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,7.533063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,3.639022);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.486614);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.244382);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.8623012);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5101563);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.5786797);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.1288398);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3818142);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2280077);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.027729);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(138653);

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
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.1479447);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,179033.2);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,23536.08);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4711.557);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1271.119);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,418.0678);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,159.0355);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,69.87782);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,31.74475);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,15.89803);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,9.813244);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,5.089898);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,2.912472);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,2.340126);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,0.9574268);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.3999445);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.3346625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3591708);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3084347);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.1980587);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.03648088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.05678712);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.1066523);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,115.6022);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,41.64292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,18.43141);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,9.471943);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.366054);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.27911);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.137755);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.42726);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.010448);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7839471);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.544661);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4149473);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3799226);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2451464);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.159793);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1327819);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1589057);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1450906);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1071924);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.03648088);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.05678712);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3113082);

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
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,8252.842);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1050.339);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,212.2174);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,51.09255);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,13.9713);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.655186);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.6258216);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.7075803);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1179227);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1069362);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.04561054);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.4505096);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.06288506);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.03119144);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,71.07765);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,30.70517);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,12.95919);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,7.467036);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.873405);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.09114);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.219102);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.3752153);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.08372716);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1069362);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.04561054);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.3777513);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.06288506);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.03119144);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(54522);

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
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,2738.732);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,353.6937);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,63.15204);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,18.7474);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,3.195698);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.292255);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,0.0120051);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.1995989);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.009769569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.08928212);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(13,0.08628121);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,61.22559);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,27.93733);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,12.29569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,5.11227);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,1.881178);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.556793);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,0.0120051);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.1670886);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.009769569);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.08928212);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(13,0.08628121);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(16864);

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
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(1,26.70317);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(2,1.398705);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(3,0.4175465);
   VbbHcc_algo_Aplanarity_stack_6->SetBinContent(4,0.2642997);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(1,3.093419);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(2,0.7072964);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(3,0.4175465);
   VbbHcc_algo_Aplanarity_stack_6->SetBinError(4,0.2642997);
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
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(1,67.87308);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(2,8.711709);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(3,1.41188);
   VbbHcc_algo_Aplanarity_stack_7->SetBinContent(4,0.6003888);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(1,4.387719);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(2,1.562517);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(3,0.6430912);
   VbbHcc_algo_Aplanarity_stack_7->SetBinError(4,0.368904);
   VbbHcc_algo_Aplanarity_stack_7->SetEntries(290);

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
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(1,109.5859);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(2,12.67586);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(3,2.163165);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(4,0.5342757);
   VbbHcc_algo_Aplanarity_stack_8->SetBinContent(5,0.3075269);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(1,5.675731);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(2,1.926559);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(3,0.8197809);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(4,0.3825119);
   VbbHcc_algo_Aplanarity_stack_8->SetBinError(5,0.3075269);
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
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(1,78.99714);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(2,6.428486);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(3,0.9533265);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(4,0.2150551);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(5,0.05722783);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(6,0.02085537);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(7,0.00449409);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(8,0.003661905);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(9,0.001485867);
   VbbHcc_algo_Aplanarity_stack_9->SetBinContent(10,0.001702892);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(1,0.3974057);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(2,0.11199);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(3,0.0430767);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(4,0.02060442);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(5,0.01046097);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(6,0.006318132);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(7,0.002595485);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(8,0.002595372);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(9,0.001485867);
   VbbHcc_algo_Aplanarity_stack_9->SetBinError(10,0.001702892);
   VbbHcc_algo_Aplanarity_stack_9->SetEntries(47732);

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
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,43.21675);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,4.917707);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.9438977);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.2041044);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.06927134);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.02033384);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.006924666);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.003579705);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.00196186);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0008568808);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0003130148);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001528224);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1390905);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.04691291);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.02052044);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.009492269);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.005495721);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002953738);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001713774);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.001206801);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.0008871734);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0005519868);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0003130148);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001528224);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(112076);

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
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(1,0.658498);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(2,0.04984074);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(3,0.005191659);
   VbbHcc_algo_Aplanarity_stack_11->SetBinContent(4,0.001165258);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(1,0.03507705);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(2,0.009296667);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(3,0.002955658);
   VbbHcc_algo_Aplanarity_stack_11->SetBinError(4,0.001165258);
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
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(1,0.2942058);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(2,0.03392616);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(3,0.00665354);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(4,0.0007950691);
   VbbHcc_algo_Aplanarity_stack_12->SetBinContent(5,0.0006376793);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(1,0.008418433);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(2,0.00287973);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(3,0.001243821);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(4,0.0004131647);
   VbbHcc_algo_Aplanarity_stack_12->SetBinError(5,0.000384992);
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
   VbbHcc_algo_Aplanarity__433->SetBinContent(1,199866);
   VbbHcc_algo_Aplanarity__433->SetBinContent(2,26457);
   VbbHcc_algo_Aplanarity__433->SetBinContent(3,6128);
   VbbHcc_algo_Aplanarity__433->SetBinContent(4,1607);
   VbbHcc_algo_Aplanarity__433->SetBinContent(5,533);
   VbbHcc_algo_Aplanarity__433->SetBinContent(6,188);
   VbbHcc_algo_Aplanarity__433->SetBinContent(7,53);
   VbbHcc_algo_Aplanarity__433->SetBinContent(8,37);
   VbbHcc_algo_Aplanarity__433->SetBinContent(9,13);
   VbbHcc_algo_Aplanarity__433->SetBinContent(10,9);
   VbbHcc_algo_Aplanarity__433->SetBinContent(11,5);
   VbbHcc_algo_Aplanarity__433->SetBinContent(12,3);
   VbbHcc_algo_Aplanarity__433->SetBinContent(13,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(14,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(15,2);
   VbbHcc_algo_Aplanarity__433->SetBinContent(17,1);
   VbbHcc_algo_Aplanarity__433->SetBinContent(18,2);
   VbbHcc_algo_Aplanarity__433->SetEntries(234957);

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
   1643188,
   209019.6,
   49648.13,
   10732.64,
   4993.09,
   986.8916,
   515.7294,
   49.14333,
   29.28966,
   10.29031,
   23.67474,
   9.171544,
   303.8122,
   0.9574268,
   2.735904,
   0.3623915,
   0.3591708,
   0.3396261,
   0.1980587,
   0,
   0.03648088,
   0.05678712,
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
   37869.83,
   6052.097,
   3344.758,
   1350.763,
   2041.811,
   329.787,
   342.7899,
   8.935995,
   8.273909,
   0.8016899,
   17.88653,
   5.542107,
   295.2699,
   0.2451464,
   2.341419,
   0.1356464,
   0.1589057,
   0.1484055,
   0.1071924,
   0,
   0.03648088,
   0.05678712,
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
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMinimum(-168105.8);
   Graph_Graph_from_VbbHcc_algo_Aplanarity1315->SetMaximum(1849164);
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
   data_mc_ratio__434->SetBinContent(1,0.1216331);
   data_mc_ratio__434->SetBinContent(2,0.1265766);
   data_mc_ratio__434->SetBinContent(3,0.1234286);
   data_mc_ratio__434->SetBinContent(4,0.1497302);
   data_mc_ratio__434->SetBinContent(5,0.1067475);
   data_mc_ratio__434->SetBinContent(6,0.1904971);
   data_mc_ratio__434->SetBinContent(7,0.1027671);
   data_mc_ratio__434->SetBinContent(8,0.7528997);
   data_mc_ratio__434->SetBinContent(9,0.4438426);
   data_mc_ratio__434->SetBinContent(10,0.8746089);
   data_mc_ratio__434->SetBinContent(11,0.2111955);
   data_mc_ratio__434->SetBinContent(12,0.3270987);
   data_mc_ratio__434->SetBinContent(13,0.006583015);
   data_mc_ratio__434->SetBinContent(14,2.088932);
   data_mc_ratio__434->SetBinContent(15,0.7310197);
   data_mc_ratio__434->SetBinContent(17,2.78419);
   data_mc_ratio__434->SetBinContent(18,5.888829);
   data_mc_ratio__434->SetBinError(1,0.0002720709);
   data_mc_ratio__434->SetBinError(2,0.0007781857);
   data_mc_ratio__434->SetBinError(3,0.001576727);
   data_mc_ratio__434->SetBinError(4,0.003735094);
   data_mc_ratio__434->SetBinError(5,0.004623748);
   data_mc_ratio__434->SetBinError(6,0.01389343);
   data_mc_ratio__434->SetBinError(7,0.01411614);
   data_mc_ratio__434->SetBinError(8,0.1237759);
   data_mc_ratio__434->SetBinError(9,0.1230998);
   data_mc_ratio__434->SetBinError(10,0.2915363);
   data_mc_ratio__434->SetBinError(11,0.09444952);
   data_mc_ratio__434->SetBinError(12,0.1888505);
   data_mc_ratio__434->SetBinError(13,0.004654894);
   data_mc_ratio__434->SetBinError(14,1.477098);
   data_mc_ratio__434->SetBinError(15,0.516909);
   data_mc_ratio__434->SetBinError(17,2.78419);
   data_mc_ratio__434->SetBinError(18,4.164031);
   data_mc_ratio__434->SetMinimum(0.4);
   data_mc_ratio__434->SetMaximum(1.6);
   data_mc_ratio__434->SetEntries(6.167339);
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
   0.02304656,
   0.02895468,
   0.06736926,
   0.1258556,
   0.4089273,
   0.3341674,
   0.6646702,
   0.1818353,
   0.2824857,
   0.07790723,
   0.755511,
   0.604272,
   0.9718832,
   0.2560472,
   0.8558117,
   0.3743089,
   0.4424239,
   0.4369674,
   0.5412155,
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
   Graph_Graph_from_mc_statistical_error1316->SetMinimum(-0.2);
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
