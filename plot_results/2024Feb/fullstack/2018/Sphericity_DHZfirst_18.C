#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_18/Sphericity_DHZfirst_18
//=========  (Wed Feb 14 12:33:03 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_18 = new TCanvas("Sphericity_DHZfirst_18", "Sphericity_DHZfirst_18",0,0,600,600);
   Sphericity_DHZfirst_18->SetHighLightColor(2);
   Sphericity_DHZfirst_18->Range(0,0,1,1);
   Sphericity_DHZfirst_18->SetFillColor(0);
   Sphericity_DHZfirst_18->SetFillStyle(4000);
   Sphericity_DHZfirst_18->SetBorderMode(0);
   Sphericity_DHZfirst_18->SetBorderSize(2);
   Sphericity_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-262.4871,1.052419,262234.6);
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
   st->SetMaximum(235984.9);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",25,0,1);
   st_stack_117->SetMinimum(0.01);
   st_stack_117->SetMaximum(235984.9);
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
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,94677.27);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,90178.52);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,38810.41);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,35156.16);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,10793);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,2551.849);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,1979.043);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,398.0293);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,29.93619);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,5.273736);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,194.7972);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,6.404683);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,10.48044);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,3.183847);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(15,0.286344);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,3.24829);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,6931.168);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,7253.417);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,4362.835);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,6243.892);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,2402.025);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,350.3337);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,1164.949);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,195.1742);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,13.29424);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,5.273736);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,107.1904);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,6.404683);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,9.956651);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,3.183847);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(15,0.286344);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,3.24829);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(11050);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,927.4819);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,837.8554);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,474.3528);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,250.2656);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,140.7305);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,64.84466);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,21.90206);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,9.531594);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,5.503716);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,2.32253);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,3.221006);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,1.188532);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.9271619);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.5725293);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.5260863);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.059372);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.2637092);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(18,0.04800028);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(19,0.1680865);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,20.39752);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,19.37875);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,13.36135);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,10.03122);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,7.750534);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,5.147125);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,3.327693);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.685422);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,2.386974);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.7420455);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,1.673963);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.5885656);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.5069217);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.5027083);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.2620435);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.059372);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2161958);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(18,0.04800028);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(19,0.1680865);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(17934);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,9452.247);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,9355.263);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,5125.348);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,2753.107);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1441.636);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,691.5506);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,335.1826);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,139.3833);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,71.39079);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,42.31069);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,21.79537);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,14.43397);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,11.55571);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,6.037075);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,4.866262);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.865956);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,3.453151);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.45217);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,1.544673);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.214765);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(23,0.05498368);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,41.74888);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,44.51163);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,30.62252);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,22.18286);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,15.65677);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,10.94678);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,8.207127);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,4.818582);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,3.37729);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,2.968628);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,1.816603);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,1.425799);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,1.826363);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.8917668);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.8162103);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.5942131);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.9330357);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.4034128);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.6056639);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.1754017);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(23,0.05498368);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(261043);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,745.1756);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,634.2976);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,366.6403);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,221.1586);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,116.8328);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,45.14861);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,17.34931);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,4.082345);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,2.152982);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,1.745561);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.7459952);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.7664104);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.1023734);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,26.49151);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,25.97707);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,21.07243);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,14.0409);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,9.883959);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,4.92076);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,5.570218);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,1.341947);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.8412437);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,1.348601);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.5107106);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.4274165);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.1023734);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(6129);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,358.7894);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,286.8375);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,147.1408);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,143.4659);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,74.55381);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,15.68291);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,3.383252);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,3.421354);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,0.1806074);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,4.104139);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(12,0.03799243);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(15,0.04589133);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,29.97296);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,24.86847);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,19.75255);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,25.57003);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,20.51957);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,5.075989);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.131184);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,1.631687);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,0.1806074);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,4.076063);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(12,0.03799243);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(15,0.04589133);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(2676);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.487421);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,0.7985593);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,0.6406623);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(7,1.575423);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,1.295458);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.7985593);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.6406623);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(7,1.575423);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(7);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,13.48288);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,12.62152);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,3.572951);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,2.480573);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,0.8422943);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,0.4027821);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.4039418);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,3.065581);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,2.779843);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,1.308274);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,1.604349);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.8422943);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.4027821);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.4039418);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(61);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,7.847271);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,7.768743);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,2.553374);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,1.180907);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,3.787244);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,3.213822);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,2.553374);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,1.180907);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(13);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,5.811305);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,4.793189);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,2.637463);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.686969);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,1.342413);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.5707153);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.162971);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.05997236);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.01828647);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.006300563);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.3318656);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.1586867);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.1122202);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.08598844);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.08529295);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.04957485);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.02737543);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.02051968);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.009864149);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.004501423);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(4554);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,2.375401);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,2.379531);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,1.347622);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.8322745);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.4951936);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.2334637);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.07145735);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.03020175);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.009612647);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.003858907);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0015523);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0014845);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0006582205);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0006678366);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(15,0.000526597);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.0351017);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.03486495);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.02616707);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.02061362);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01593298);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.01105416);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.006030455);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.00394907);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.002178445);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.001326712);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.0008979415);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0007719975);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0005284091);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0006678366);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(15,0.000526597);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(15848);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1665599);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1280091);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.06336201);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.0833091);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.04631361);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.006272886);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(7,0.003359014);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(8,0.002127519);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.03273192);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.02082627);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01307674);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.01602744);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.01286938);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.003898418);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(7,0.003359014);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(8,0.002127519);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(172);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.05918);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.05811197);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02701294);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.02121853);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.008925518);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.005195041);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.002351311);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.001313168);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(9,0.0004298028);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(10,0.0003221536);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.005421394);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.005379641);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.003449365);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.003039704);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001974997);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001635727);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0009938885);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0006575951);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(9,0.0004298028);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(10,0.0003221536);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(453);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__233 = new TH1D("VH_DHZfirst_Sphericity__233","",25,0,1);
   VH_DHZfirst_Sphericity__233->SetBinContent(1,91346);
   VH_DHZfirst_Sphericity__233->SetBinContent(2,80745);
   VH_DHZfirst_Sphericity__233->SetBinContent(3,45412);
   VH_DHZfirst_Sphericity__233->SetBinContent(4,24711);
   VH_DHZfirst_Sphericity__233->SetBinContent(5,12449);
   VH_DHZfirst_Sphericity__233->SetBinContent(6,5294);
   VH_DHZfirst_Sphericity__233->SetBinContent(7,1844);
   VH_DHZfirst_Sphericity__233->SetBinContent(8,639);
   VH_DHZfirst_Sphericity__233->SetBinContent(9,266);
   VH_DHZfirst_Sphericity__233->SetBinContent(10,141);
   VH_DHZfirst_Sphericity__233->SetBinContent(11,80);
   VH_DHZfirst_Sphericity__233->SetBinContent(12,51);
   VH_DHZfirst_Sphericity__233->SetBinContent(13,26);
   VH_DHZfirst_Sphericity__233->SetBinContent(14,29);
   VH_DHZfirst_Sphericity__233->SetBinContent(15,17);
   VH_DHZfirst_Sphericity__233->SetBinContent(16,10);
   VH_DHZfirst_Sphericity__233->SetBinContent(17,7);
   VH_DHZfirst_Sphericity__233->SetBinContent(18,3);
   VH_DHZfirst_Sphericity__233->SetBinContent(19,5);
   VH_DHZfirst_Sphericity__233->SetBinContent(20,5);
   VH_DHZfirst_Sphericity__233->SetEntries(263104);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__233->SetLineColor(ci);
   VH_DHZfirst_Sphericity__233->SetLineWidth(2);
   VH_DHZfirst_Sphericity__233->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__233->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__233->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__233->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1233[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1233[25] = { 106193.2, 101321.3, 44934.74, 38530.44, 12569.48, 3370.294, 2359.079, 554.5415, 109.1926, 55.76084, 220.5674, 22.83307, 23.06634, 9.794119, 5.72511, 2.925328, 6.96515,
   1.50017, 1.71276, 0, 0.214765, 0, 0.05498368, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1233[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1233[25] = { 6931.441, 7253.67, 4363.059, 6244.008, 2402.197, 350.614, 1164.997, 195.2524, 13.94922, 7.457124, 107.2201, 6.601772, 10.13597, 3.344375, 0.904967, 0.5971719, 3.386545,
   0.4062585, 0.6285553, 0, 0.1754017, 0, 0.05498368, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1233,Graph_from_VH_DHZfirst_Sphericity_fy1233,Graph_from_VH_DHZfirst_Sphericity_fex1233,Graph_from_VH_DHZfirst_Sphericity_fey1233);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1233 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1233","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMinimum(-11312.46);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetMaximum(124437.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_DHZfirst_18->cd();
  
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
   data_mc_ratio__234->SetBinContent(1,0.8601869);
   data_mc_ratio__234->SetBinContent(2,0.7969201);
   data_mc_ratio__234->SetBinContent(3,1.010621);
   data_mc_ratio__234->SetBinContent(4,0.6413371);
   data_mc_ratio__234->SetBinContent(5,0.9904146);
   data_mc_ratio__234->SetBinContent(6,1.570783);
   data_mc_ratio__234->SetBinContent(7,0.7816609);
   data_mc_ratio__234->SetBinContent(8,1.152303);
   data_mc_ratio__234->SetBinContent(9,2.436062);
   data_mc_ratio__234->SetBinContent(10,2.528656);
   data_mc_ratio__234->SetBinContent(11,0.3627009);
   data_mc_ratio__234->SetBinContent(12,2.233602);
   data_mc_ratio__234->SetBinContent(13,1.127183);
   data_mc_ratio__234->SetBinContent(14,2.96096);
   data_mc_ratio__234->SetBinContent(15,2.969375);
   data_mc_ratio__234->SetBinContent(16,3.41842);
   data_mc_ratio__234->SetBinContent(17,1.005003);
   data_mc_ratio__234->SetBinContent(18,1.999773);
   data_mc_ratio__234->SetBinContent(19,2.919265);
   data_mc_ratio__234->SetBinError(1,0.002846086);
   data_mc_ratio__234->SetBinError(2,0.00280451);
   data_mc_ratio__234->SetBinError(3,0.004742454);
   data_mc_ratio__234->SetBinError(4,0.004079822);
   data_mc_ratio__234->SetBinError(5,0.008876664);
   data_mc_ratio__234->SetBinError(6,0.02158858);
   data_mc_ratio__234->SetBinError(7,0.01820279);
   data_mc_ratio__234->SetBinError(8,0.04558441);
   data_mc_ratio__234->SetBinError(9,0.1493646);
   data_mc_ratio__234->SetBinError(10,0.2129513);
   data_mc_ratio__234->SetBinError(11,0.04055119);
   data_mc_ratio__234->SetBinError(12,0.3127669);
   data_mc_ratio__234->SetBinError(13,0.2210589);
   data_mc_ratio__234->SetBinError(14,0.5498365);
   data_mc_ratio__234->SetBinError(15,0.7201792);
   data_mc_ratio__234->SetBinError(16,1.080999);
   data_mc_ratio__234->SetBinError(17,0.3798556);
   data_mc_ratio__234->SetBinError(18,1.154569);
   data_mc_ratio__234->SetBinError(19,1.305535);
   data_mc_ratio__234->SetMinimum(0.4);
   data_mc_ratio__234->SetMaximum(1.6);
   data_mc_ratio__234->SetEntries(99.83185);
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
   Double_t Graph_from_mc_statistical_error_fey1234[25] = { 0.06527198, 0.07159076, 0.09709769, 0.1620539, 0.1911134, 0.1040307, 0.4938356, 0.352097, 0.1277488, 0.1337341, 0.4861102, 0.2891321, 0.439427, 0.3414677, 0.1580698, 0.2041384, 0.4862127,
   0.2708082, 0.366984, 0, 0.8167144, 0, 1, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(-0.2);
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
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->Modified();
   Sphericity_DHZfirst_18->cd();
   Sphericity_DHZfirst_18->SetSelected(Sphericity_DHZfirst_18);
}
