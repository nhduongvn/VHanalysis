void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug  3 10:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(0,0,1,1);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetFillStyle(4000);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetFrameFillStyle(1000);
   Sphericity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-150.878,1.052419,150737.1);
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
   st->SetMaximum(129188.9);
   
   TH1F *st_stack_251 = new TH1F("st_stack_251","",25,0,1);
   st_stack_251->SetMinimum(0.01);
   st_stack_251->SetMaximum(135648.3);
   st_stack_251->SetDirectory(0);
   st_stack_251->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_251->SetLineColor(ci);
   st_stack_251->GetXaxis()->SetRange(1,25);
   st_stack_251->GetXaxis()->SetLabelFont(42);
   st_stack_251->GetXaxis()->SetLabelSize(0.035);
   st_stack_251->GetXaxis()->SetTitleSize(0.035);
   st_stack_251->GetXaxis()->SetTitleFont(42);
   st_stack_251->GetYaxis()->SetTitle("Events/0.04");
   st_stack_251->GetYaxis()->SetLabelFont(42);
   st_stack_251->GetYaxis()->SetLabelSize(0.05);
   st_stack_251->GetYaxis()->SetTitleSize(0.057);
   st_stack_251->GetYaxis()->SetTitleOffset(1.2);
   st_stack_251->GetYaxis()->SetTitleFont(42);
   st_stack_251->GetZaxis()->SetLabelFont(42);
   st_stack_251->GetZaxis()->SetLabelSize(0.035);
   st_stack_251->GetZaxis()->SetTitleSize(0.035);
   st_stack_251->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_251);
   
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,34650.27);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36127.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,25947.1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,27786.93);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,17862.11);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,15687.23);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,13561.45);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,7361.541);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,8591.081);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,6845.801);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4729.447);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,5454.812);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,3847.864);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2771.81);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,2426.697);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1660.381);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1807.25);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1035.557);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,790.3305);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,503.9384);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,444.7548);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,51.50686);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2362.985);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2528.789);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2055.166);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,3237.448);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2364.035);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1788.73);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1698.713);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,973.4829);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,1320.615);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,1146.583);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,869.8658);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1800.024);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,855.6981);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,567.4312);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,664.4376);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,411.2596);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,548.4675);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,391.9152);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,386.1347);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,375.1199);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,372.4755);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,34.80017);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10726);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,243.5367);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,238.7365);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,177.3282);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,136.1461);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,104.1604);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,84.97347);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,70.71955);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,62.28208);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,51.0757);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,44.6744);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,33.23577);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,33.11079);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,29.08584);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,21.7367);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,18.3558);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,11.84877);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,9.807134);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,9.284338);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,4.195757);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,1.39678);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.7781583);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(22,0.1519672);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04860075);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(25,0.05476569);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,6.417939);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,6.166427);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,5.414611);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,4.821831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,4.219038);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,3.874556);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,3.553868);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,3.395121);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.959073);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.771665);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,2.466094);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,2.45531);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,2.337306);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.880602);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.871759);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.38127);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,1.317455);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.32089);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.8218436);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.5316778);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.4177801);
   VbbHcc_both_Sphericity_stack_2->SetBinError(22,0.08788257);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04860075);
   VbbHcc_both_Sphericity_stack_2->SetBinError(25,0.05476569);
   VbbHcc_both_Sphericity_stack_2->SetEntries(15898);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,4438.007);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,4862.207);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,3616.161);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,2740.549);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,2137.125);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,1697.716);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,1407.217);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,1175.45);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,995.3551);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,820.7503);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,718.6288);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,609.9168);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,515.5576);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,430.9101);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,357.8076);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,286.4053);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,220.7455);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,154.9204);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,93.35303);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,45.13231);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,16.07481);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,6.591778);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,1.383664);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(24,0.1999053);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,16.55341);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,17.32455);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,14.9484);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,13.01606);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,11.49494);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,10.24893);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,9.332184);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,8.528874);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,7.853132);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,7.131879);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,6.67333);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,6.151416);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,5.643242);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,5.169455);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,4.708465);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,4.208649);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,3.701916);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,3.095843);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,2.409232);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.673018);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.9976626);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.6394721);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2929305);
   VbbHcc_both_Sphericity_stack_3->SetBinError(24,0.1025517);
   VbbHcc_both_Sphericity_stack_3->SetEntries(458232);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,595.3279);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,593.5526);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,438.5243);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,333.2872);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,276.0218);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,197.7128);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,182.0918);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,141.3412);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,116.7109);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,102.7898);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,89.30957);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,60.10905);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,61.86222);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,53.3623);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,41.15586);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,37.83401);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,27.36188);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,15.69805);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,8.196981);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,6.146289);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,2.182903);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,16.83721);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,17.20186);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,14.75735);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,13.08093);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,11.74494);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,8.244429);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,10.50139);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,7.232188);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.894064);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,7.599594);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,7.445282);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.76367);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,5.582952);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,5.417415);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,4.98107);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,3.174067);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.832146);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.206562);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.485449);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.411262);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.890675);
   VbbHcc_both_Sphericity_stack_4->SetEntries(19394);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_5 = new TH1D("VbbHcc_both_Sphericity_stack_5","",25,0,1);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(1,54.26217);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(2,65.38861);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(3,53.59343);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(4,27.01311);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(5,25.58604);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(6,26.77257);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(7,18.93861);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(8,16.23054);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(9,9.487493);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(10,6.80431);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(11,10.17669);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(12,7.581223);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(13,3.962175);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(14,3.171911);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(15,5.649627);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(16,2.480223);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(17,4.355181);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(18,3.870917);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(19,0.4132988);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(20,0.386066);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(21,0.01224321);
   VbbHcc_both_Sphericity_stack_5->SetBinContent(22,0.1265664);
   VbbHcc_both_Sphericity_stack_5->SetBinError(1,5.129255);
   VbbHcc_both_Sphericity_stack_5->SetBinError(2,12.34185);
   VbbHcc_both_Sphericity_stack_5->SetBinError(3,7.042565);
   VbbHcc_both_Sphericity_stack_5->SetBinError(4,3.33171);
   VbbHcc_both_Sphericity_stack_5->SetBinError(5,4.515032);
   VbbHcc_both_Sphericity_stack_5->SetBinError(6,4.594698);
   VbbHcc_both_Sphericity_stack_5->SetBinError(7,3.918934);
   VbbHcc_both_Sphericity_stack_5->SetBinError(8,2.651887);
   VbbHcc_both_Sphericity_stack_5->SetBinError(9,2.398531);
   VbbHcc_both_Sphericity_stack_5->SetBinError(10,1.035208);
   VbbHcc_both_Sphericity_stack_5->SetBinError(11,2.477052);
   VbbHcc_both_Sphericity_stack_5->SetBinError(12,2.305991);
   VbbHcc_both_Sphericity_stack_5->SetBinError(13,0.819129);
   VbbHcc_both_Sphericity_stack_5->SetBinError(14,0.7654374);
   VbbHcc_both_Sphericity_stack_5->SetBinError(15,2.21798);
   VbbHcc_both_Sphericity_stack_5->SetBinError(16,0.5678039);
   VbbHcc_both_Sphericity_stack_5->SetBinError(17,2.161897);
   VbbHcc_both_Sphericity_stack_5->SetBinError(18,2.164654);
   VbbHcc_both_Sphericity_stack_5->SetBinError(19,0.2892428);
   VbbHcc_both_Sphericity_stack_5->SetBinError(20,0.2887198);
   VbbHcc_both_Sphericity_stack_5->SetBinError(21,0.01224321);
   VbbHcc_both_Sphericity_stack_5->SetBinError(22,0.1265664);
   VbbHcc_both_Sphericity_stack_5->SetEntries(2575);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_6 = new TH1D("VbbHcc_both_Sphericity_stack_6","",25,0,1);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(5,0.9040853);
   VbbHcc_both_Sphericity_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetBinError(2,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetBinError(4,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetBinError(5,0.6392849);
   VbbHcc_both_Sphericity_stack_6->SetBinError(13,0.4520427);
   VbbHcc_both_Sphericity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_7 = new TH1D("VbbHcc_both_Sphericity_stack_7","",25,0,1);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(1,3.187792);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(2,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(3,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(7,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(13,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(1,1.062597);
   VbbHcc_both_Sphericity_stack_7->SetBinError(2,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(3,0.6134909);
   VbbHcc_both_Sphericity_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Sphericity_stack_7->SetBinError(7,0.6134909);
   VbbHcc_both_Sphericity_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(13,0.5009132);
   VbbHcc_both_Sphericity_stack_7->SetBinError(14,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_Sphericity_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,11.17657);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,11.17657);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,7.264773);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,7.823602);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,6.705944);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,2.794144);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,3.632387);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.632387);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,1.9559);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.514729);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.397072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.5588287);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.8382431);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.397072);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.767172);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.767172);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.424739);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.478522);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.368845);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,0.8835858);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.007443);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.007443);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.7392609);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.8382431);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.6247895);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.4839599);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.3951516);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.4839599);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.6247895);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_Sphericity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_9 = new TH1D("VbbHcc_both_Sphericity_stack_9","",25,0,1);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(1,10.10314);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(2,10.34772);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(3,7.554498);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(4,6.455039);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(5,5.149859);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(6,4.345265);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(7,3.618388);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(8,3.0378);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(9,2.564644);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(10,2.125774);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(11,1.794336);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(12,1.437755);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(13,1.27775);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(14,0.9508839);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(15,0.8708817);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(16,0.6880194);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(17,0.4342979);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(18,0.3474384);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(19,0.1508614);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(20,0.06628758);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(21,0.02514357);
   VbbHcc_both_Sphericity_stack_9->SetBinContent(22,0.002285779);
   VbbHcc_both_Sphericity_stack_9->SetBinError(1,0.1519656);
   VbbHcc_both_Sphericity_stack_9->SetBinError(2,0.153794);
   VbbHcc_both_Sphericity_stack_9->SetBinError(3,0.1314074);
   VbbHcc_both_Sphericity_stack_9->SetBinError(4,0.1214693);
   VbbHcc_both_Sphericity_stack_9->SetBinError(5,0.1084963);
   VbbHcc_both_Sphericity_stack_9->SetBinError(6,0.099661);
   VbbHcc_both_Sphericity_stack_9->SetBinError(7,0.09094412);
   VbbHcc_both_Sphericity_stack_9->SetBinError(8,0.08332909);
   VbbHcc_both_Sphericity_stack_9->SetBinError(9,0.07656506);
   VbbHcc_both_Sphericity_stack_9->SetBinError(10,0.06970688);
   VbbHcc_both_Sphericity_stack_9->SetBinError(11,0.06404261);
   VbbHcc_both_Sphericity_stack_9->SetBinError(12,0.05732704);
   VbbHcc_both_Sphericity_stack_9->SetBinError(13,0.05404308);
   VbbHcc_both_Sphericity_stack_9->SetBinError(14,0.04662092);
   VbbHcc_both_Sphericity_stack_9->SetBinError(15,0.04461662);
   VbbHcc_both_Sphericity_stack_9->SetBinError(16,0.03965678);
   VbbHcc_both_Sphericity_stack_9->SetBinError(17,0.03150728);
   VbbHcc_both_Sphericity_stack_9->SetBinError(18,0.02818097);
   VbbHcc_both_Sphericity_stack_9->SetBinError(19,0.01856975);
   VbbHcc_both_Sphericity_stack_9->SetBinError(20,0.01230929);
   VbbHcc_both_Sphericity_stack_9->SetBinError(21,0.00758107);
   VbbHcc_both_Sphericity_stack_9->SetBinError(22,0.002285779);
   VbbHcc_both_Sphericity_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,4.4687);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,4.900905);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,3.60131);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.784592);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,2.449558);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.957143);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.629263);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.43492);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,1.209577);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.061137);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.910909);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.7726035);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.6527784);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.5824333);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.4572429);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.3845133);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2652844);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.2026892);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.1257865);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.05663374);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.01251904);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.004173012);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001788434);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.05161387);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.05405227);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.04633467);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.04074334);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.03821375);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.03415758);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.03116531);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02924756);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02685299);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02515137);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02330308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02146121);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01972689);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01863369);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01651009);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.0151402);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01257568);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01099236);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.008659501);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.005810499);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002731878);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00157725);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.001032553);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.03413643);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.02730914);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01137881);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.02730914);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01593033);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.009103048);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.006827286);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008813988);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.00788347);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005088758);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.00788347);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.006436827);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.0060211);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.005574455);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.004551524);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.003941735);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.003218413);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Sphericity_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.01977735);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01438353);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.01048799);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.01078764);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.008989704);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.006292793);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.005094166);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.003895538);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003595882);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.003296225);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002097598);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002097598);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.002696911);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.0005993136);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.001498284);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.002434423);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.002076083);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001772794);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001797941);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001641288);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.0013732);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001235517);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.001080428);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.001038042);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0009938492);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0007928174);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0007928174);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0008989704);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0004237787);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.000670053);
   VbbHcc_both_Sphericity_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_both_Sphericity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Sphericity__501 = new TH1D("VbbHcc_both_Sphericity__501","",25,0,1);
   VbbHcc_both_Sphericity__501->SetBinContent(1,56518);
   VbbHcc_both_Sphericity__501->SetBinContent(2,58135);
   VbbHcc_both_Sphericity__501->SetBinContent(3,43214);
   VbbHcc_both_Sphericity__501->SetBinContent(4,32717);
   VbbHcc_both_Sphericity__501->SetBinContent(5,25564);
   VbbHcc_both_Sphericity__501->SetBinContent(6,20279);
   VbbHcc_both_Sphericity__501->SetBinContent(7,16647);
   VbbHcc_both_Sphericity__501->SetBinContent(8,13714);
   VbbHcc_both_Sphericity__501->SetBinContent(9,11283);
   VbbHcc_both_Sphericity__501->SetBinContent(10,9601);
   VbbHcc_both_Sphericity__501->SetBinContent(11,8128);
   VbbHcc_both_Sphericity__501->SetBinContent(12,6904);
   VbbHcc_both_Sphericity__501->SetBinContent(13,5941);
   VbbHcc_both_Sphericity__501->SetBinContent(14,4752);
   VbbHcc_both_Sphericity__501->SetBinContent(15,4041);
   VbbHcc_both_Sphericity__501->SetBinContent(16,3037);
   VbbHcc_both_Sphericity__501->SetBinContent(17,2505);
   VbbHcc_both_Sphericity__501->SetBinContent(18,1776);
   VbbHcc_both_Sphericity__501->SetBinContent(19,971);
   VbbHcc_both_Sphericity__501->SetBinContent(20,406);
   VbbHcc_both_Sphericity__501->SetBinContent(21,164);
   VbbHcc_both_Sphericity__501->SetBinContent(22,50);
   VbbHcc_both_Sphericity__501->SetBinContent(23,17);
   VbbHcc_both_Sphericity__501->SetBinContent(24,3);
   VbbHcc_both_Sphericity__501->SetBinContent(25,1);
   VbbHcc_both_Sphericity__501->SetEntries(326392);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Sphericity__501->SetLineColor(ci);
   VbbHcc_both_Sphericity__501->SetLineWidth(2);
   VbbHcc_both_Sphericity__501->SetMarkerStyle(20);
   VbbHcc_both_Sphericity__501->SetMarkerSize(1.2);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity__501->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity__501->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__501->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Sphericity_fx1501[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fy1501[25] = {
   40010.4,
   41914.81,
   30252.21,
   31041.48,
   20420.95,
   17704.94,
   15250.38,
   8765.666,
   9769.453,
   7826.888,
   5585.617,
   6168.58,
   4461.983,
   3283.724,
   2851.275,
   2001.776,
   2070.505,
   1220.237,
   897.0457,
   557.4022,
   463.8405,
   58.38393,
   1.434054,
   0.1999053,
   0.05476569};
   Double_t Graph_from_VbbHcc_both_Sphericity_fex1501[25] = {
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
   Double_t Graph_from_VbbHcc_both_Sphericity_fey1501[25] = {
   2363.118,
   2528.946,
   2055.293,
   3237.507,
   2364.1,
   1788.789,
   1698.78,
   973.5573,
   1320.668,
   1146.634,
   869.9307,
   1800.041,
   855.7389,
   567.4846,
   664.4794,
   411.2967,
   548.4933,
   391.942,
   386.1462,
   375.1269,
   372.4782,
   34.80639,
   0.2969367,
   0.1025517,
   0.05476569};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_both_Sphericity_fx1501,Graph_from_VbbHcc_both_Sphericity_fy1501,Graph_from_VbbHcc_both_Sphericity_fex1501,Graph_from_VbbHcc_both_Sphericity_fey1501);
   gre->SetName("Graph_from_VbbHcc_both_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Sphericity1501 = new TH1F("Graph_Graph_from_VbbHcc_both_Sphericity1501","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetMaximum(48888.13);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Sphericity1501->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Sphericity1501->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Sphericity1501);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__502 = new TH1D("data_mc_ratio__502","",25,0,1);
   data_mc_ratio__502->SetBinContent(1,1.412583);
   data_mc_ratio__502->SetBinContent(2,1.38698);
   data_mc_ratio__502->SetBinContent(3,1.428457);
   data_mc_ratio__502->SetBinContent(4,1.053977);
   data_mc_ratio__502->SetBinContent(5,1.251852);
   data_mc_ratio__502->SetBinContent(6,1.145386);
   data_mc_ratio__502->SetBinContent(7,1.09158);
   data_mc_ratio__502->SetBinContent(8,1.564513);
   data_mc_ratio__502->SetBinContent(9,1.154926);
   data_mc_ratio__502->SetBinContent(10,1.226669);
   data_mc_ratio__502->SetBinContent(11,1.455166);
   data_mc_ratio__502->SetBinContent(12,1.11922);
   data_mc_ratio__502->SetBinContent(13,1.331471);
   data_mc_ratio__502->SetBinContent(14,1.447137);
   data_mc_ratio__502->SetBinContent(15,1.417261);
   data_mc_ratio__502->SetBinContent(16,1.517153);
   data_mc_ratio__502->SetBinContent(17,1.20985);
   data_mc_ratio__502->SetBinContent(18,1.455455);
   data_mc_ratio__502->SetBinContent(19,1.082442);
   data_mc_ratio__502->SetBinContent(20,0.7283789);
   data_mc_ratio__502->SetBinContent(21,0.3535698);
   data_mc_ratio__502->SetBinContent(22,0.8564001);
   data_mc_ratio__502->SetBinContent(23,11.85451);
   data_mc_ratio__502->SetBinContent(24,15.0071);
   data_mc_ratio__502->SetBinContent(25,18.25961);
   data_mc_ratio__502->SetBinError(1,0.005941834);
   data_mc_ratio__502->SetBinError(2,0.00575243);
   data_mc_ratio__502->SetBinError(3,0.006871556);
   data_mc_ratio__502->SetBinError(4,0.005826991);
   data_mc_ratio__502->SetBinError(5,0.00782958);
   data_mc_ratio__502->SetBinError(6,0.008043197);
   data_mc_ratio__502->SetBinError(7,0.008460333);
   data_mc_ratio__502->SetBinError(8,0.01335971);
   data_mc_ratio__502->SetBinError(9,0.01087282);
   data_mc_ratio__502->SetBinError(10,0.01251898);
   data_mc_ratio__502->SetBinError(11,0.01614064);
   data_mc_ratio__502->SetBinError(12,0.01346992);
   data_mc_ratio__502->SetBinError(13,0.01727436);
   data_mc_ratio__502->SetBinError(14,0.02099286);
   data_mc_ratio__502->SetBinError(15,0.02229489);
   data_mc_ratio__502->SetBinError(16,0.02753005);
   data_mc_ratio__502->SetBinError(17,0.02417284);
   data_mc_ratio__502->SetBinError(18,0.03453641);
   data_mc_ratio__502->SetBinError(19,0.03473722);
   data_mc_ratio__502->SetBinError(20,0.03614884);
   data_mc_ratio__502->SetBinError(21,0.02760916);
   data_mc_ratio__502->SetBinError(22,0.1211133);
   data_mc_ratio__502->SetBinError(23,2.87514);
   data_mc_ratio__502->SetBinError(24,8.664356);
   data_mc_ratio__502->SetBinError(25,18.25961);
   data_mc_ratio__502->SetMinimum(0.4);
   data_mc_ratio__502->SetMaximum(1.6);
   data_mc_ratio__502->SetEntries(6.309963);
   data_mc_ratio__502->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__502->SetLineColor(ci);
   data_mc_ratio__502->SetLineWidth(2);
   data_mc_ratio__502->SetMarkerStyle(20);
   data_mc_ratio__502->SetMarkerSize(1.2);
   data_mc_ratio__502->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__502->GetXaxis()->SetRange(1,25);
   data_mc_ratio__502->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__502->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__502->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__502->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__502->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__502->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__502->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__502->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__502->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__502->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__502->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__502->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__502->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__502->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__502->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1502[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1502[25] = {
   0.05906261,
   0.06033538,
   0.0679386,
   0.1042961,
   0.1157684,
   0.1010333,
   0.1113927,
   0.1110648,
   0.1351834,
   0.1464994,
   0.1557448,
   0.291808,
   0.1917844,
   0.1728174,
   0.2330464,
   0.205466,
   0.264908,
   0.3212015,
   0.4304644,
   0.6729914,
   0.8030306,
   0.5961639,
   0.207061,
   0.5130016,
   1};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1502,Graph_from_mc_statistical_error_fy1502,Graph_from_mc_statistical_error_fex1502,Graph_from_mc_statistical_error_fey1502);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1502 = new TH1F("Graph_Graph_from_mc_statistical_error1502","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1502->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1502->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1502->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1502->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1502->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1502->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1502->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1502);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
