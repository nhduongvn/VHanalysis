void Aplanarity_tags_all()
{
//=========Macro generated from canvas: Aplanarity_tags_all/Aplanarity_tags_all
//=========  (Mon Jul 24 10:11:26 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_all = new TCanvas("Aplanarity_tags_all", "Aplanarity_tags_all",0,0,600,600);
   Aplanarity_tags_all->SetHighLightColor(2);
   Aplanarity_tags_all->Range(0,0,1,1);
   Aplanarity_tags_all->SetFillColor(0);
   Aplanarity_tags_all->SetFillStyle(4000);
   Aplanarity_tags_all->SetBorderMode(0);
   Aplanarity_tags_all->SetBorderSize(2);
   Aplanarity_tags_all->SetFrameFillStyle(1000);
   Aplanarity_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-16211.82,1.052419,1.619591e+07);
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
   st->SetMinimum(0.3);
   st->SetMaximum(1.388066e+07);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",50,0,1);
   st_stack_64->SetMinimum(0.3);
   st_stack_64->SetMaximum(1.45747e+07);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetRange(1,50);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetLabelSize(0.035);
   st_stack_64->GetXaxis()->SetTitleSize(0.035);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/0.02");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetLabelSize(0.05);
   st_stack_64->GetYaxis()->SetTitleSize(0.057);
   st_stack_64->GetYaxis()->SetTitleOffset(1.2);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetLabelSize(0.035);
   st_stack_64->GetZaxis()->SetTitleSize(0.035);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(1,5138333);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(2,687777.6);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(3,169000.9);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(4,55424.42);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(5,20272.07);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(6,9028.721);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(7,4586.428);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(8,5929.768);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(9,2300.39);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(10,835.6974);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(11,530.9415);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(12,540.7956);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(13,618.1532);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(14,64.65886);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(15,114.5737);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(16,1.676084);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(17,56.50354);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinContent(18,52.49255);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(1,54221.6);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(2,26226.94);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(3,6814.291);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(4,3704.131);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(5,2165.231);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(6,1098.809);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(7,673.1798);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(8,3166.396);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(9,544.2787);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(10,307.5019);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(11,90.99311);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(12,296.7713);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(13,432.438);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(14,31.24731);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(15,32.42829);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(16,0.9814197);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(17,22.96662);
   VbbHcc_tags_Aplanarity_all_stack_1->SetBinError(18,37.12488);
   VbbHcc_tags_Aplanarity_all_stack_1->SetEntries(488683);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(1,54684.52);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(2,7781.665);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(3,2025.113);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(4,696.7026);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(5,280.0643);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(6,133.5698);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(7,78.48681);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(8,44.61122);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(9,25.72712);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(10,17.0117);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(11,9.810437);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(12,6.044582);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(13,4.707793);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(14,3.268698);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(15,1.62772);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(16,1.10579);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(17,0.8945817);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(18,1.092408);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(19,0.1473557);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinContent(20,0.2995461);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(1,106.3126);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(2,39.09774);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(3,20.70767);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(4,11.7525);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(5,7.741148);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(6,5.048264);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(7,4.818443);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(8,3.00323);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(9,2.254344);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(10,1.90539);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(11,1.358335);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(12,1.036982);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(13,0.9651419);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(14,0.8847665);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(15,0.5731558);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(16,0.4464336);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(17,0.3964805);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(18,0.4720731);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(19,0.08573054);
   VbbHcc_tags_Aplanarity_all_stack_2->SetBinError(20,0.3184841);
   VbbHcc_tags_Aplanarity_all_stack_2->SetEntries(822483);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(0,0.09234008);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(1,987002.3);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(2,138258.8);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(3,35867.16);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(4,12911.78);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(5,5756.012);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(6,2913.222);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(7,1607.398);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(8,934.2731);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(9,561.3312);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(10,360.3186);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(11,233.9746);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(12,147.584);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(13,91.802);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(14,60.54049);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(15,37.98143);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(16,19.86211);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(17,13.83111);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(18,6.951871);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(19,4.085615);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(20,1.342113);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(21,1.045619);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinContent(22,0.4171165);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(0,0.09234008);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(1,273.0684);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(2,101.5435);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(3,51.63569);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(4,30.71523);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(5,20.76929);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(6,14.55049);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(7,10.79277);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(8,8.255666);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(9,6.349446);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(10,5.098861);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(11,4.064035);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(12,3.293396);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(13,2.54444);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(14,3.733197);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(15,1.658988);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(16,1.179366);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(17,1.274433);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(18,0.7145682);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(19,0.5293934);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(20,0.3043723);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(21,0.2609112);
   VbbHcc_tags_Aplanarity_all_stack_3->SetBinError(22,0.1872464);
   VbbHcc_tags_Aplanarity_all_stack_3->SetEntries(1.800198e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(1,41700.61);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(2,4762.97);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(3,1180.72);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(4,409.2169);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(5,160.633);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(6,73.08193);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(7,45.77319);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(8,24.7162);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(9,14.33121);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(10,17.16883);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(11,6.521188);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(12,3.043226);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(13,1.593562);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(14,1.654882);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(15,0.5745581);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(16,0.6141709);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(17,0.161896);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(18,0.5829431);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinContent(19,0.1251113);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(1,149.3223);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(2,57.89419);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(3,27.76555);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(4,16.86686);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(5,7.95226);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(6,4.885145);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(7,6.107951);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(8,3.95556);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(9,1.766251);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(10,4.613726);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(11,1.182888);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(12,0.6427574);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(13,0.3885371);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(14,0.4557627);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(15,0.2465742);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(16,0.3541874);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(17,0.1058758);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(18,0.4908676);
   VbbHcc_tags_Aplanarity_all_stack_4->SetBinError(19,0.1251113);
   VbbHcc_tags_Aplanarity_all_stack_4->SetEntries(340933);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(1,23524.23);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(2,2501.523);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(3,715.3336);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(4,241.0309);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(5,86.33372);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(6,64.28793);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(7,42.97342);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(8,16.13582);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(9,4.721736);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(10,5.35293);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(11,2.501196);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(12,2.734695);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(13,0.5935093);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(14,0.2580186);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(15,0.2584845);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(16,0.1282162);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(17,0.1333172);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(18,2.226874);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinContent(20,0.1210029);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(1,181.6212);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(2,62.81047);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(3,41.50261);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(4,19.5509);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(5,9.882546);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(6,12.84854);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(7,10.75844);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(8,3.367751);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(9,0.8409731);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(10,1.755926);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(11,0.5755648);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(12,0.8411962);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(13,0.2515851);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(14,0.1705512);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(15,0.2584845);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(16,0.1282162);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(17,0.1333172);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(18,2.226874);
   VbbHcc_tags_Aplanarity_all_stack_5->SetBinError(20,0.08807871);
   VbbHcc_tags_Aplanarity_all_stack_5->SetEntries(194636);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(1,133.9509);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(2,14.99913);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(3,3.622646);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(4,1.010794);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(5,1.21732);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(6,0.3389707);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(7,0.4837111);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinContent(8,0.1512027);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(1,5.11106);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(2,1.694457);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(3,0.7997569);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(4,0.3496365);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(5,0.5639643);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(6,0.2639083);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(7,0.3344415);
   VbbHcc_tags_Aplanarity_all_stack_6->SetBinError(8,0.1512027);
   VbbHcc_tags_Aplanarity_all_stack_6->SetEntries(1108);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(1,220.509);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(2,24.36924);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(3,4.6614);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(4,2.181895);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(5,1.13241);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(6,0.6654115);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(7,0.3867268);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinContent(8,0.2140754);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(1,5.538229);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(2,1.835672);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(3,0.8188547);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(4,0.4371734);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(5,0.5455028);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(6,0.3010846);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(7,0.3204199);
   VbbHcc_tags_Aplanarity_all_stack_7->SetBinError(8,0.1637536);
   VbbHcc_tags_Aplanarity_all_stack_7->SetEntries(2838);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(1,322.7042);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(2,33.11592);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(3,7.998172);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(4,1.970521);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(5,0.7656171);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(6,0.6910103);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinContent(8,0.2125369);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(1,8.373447);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(2,2.623374);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(3,1.294663);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(4,0.6256013);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(5,0.3829454);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(6,0.3497887);
   VbbHcc_tags_Aplanarity_all_stack_8->SetBinError(8,0.2125369);
   VbbHcc_tags_Aplanarity_all_stack_8->SetEntries(1788);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(1,212.7775);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(2,20.47342);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(3,4.625554);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(4,1.382628);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(5,0.685701);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(6,0.2898173);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(7,0.1763936);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(8,0.1032393);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(9,0.05528271);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(10,0.05562648);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(11,0.0266028);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(12,0.01287659);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(13,0.007579947);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(14,0.004879847);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(15,0.002692142);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(16,0.005410653);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(17,0.001576359);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(18,0.002315574);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(19,0.004395012);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinContent(20,0.001654253);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(1,0.6849163);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(2,0.2026695);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(3,0.09548417);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(4,0.0522175);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(5,0.0367645);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(6,0.02350993);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(7,0.01816107);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(8,0.01550374);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(9,0.01024692);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(10,0.0108879);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(11,0.007926553);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(12,0.004671025);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(13,0.003412108);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(14,0.003450874);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(15,0.001904222);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(16,0.003826404);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(17,0.001576359);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(18,0.002315574);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(19,0.002571783);
   VbbHcc_tags_Aplanarity_all_stack_9->SetBinError(20,0.001654253);
   VbbHcc_tags_Aplanarity_all_stack_9->SetEntries(135628);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(1,154.5738);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(2,17.70065);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(3,4.181055);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(4,1.383196);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(5,0.6753163);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(6,0.2775412);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(7,0.2033776);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(8,0.09097613);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(9,0.0554087);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(10,0.04089786);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(11,0.01781825);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(12,0.01382048);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(13,0.007352813);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(14,0.00756952);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(16,0.002120878);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(17,0.001564624);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(19,0.001564624);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinContent(21,0.001425026);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(1,0.2811966);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(2,0.095124);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(3,0.04615569);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(4,0.02660945);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(5,0.01851819);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(6,0.01182659);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(7,0.01018886);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(8,0.006809627);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(9,0.005324212);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(10,0.004503866);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(11,0.003017618);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(12,0.002541992);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(13,0.001946996);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(14,0.00200393);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(16,0.0009397488);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(17,0.0009254459);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(19,0.0009254459);
   VbbHcc_tags_Aplanarity_all_stack_10->SetBinError(21,0.0008428765);
   VbbHcc_tags_Aplanarity_all_stack_10->SetEntries(374655);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(1,5.929799);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(2,0.5257289);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(3,0.1170646);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(4,0.03994282);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(5,0.01180134);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(6,0.006587244);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(7,0.005825341);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(8,0.003340468);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(9,0.001952183);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinContent(11,0.001318812);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(1,0.1283979);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(2,0.03677043);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(3,0.01723362);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(4,0.009859529);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(5,0.004917909);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(6,0.003889688);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(7,0.003989872);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(8,0.003340468);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(9,0.001952183);
   VbbHcc_tags_Aplanarity_all_stack_11->SetBinError(11,0.001318812);
   VbbHcc_tags_Aplanarity_all_stack_11->SetEntries(2879);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_all_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_all_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(1,2.777931);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(2,0.3019034);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(3,0.06996064);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(4,0.02103265);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(5,0.009044586);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(6,0.002432158);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(7,0.0017706);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(8,0.004645125);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(9,0.001444079);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(10,0.0005283004);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(11,0.0008805845);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(12,0.0006439316);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(14,0.0006549438);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinContent(17,0.0003753755);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(1,0.03061041);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(2,0.009899475);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(3,0.004791691);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(4,0.002618814);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(5,0.001729256);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(6,0.0009096459);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(7,0.0007493002);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(8,0.001208732);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(9,0.0007291864);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(10,0.0003735727);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(11,0.000446635);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(12,0.0004556166);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(14,0.0004677797);
   VbbHcc_tags_Aplanarity_all_stack_12->SetBinError(17,0.0003753755);
   VbbHcc_tags_Aplanarity_all_stack_12->SetEntries(10461);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity_all__127 = new TH1D("VbbHcc_tags_Aplanarity_all__127","",50,0,1);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(0,2);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(1,4200761);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(2,541864);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(3,145310);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(4,51443);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(5,22090);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(6,11149);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(7,6074);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(8,3516);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(9,2103);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(10,1364);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(11,843);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(12,550);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(13,368);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(14,182);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(15,151);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(16,76);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(17,51);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(18,26);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(19,18);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(20,8);
   VbbHcc_tags_Aplanarity_all__127->SetBinContent(21,2);
   VbbHcc_tags_Aplanarity_all__127->SetEntries(4988000);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_all__127->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_all__127->SetLineWidth(2);
   VbbHcc_tags_Aplanarity_all__127->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity_all__127->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity_all__127->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_all__127->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__127->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__127->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__127->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_all__127->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__127->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_all__127->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_all__127->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_all__127->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fx1127[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fy1127[50] = {
   6246298,
   841194.1,
   208814.5,
   69691.13,
   26559.61,
   12215.15,
   6362.318,
   6950.285,
   2906.615,
   1235.646,
   783.7956,
   700.2294,
   716.865,
   130.3941,
   155.0186,
   23.39391,
   71.52797,
   63.34896,
   4.364041,
   1.764316,
   1.047044,
   0.4171165,
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fex1127[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_all_fey1127[50] = {
   54222.9,
   26227.3,
   6814.702,
   3704.367,
   2165.382,
   1099.003,
   673.3974,
   3166.412,
   544.3239,
   307.5897,
   91.10344,
   296.7932,
   432.4468,
   31.48572,
   32.47772,
   1.641736,
   23.006,
   37.20471,
   0.5506973,
   0.4492607,
   0.2609125,
   0.1872464,
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
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_all_fx1127,Graph_from_VbbHcc_tags_Aplanarity_all_fy1127,Graph_from_VbbHcc_tags_Aplanarity_all_fex1127,Graph_from_VbbHcc_tags_Aplanarity_all_fey1127);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetMaximum(6930573);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity_all1127);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__128 = new TH1D("data_mc_ratio__128","",50,0,1);
   data_mc_ratio__128->SetBinContent(0,21.65907);
   data_mc_ratio__128->SetBinContent(1,0.6725201);
   data_mc_ratio__128->SetBinContent(2,0.6441605);
   data_mc_ratio__128->SetBinContent(3,0.6958809);
   data_mc_ratio__128->SetBinContent(4,0.738157);
   data_mc_ratio__128->SetBinContent(5,0.8317141);
   data_mc_ratio__128->SetBinContent(6,0.9127187);
   data_mc_ratio__128->SetBinContent(7,0.9546835);
   data_mc_ratio__128->SetBinContent(8,0.5058785);
   data_mc_ratio__128->SetBinContent(9,0.7235219);
   data_mc_ratio__128->SetBinContent(10,1.103876);
   data_mc_ratio__128->SetBinContent(11,1.075535);
   data_mc_ratio__128->SetBinContent(12,0.7854568);
   data_mc_ratio__128->SetBinContent(13,0.5133463);
   data_mc_ratio__128->SetBinContent(14,1.395769);
   data_mc_ratio__128->SetBinContent(15,0.9740765);
   data_mc_ratio__128->SetBinContent(16,3.248709);
   data_mc_ratio__128->SetBinContent(17,0.7130078);
   data_mc_ratio__128->SetBinContent(18,0.410425);
   data_mc_ratio__128->SetBinContent(19,4.124617);
   data_mc_ratio__128->SetBinContent(20,4.534335);
   data_mc_ratio__128->SetBinContent(21,1.91014);
   data_mc_ratio__128->SetBinError(0,26.52683);
   data_mc_ratio__128->SetBinError(1,0.0003281265);
   data_mc_ratio__128->SetBinError(2,0.0008750824);
   data_mc_ratio__128->SetBinError(3,0.001825522);
   data_mc_ratio__128->SetBinError(4,0.00325451);
   data_mc_ratio__128->SetBinError(5,0.00559598);
   data_mc_ratio__128->SetBinError(6,0.008644084);
   data_mc_ratio__128->SetBinError(7,0.0122496);
   data_mc_ratio__128->SetBinError(8,0.00853143);
   data_mc_ratio__128->SetBinError(9,0.01577728);
   data_mc_ratio__128->SetBinError(10,0.02988911);
   data_mc_ratio__128->SetBinError(11,0.03704341);
   data_mc_ratio__128->SetBinError(12,0.03349199);
   data_mc_ratio__128->SetBinError(13,0.02676003);
   data_mc_ratio__128->SetBinError(14,0.1034613);
   data_mc_ratio__128->SetBinError(15,0.07926922);
   data_mc_ratio__128->SetBinError(16,0.3726525);
   data_mc_ratio__128->SetBinError(17,0.09984107);
   data_mc_ratio__128->SetBinError(18,0.08049097);
   data_mc_ratio__128->SetBinError(19,0.9721816);
   data_mc_ratio__128->SetBinError(20,1.603129);
   data_mc_ratio__128->SetBinError(21,1.350673);
   data_mc_ratio__128->SetMinimum(0.4);
   data_mc_ratio__128->SetMaximum(1.6);
   data_mc_ratio__128->SetEntries(93.63185);
   data_mc_ratio__128->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__128->SetLineColor(ci);
   data_mc_ratio__128->SetLineWidth(2);
   data_mc_ratio__128->SetMarkerStyle(20);
   data_mc_ratio__128->SetMarkerSize(1.2);
   data_mc_ratio__128->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__128->GetXaxis()->SetRange(1,50);
   data_mc_ratio__128->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__128->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__128->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__128->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__128->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__128->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__128->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__128->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__128->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__128->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__128->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__128->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__128->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__128->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__128->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1128[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1128[50] = {
   0.008680805,
   0.03117866,
   0.0326352,
   0.05315407,
   0.08152914,
   0.08997046,
   0.1058415,
   0.4555803,
   0.1872707,
   0.2489302,
   0.1162337,
   0.4238514,
   0.6032472,
   0.2414659,
   0.2095085,
   0.07017791,
   0.3216364,
   0.5872978,
   0.1261897,
   0.2546373,
   0.2491898,
   0.4489066,
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
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1128,Graph_from_mc_statistical_error_fy1128,Graph_from_mc_statistical_error_fex1128,Graph_from_mc_statistical_error_fey1128);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1128 = new TH1F("Graph_Graph_from_mc_statistical_error1128","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1128->SetMinimum(0.2761034);
   Graph_Graph_from_mc_statistical_error1128->SetMaximum(1.723897);
   Graph_Graph_from_mc_statistical_error1128->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1128->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1128->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1128->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1128);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->Modified();
   Aplanarity_tags_all->cd();
   Aplanarity_tags_all->SetSelected(Aplanarity_tags_all);
}
