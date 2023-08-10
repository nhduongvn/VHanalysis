void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(0,0,1,1);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1548.673,1.052419,1547135);
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
   st->SetMaximum(1325968);
   
   TH1F *st_stack_154 = new TH1F("st_stack_154","",25,0,1);
   st_stack_154->SetMinimum(0.01);
   st_stack_154->SetMaximum(1392266);
   st_stack_154->SetDirectory(0);
   st_stack_154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_154->SetLineColor(ci);
   st_stack_154->GetXaxis()->SetRange(1,25);
   st_stack_154->GetXaxis()->SetLabelFont(42);
   st_stack_154->GetXaxis()->SetLabelSize(0.035);
   st_stack_154->GetXaxis()->SetTitleSize(0.035);
   st_stack_154->GetXaxis()->SetTitleFont(42);
   st_stack_154->GetYaxis()->SetTitle("Events/0.04");
   st_stack_154->GetYaxis()->SetLabelFont(42);
   st_stack_154->GetYaxis()->SetLabelSize(0.05);
   st_stack_154->GetYaxis()->SetTitleSize(0.057);
   st_stack_154->GetYaxis()->SetTitleOffset(1.2);
   st_stack_154->GetYaxis()->SetTitleFont(42);
   st_stack_154->GetZaxis()->SetLabelFont(42);
   st_stack_154->GetZaxis()->SetLabelSize(0.035);
   st_stack_154->GetZaxis()->SetTitleSize(0.035);
   st_stack_154->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_154);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,530378);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,495709.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,262220.5);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,155159.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,76692.35);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,32252.95);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,8170.498);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3648.119);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1382.128);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,681.6104);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,752.6085);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,194.7751);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,172.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,132.3327);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,63.45588);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,335.3277);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,51.75169);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,34.04373);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,28.88113);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,13.61749);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,22794.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,22922.57);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,6450.035);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,15552.85);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3329.182);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2346.128);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1001.016);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,774.1377);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,396.2728);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,279.452);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,383.5217);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,57.80083);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,49.79235);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,43.5415);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,27.66995);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,269.7658);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,18.47282);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,15.22482);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,23.09868);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,9.629022);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(116866);

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
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3598.842);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3559.087);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1993.072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1130.508);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,582.6091);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,270.1995);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,116.5452);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,49.62784);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,25.22908);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.81165);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,7.505397);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.970149);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,3.329712);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,1.772128);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.154826);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.39683);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.104572);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.279809);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.193253);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.1980106);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,22.8445);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,22.69723);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,16.91463);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,12.87549);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,9.339564);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,6.276214);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.104125);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.610777);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.953606);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.402106);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.9909605);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.03489);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.7453172);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.2915313);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5741155);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.4243125);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4071549);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.4815423);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.09671431);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.09911952);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(147618);

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
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,58766.48);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,62862.26);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,33544.79);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,18161.88);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,9553.749);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,4580.588);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2007.636);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,884.7734);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,431.1066);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,232.9382);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,138.9212);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,85.2909);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,53.5077);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,37.03683);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,25.90366);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,16.94257);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,13.29559);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,6.972501);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,4.399863);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.733191);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.485481);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.1758528);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.1407128);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.04456635);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,60.34896);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,62.6936);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,45.7581);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,33.64958);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,24.36816);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,16.79112);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,11.01611);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,7.219183);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,4.990639);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.645676);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.817863);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.190156);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.722258);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.442189);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.21112);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9789971);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.8789125);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6298158);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4995267);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3198651);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1752386);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1055219);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.09949895);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.04456635);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3230340);

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
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,2802.472);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,2653.178);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,1552.922);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,906.4775);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,458.2372);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,197.8919);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,61.81175);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,19.80077);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,7.527527);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,4.617923);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,1.138295);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,0.9678834);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8730559);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.5415069);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.9570391);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,3.010445);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.6363343);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.1083014);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.06630981);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,38.01496);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,39.61798);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,30.12378);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,23.0613);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,14.8307);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,9.190494);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,4.533493);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.362128);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.370183);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.03053);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.3133989);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.4180278);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.2839558);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2421692);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.3086993);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,2.732634);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.3908482);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.1083014);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.06630981);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(52708);

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
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1037.32);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,825.8937);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,560.2);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,263.5029);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,165.4129);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,55.19041);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,17.72471);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,5.483291);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,3.042865);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.616234);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.877164);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.5218272);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.8114319);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.5428806);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.09281656);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.0116142);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,35.53332);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,31.66732);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,30.48048);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,15.22772);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.10871);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,5.229649);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,2.991167);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.510983);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.818469);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.185128);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.235609);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.2432366);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.3433335);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.3907707);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.08202873);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.0116142);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1763629);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(17207);

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
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,7.567341);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,10.40509);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,4.098977);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,0.9459177);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,2.207141);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,0.3153059);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.6306118);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.544677);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.811294);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.136852);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.5461258);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.834221);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.3153059);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.4459099);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(83);

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
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,22.56274);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,23.30657);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,11.40534);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,5.70267);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,5.70267);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.23148);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.4958844);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.2479422);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.365218);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.403889);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.681626);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.189089);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.189089);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.7438266);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3506432);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.2479422);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(16,0.2479422);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(290);

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
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,33.67901);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,33.17255);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,18.23224);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,12.40805);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,9.622573);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,4.05161);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.7596768);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(9,0.2532256);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,2.92034);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,2.8983);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.148691);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.772579);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.560987);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.012902);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.4385996);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(9,0.2532256);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(443);

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
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,24.09108);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,23.86497);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,13.11959);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,8.905754);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,5.828957);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,2.62618);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.7090363);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.1986594);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.07268026);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.0290721);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.008075584);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006460468);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.004845351);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.003230234);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.004845351);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.197256);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.1963281);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1455667);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1199326);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.09702807);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06512747);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03384046);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.01791251);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01083453);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.006852361);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.003611511);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.003230234);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002797464);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.00228412);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002797464);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(49206);

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
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,14.25607);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,14.39953);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.111319);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.935288);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.804112);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.320168);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4428201);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1592162);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.0568037);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.04104793);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0178289);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01160952);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.009536387);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004975506);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.005390132);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002487753);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002902379);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001243877);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001658502);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.07688258);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.07726845);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.05799276);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04523601);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03409775);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02339605);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01355007);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.008124968);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004853067);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004125472);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002718881);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002193992);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001988474);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001436305);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001494954);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001015621);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001096996);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0007181525);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0008292511);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112352);

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
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2228154);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1864696);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1090373);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.0679508);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.04108653);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01580251);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.01876444);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01716592);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01312655);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.0103624);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.008057731);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.004997193);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003533549);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001580251);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

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
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.08615635);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.0990279);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.05107099);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.03176367);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02013775);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.008511832);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.002698874);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002698874);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.004229249);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.004534176);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.003256167);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.00256794);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.002044679);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001329325);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.0007485328);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0007485328);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1460);

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
   
   TH1D *VbbHcc_algo_Sphericity__422 = new TH1D("VbbHcc_algo_Sphericity__422","",25,0,1);
   VbbHcc_algo_Sphericity__422->SetBinContent(1,86139);
   VbbHcc_algo_Sphericity__422->SetBinContent(2,77189);
   VbbHcc_algo_Sphericity__422->SetBinContent(3,43715);
   VbbHcc_algo_Sphericity__422->SetBinContent(4,24502);
   VbbHcc_algo_Sphericity__422->SetBinContent(5,13206);
   VbbHcc_algo_Sphericity__422->SetBinContent(6,6052);
   VbbHcc_algo_Sphericity__422->SetBinContent(7,2438);
   VbbHcc_algo_Sphericity__422->SetBinContent(8,993);
   VbbHcc_algo_Sphericity__422->SetBinContent(9,487);
   VbbHcc_algo_Sphericity__422->SetBinContent(10,235);
   VbbHcc_algo_Sphericity__422->SetBinContent(11,143);
   VbbHcc_algo_Sphericity__422->SetBinContent(12,79);
   VbbHcc_algo_Sphericity__422->SetBinContent(13,50);
   VbbHcc_algo_Sphericity__422->SetBinContent(14,40);
   VbbHcc_algo_Sphericity__422->SetBinContent(15,25);
   VbbHcc_algo_Sphericity__422->SetBinContent(16,13);
   VbbHcc_algo_Sphericity__422->SetBinContent(17,18);
   VbbHcc_algo_Sphericity__422->SetBinContent(18,3);
   VbbHcc_algo_Sphericity__422->SetBinContent(19,6);
   VbbHcc_algo_Sphericity__422->SetBinContent(20,5);
   VbbHcc_algo_Sphericity__422->SetBinContent(21,1);
   VbbHcc_algo_Sphericity__422->SetEntries(255363);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__422->SetLineColor(ci);
   VbbHcc_algo_Sphericity__422->SetLineWidth(2);
   VbbHcc_algo_Sphericity__422->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__422->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__422->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__422->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__422->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1307[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1307[25] = {
   596685.6,
   565715.5,
   299926.6,
   175654.7,
   87478.59,
   37367.39,
   10376.51,
   4609.172,
   1849.419,
   934.6647,
   902.0766,
   288.5439,
   231.2753,
   172.2342,
   92.57446,
   356.9398,
   66.96745,
   42.40559,
   33.71858,
   15.5487,
   0.5326048,
   0.1758528,
   0.1407128,
   0.04456635,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1307[25] = {
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
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1307[25] = {
   22795.05,
   22922.73,
   6450.363,
   15552.92,
   3329.367,
   2346.221,
   1001.1,
   774.1847,
   396.3124,
   279.4837,
   383.5354,
   57.85359,
   49.8297,
   43.56878,
   27.70424,
   269.7819,
   18.50317,
   15.24583,
   23.10505,
   9.634843,
   0.1814642,
   0.1055219,
   0.09949895,
   0.04456635,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1307,Graph_from_VbbHcc_algo_Sphericity_fy1307,Graph_from_VbbHcc_algo_Sphericity_fex1307,Graph_from_VbbHcc_algo_Sphericity_fey1307);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1307 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1307","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetMaximum(681428.7);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1307);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__423 = new TH1D("data_mc_ratio__423","",25,0,1);
   data_mc_ratio__423->SetBinContent(1,0.1443625);
   data_mc_ratio__423->SetBinContent(2,0.1364449);
   data_mc_ratio__423->SetBinContent(3,0.1457523);
   data_mc_ratio__423->SetBinContent(4,0.1394896);
   data_mc_ratio__423->SetBinContent(5,0.1509627);
   data_mc_ratio__423->SetBinContent(6,0.1619594);
   data_mc_ratio__423->SetBinContent(7,0.2349539);
   data_mc_ratio__423->SetBinContent(8,0.21544);
   data_mc_ratio__423->SetBinContent(9,0.263326);
   data_mc_ratio__423->SetBinContent(10,0.2514271);
   data_mc_ratio__423->SetBinContent(11,0.1585231);
   data_mc_ratio__423->SetBinContent(12,0.2737885);
   data_mc_ratio__423->SetBinContent(13,0.2161925);
   data_mc_ratio__423->SetBinContent(14,0.2322419);
   data_mc_ratio__423->SetBinContent(15,0.2700529);
   data_mc_ratio__423->SetBinContent(16,0.03642071);
   data_mc_ratio__423->SetBinContent(17,0.2687873);
   data_mc_ratio__423->SetBinContent(18,0.07074539);
   data_mc_ratio__423->SetBinContent(19,0.1779434);
   data_mc_ratio__423->SetBinContent(20,0.3215704);
   data_mc_ratio__423->SetBinContent(21,1.877565);
   data_mc_ratio__423->SetBinError(1,0.0004918746);
   data_mc_ratio__423->SetBinError(2,0.000491111);
   data_mc_ratio__423->SetBinError(3,0.0006971084);
   data_mc_ratio__423->SetBinError(4,0.0008911298);
   data_mc_ratio__423->SetBinError(5,0.001313663);
   data_mc_ratio__423->SetBinError(6,0.002081885);
   data_mc_ratio__423->SetBinError(7,0.004758453);
   data_mc_ratio__423->SetBinError(8,0.006836781);
   data_mc_ratio__423->SetBinError(9,0.01193244);
   data_mc_ratio__423->SetBinError(10,0.01640129);
   data_mc_ratio__423->SetBinError(11,0.01325637);
   data_mc_ratio__423->SetBinError(12,0.03080361);
   data_mc_ratio__423->SetBinError(13,0.03057424);
   data_mc_ratio__423->SetBinError(14,0.03672066);
   data_mc_ratio__423->SetBinError(15,0.05401057);
   data_mc_ratio__423->SetBinError(16,0.01010129);
   data_mc_ratio__423->SetBinError(17,0.06335377);
   data_mc_ratio__423->SetBinError(18,0.04084487);
   data_mc_ratio__423->SetBinError(19,0.07264511);
   data_mc_ratio__423->SetBinError(20,0.1438107);
   data_mc_ratio__423->SetBinError(21,1.877565);
   data_mc_ratio__423->SetMinimum(0.4);
   data_mc_ratio__423->SetMaximum(1.6);
   data_mc_ratio__423->SetEntries(8.127153);
   data_mc_ratio__423->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__423->SetLineColor(ci);
   data_mc_ratio__423->SetLineWidth(2);
   data_mc_ratio__423->SetMarkerStyle(20);
   data_mc_ratio__423->SetMarkerSize(1.2);
   data_mc_ratio__423->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__423->GetXaxis()->SetRange(1,25);
   data_mc_ratio__423->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__423->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__423->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__423->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__423->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__423->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__423->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__423->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__423->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1308[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1308[25] = {
   0.03820278,
   0.04051989,
   0.02150647,
   0.08854255,
   0.03805922,
   0.06278793,
   0.09647756,
   0.1679661,
   0.2142902,
   0.2990203,
   0.4251695,
   0.2005019,
   0.2154562,
   0.2529624,
   0.2992644,
   0.755819,
   0.2763009,
   0.3595242,
   0.6852322,
   0.6196561,
   0.3407107,
   0.6000578,
   0.7071068,
   1,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1308,Graph_from_mc_statistical_error_fy1308,Graph_from_mc_statistical_error_fex1308,Graph_from_mc_statistical_error_fey1308);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1308 = new TH1F("Graph_Graph_from_mc_statistical_error1308","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1308->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1308->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1308->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1308->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1308->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1308);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
