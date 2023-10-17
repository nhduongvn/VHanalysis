#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algoFirst_18()
{
//=========Macro generated from canvas: Sphericity_algoFirst_18/Sphericity_algoFirst_18
//=========  (Tue Oct 17 10:19:57 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_algoFirst_18 = new TCanvas("Sphericity_algoFirst_18", "Sphericity_algoFirst_18",0,0,600,600);
   Sphericity_algoFirst_18->SetHighLightColor(2);
   Sphericity_algoFirst_18->Range(0,0,1,1);
   Sphericity_algoFirst_18->SetFillColor(0);
   Sphericity_algoFirst_18->SetFillStyle(4000);
   Sphericity_algoFirst_18->SetBorderMode(0);
   Sphericity_algoFirst_18->SetBorderSize(2);
   Sphericity_algoFirst_18->SetFrameFillStyle(1000);
   Sphericity_algoFirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-273.6211,1.052419,273357.5);
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
   st->SetMaximum(245994.4);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",25,0,1);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(245994.4);
   st_stack_117->SetDirectory(nullptr);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->SetLineWidth(0);
   st_stack_117->GetXaxis()->SetRange(1,25);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetTitleOffset(1);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.04");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetTitleOffset(1);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_1 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_1","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(1,99773.74);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(2,87667.09);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(3,43151.49);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(4,21755.22);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(5,11023.81);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(6,5876.485);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(7,1340.702);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(8,249.5974);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(9,19.80267);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(10,4.313253);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(11,46.25752);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(12,6.175585);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(13,10.60803);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(14,33.24333);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinContent(17,1.660553);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(1,7264.92);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(2,7838.475);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(3,4394.465);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(4,2447.947);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(5,1703.42);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(6,1468.46);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(7,279.0891);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(8,91.96757);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(9,11.79112);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(10,4.313253);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(11,27.56277);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(12,6.175585);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(13,10.60803);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(14,29.17789);
   VbbHcc_algoFirst_Sphericity_stack_1->SetBinError(17,1.660553);
   VbbHcc_algoFirst_Sphericity_stack_1->SetEntries(13739);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_2 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_2","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(1,803.0498);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(2,738.6605);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(3,411.1914);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(4,239.1679);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(5,124.4076);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(6,49.78331);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(7,18.70516);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(8,8.829755);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(9,0.985546);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(10,0.8470177);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(11,1.211081);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(12,1.467257);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(13,0.5420058);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(14,0.1712293);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(15,0.0529326);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(16,0.5090915);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(17,0.1850077);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinContent(18,0.2683332);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(1,18.74619);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(2,16.55422);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(3,11.80582);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(4,11.3203);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(5,7.03749);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(6,4.180895);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(7,3.456273);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(8,1.891385);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(9,0.252462);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(10,0.3656727);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(11,0.7145111);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(12,0.6682193);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(13,0.3076111);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(14,0.109082);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(15,0.0529326);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(16,0.4639925);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(17,0.09345145);
   VbbHcc_algoFirst_Sphericity_stack_2->SetBinError(18,0.2697961);
   VbbHcc_algoFirst_Sphericity_stack_2->SetEntries(22101);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_3 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_3","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(1,8852.978);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(2,8732.569);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(3,4912.941);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(4,2682.923);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(5,1418.251);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(6,685.1618);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(7,302.7172);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(8,139.5099);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(9,70.98056);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(10,38.91206);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(11,23.31025);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(12,14.53535);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(13,8.896039);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(14,6.258369);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(15,7.202579);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(16,3.021526);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(17,2.316093);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(18,0.6354914);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(19,0.2933584);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(20,0.5272029);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinContent(23,0.03246303);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(1,35.75919);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(2,35.457);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(3,27.52062);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(4,21.96775);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(5,14.41475);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(6,10.15173);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(7,6.544024);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(8,4.523564);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(9,3.065509);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(10,2.23406);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(11,1.617474);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(12,1.224077);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(13,1.030074);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(14,0.8729944);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(15,1.171578);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(16,0.6227909);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(17,0.7075553);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(18,0.2494623);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(19,0.1087628);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(20,0.367658);
   VbbHcc_algoFirst_Sphericity_stack_3->SetBinError(23,0.03246303);
   VbbHcc_algoFirst_Sphericity_stack_3->SetEntries(317249);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_4 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_4","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(1,763.3728);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(2,743.9607);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(3,376.3973);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(4,251.9693);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(5,119.8703);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(6,64.15503);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(7,15.56389);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(8,2.533441);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(9,1.907334);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(10,0.5031397);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(11,0.5675218);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(12,0.780676);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(15,0.0901041);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinContent(18,0.01785026);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(1,25.38824);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(2,31.55379);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(3,15.99051);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(4,19.25096);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(5,7.679167);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(6,6.317938);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(7,2.602446);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(8,1.043756);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(9,1.056195);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(10,0.5031397);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(11,0.3383472);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(12,0.4035653);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(15,0.0901041);
   VbbHcc_algoFirst_Sphericity_stack_4->SetBinError(18,0.01785026);
   VbbHcc_algoFirst_Sphericity_stack_4->SetEntries(8285);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_5 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_5","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(1,463.9563);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(2,371.2918);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(3,186.4339);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(4,136.1364);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(5,58.74867);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(6,17.54457);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(7,4.832374);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(8,23.14942);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(9,0.8026167);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(10,0.2309887);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(11,0.3820697);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(12,0.1192612);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(14,0.08536282);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinContent(17,0.519584);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(1,58.95418);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(2,27.09368);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(3,21.44283);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(4,24.10951);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(5,13.25414);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(6,2.857676);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(7,1.565433);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(8,15.96958);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(9,0.8026167);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(10,0.2309887);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(11,0.3820697);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(12,0.1192612);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(14,0.08536282);
   VbbHcc_algoFirst_Sphericity_stack_5->SetBinError(17,0.519584);
   VbbHcc_algoFirst_Sphericity_stack_5->SetEntries(3466);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_6 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_6","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(1,1.989786);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(3,1.516952);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinContent(5,0.2292575);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(1,0.9993547);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(3,0.8864647);
   VbbHcc_algoFirst_Sphericity_stack_6->SetBinError(5,0.2292575);
   VbbHcc_algoFirst_Sphericity_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_7 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_7","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(1,19.23635);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(2,9.351921);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(3,7.775545);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(4,4.92085);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(5,4.722611);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(6,2.597972);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinContent(7,0.7268289);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(1,3.451157);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(2,2.260227);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(3,2.214838);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(4,1.893878);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(5,3.014515);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(6,1.347971);
   VbbHcc_algoFirst_Sphericity_stack_7->SetBinError(7,0.5396779);
   VbbHcc_algoFirst_Sphericity_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_8 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_8","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(1,10.72752);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(2,8.493146);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(3,4.934129);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(4,4.153708);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(5,4.841569);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(6,1.267267);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinContent(7,1.16141);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(1,2.01155);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(2,1.836676);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(3,1.564901);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(4,1.410324);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(5,1.507841);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(6,0.5962879);
   VbbHcc_algoFirst_Sphericity_stack_8->SetBinError(7,0.8453635);
   VbbHcc_algoFirst_Sphericity_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_9 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_9","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(1,5.524514);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(2,4.662184);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(3,2.62878);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(4,1.663888);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(5,1.143801);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(6,0.4990146);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(7,0.1073779);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(8,0.01013846);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(9,0.007569761);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(10,0.007760159);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(11,0.006755825);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(12,0.002199128);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinContent(20,0.008501384);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(1,0.2690197);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(2,0.1524158);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(3,0.1063896);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(4,0.0845943);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(5,0.07160237);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(6,0.04181796);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(7,0.0202703);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(8,0.005209097);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(9,0.004400318);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(10,0.005687329);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(11,0.005008849);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(12,0.002199128);
   VbbHcc_algoFirst_Sphericity_stack_9->SetBinError(20,0.008501384);
   VbbHcc_algoFirst_Sphericity_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_10 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_10","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(1,2.607811);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(2,2.481566);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(3,1.435061);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(4,0.8729429);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(5,0.497454);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(6,0.241557);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(7,0.07482383);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(8,0.02164316);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(9,0.00519448);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(10,0.003063891);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(11,0.001710952);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(12,0.001554206);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(13,0.001694865);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(14,0.0006469631);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(16,0.0004105887);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinContent(18,0.0005097602);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(1,0.03748309);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(2,0.03627096);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(3,0.02775795);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(4,0.02170123);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(5,0.01629834);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(6,0.01146472);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(7,0.006355775);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(8,0.003296935);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(9,0.001679319);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(10,0.001288289);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(11,0.001008832);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(12,0.0007831688);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(13,0.0008494974);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(14,0.0006469631);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(16,0.0004105887);
   VbbHcc_algoFirst_Sphericity_stack_10->SetBinError(18,0.0005097602);
   VbbHcc_algoFirst_Sphericity_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_11 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_11","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(1,0.2078761);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(2,0.1730519);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(3,0.05842662);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(4,0.07742043);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(5,0.0494301);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(6,0.02293693);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinContent(7,0.008861871);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(1,0.02412756);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(2,0.02386734);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(3,0.01307958);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(4,0.01468937);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(5,0.01175787);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(6,0.007984564);
   VbbHcc_algoFirst_Sphericity_stack_11->SetBinError(7,0.008861871);
   VbbHcc_algoFirst_Sphericity_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_Sphericity_stack_12 = new TH1D("VbbHcc_algoFirst_Sphericity_stack_12","",25,0,1);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(1,0.0810548);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(2,0.06871955);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(3,0.02913314);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(4,0.02253374);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(5,0.01435473);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(6,0.009977564);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(7,0.00314072);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(8,0.0003132979);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(10,0.001166124);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinContent(12,0.0002618717);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(1,0.00612552);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(2,0.005248201);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(3,0.003329534);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(4,0.002822786);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(5,0.003170291);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(6,0.001891318);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(7,0.001326076);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(8,0.0003132979);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(10,0.0007026711);
   VbbHcc_algoFirst_Sphericity_stack_12->SetBinError(12,0.0002618717);
   VbbHcc_algoFirst_Sphericity_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_Sphericity__233 = new TH1D("VbbHcc_algoFirst_Sphericity__233","",25,0,1);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(1,101161);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(2,92803);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(3,52714);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(4,28248);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(5,13974);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(6,5751);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(7,1886);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(8,627);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(9,273);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(10,112);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(11,77);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(12,51);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(13,28);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(14,21);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(15,13);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(16,7);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(17,7);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(18,10);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(19,2);
   VbbHcc_algoFirst_Sphericity__233->SetBinContent(22,1);
   VbbHcc_algoFirst_Sphericity__233->SetEntries(297790);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_Sphericity__233->SetLineColor(ci);
   VbbHcc_algoFirst_Sphericity__233->SetLineWidth(2);
   VbbHcc_algoFirst_Sphericity__233->SetMarkerStyle(20);
   VbbHcc_algoFirst_Sphericity__233->SetMarkerSize(1.2);
   VbbHcc_algoFirst_Sphericity__233->GetXaxis()->SetRange(1,100);
   VbbHcc_algoFirst_Sphericity__233->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__233->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__233->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__233->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__233->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__233->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Sphericity__233->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Sphericity__233->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Sphericity__233->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fx1233[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fy1233[25] = { 110697.5, 98278.81, 49056.83, 25077.12, 12756.58, 6697.769, 1684.603, 423.652, 94.4915, 44.81845, 71.73691, 23.08214, 20.04777, 39.75893, 7.345616, 3.531028, 4.681238,
   0.9221847, 0.2933584, 0.5357043, 0, 0, 0.03246303, 0, 0 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fex1233[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VbbHcc_algoFirst_Sphericity_fey1233[25] = { 7265.317, 7838.683, 4394.649, 2448.267, 1703.568, 1468.518, 279.2055, 93.47829, 12.2577, 4.902595, 27.62415, 6.345063, 10.66236, 29.19128, 1.176229, 0.7766323, 1.880631,
   0.3678862, 0.1087628, 0.3677562, 0, 0, 0.03246303, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algoFirst_Sphericity_fx1233,Graph_from_VbbHcc_algoFirst_Sphericity_fy1233,Graph_from_VbbHcc_algoFirst_Sphericity_fex1233,Graph_from_VbbHcc_algoFirst_Sphericity_fey1233);
   gre->SetName("Graph_from_VbbHcc_algoFirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->SetMaximum(129759.1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_Sphericity1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algoFirst_18->cd();
  
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
   
   TH1D *data_mc_ratio__234 = new TH1D("data_mc_ratio__234","",25,0,1);
   data_mc_ratio__234->SetBinContent(1,0.9138511);
   data_mc_ratio__234->SetBinContent(2,0.9442829);
   data_mc_ratio__234->SetBinContent(3,1.07455);
   data_mc_ratio__234->SetBinContent(4,1.126445);
   data_mc_ratio__234->SetBinContent(5,1.095434);
   data_mc_ratio__234->SetBinContent(6,0.8586442);
   data_mc_ratio__234->SetBinContent(7,1.119552);
   data_mc_ratio__234->SetBinContent(8,1.479988);
   data_mc_ratio__234->SetBinContent(9,2.889149);
   data_mc_ratio__234->SetBinContent(10,2.498971);
   data_mc_ratio__234->SetBinContent(11,1.073367);
   data_mc_ratio__234->SetBinContent(12,2.2095);
   data_mc_ratio__234->SetBinContent(13,1.396664);
   data_mc_ratio__234->SetBinContent(14,0.5281832);
   data_mc_ratio__234->SetBinContent(15,1.769763);
   data_mc_ratio__234->SetBinContent(16,1.982425);
   data_mc_ratio__234->SetBinContent(17,1.495331);
   data_mc_ratio__234->SetBinContent(18,10.84382);
   data_mc_ratio__234->SetBinContent(19,6.817599);
   data_mc_ratio__234->SetBinError(1,0.00287322);
   data_mc_ratio__234->SetBinError(2,0.003099711);
   data_mc_ratio__234->SetBinError(3,0.00468019);
   data_mc_ratio__234->SetBinError(4,0.00670218);
   data_mc_ratio__234->SetBinError(5,0.009266718);
   data_mc_ratio__234->SetBinError(6,0.01132248);
   data_mc_ratio__234->SetBinError(7,0.02577943);
   data_mc_ratio__234->SetBinError(8,0.05910504);
   data_mc_ratio__234->SetBinError(9,0.1748592);
   data_mc_ratio__234->SetBinError(10,0.2361306);
   data_mc_ratio__234->SetBinError(11,0.1223215);
   data_mc_ratio__234->SetBinError(12,0.3093919);
   data_mc_ratio__234->SetBinError(13,0.2639448);
   data_mc_ratio__234->SetBinError(14,0.115259);
   data_mc_ratio__234->SetBinError(15,0.490844);
   data_mc_ratio__234->SetBinError(16,0.7492864);
   data_mc_ratio__234->SetBinError(17,0.565182);
   data_mc_ratio__234->SetBinError(18,3.429115);
   data_mc_ratio__234->SetBinError(19,4.820771);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(27.79328);
   data_mc_ratio__234->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__234->SetLineColor(ci);
   data_mc_ratio__234->SetLineWidth(2);
   data_mc_ratio__234->SetMarkerStyle(20);
   data_mc_ratio__234->SetMarkerSize(1.2);
   data_mc_ratio__234->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__234->GetXaxis()->SetRange(1,25);
   data_mc_ratio__234->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__234->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__234->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__234->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__234->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__234->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__234->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__234->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__234->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__234->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1234[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1234[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1234[25] = { 0.06563219, 0.07975965, 0.08958283, 0.09762951, 0.1335442, 0.2192548, 0.1657396, 0.2206488, 0.1297228, 0.1093879, 0.3850758, 0.2748906, 0.5318477, 0.7342067, 0.1601267, 0.2199451, 0.401738,
   0.398929, 0.3707506, 0.6864911, 0, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algoFirst_18->cd();
   Sphericity_algoFirst_18->Modified();
   Sphericity_algoFirst_18->cd();
   Sphericity_algoFirst_18->SetSelected(Sphericity_algoFirst_18);
}
