#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_all_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_all/nB_medium_jets_all_all
//=========  (Tue Dec  6 15:26:16 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_all = new TCanvas("nB_medium_jets_all_all", "nB_medium_jets_all_all",0,0,600,600);
   nB_medium_jets_all_all->SetHighLightColor(2);
   nB_medium_jets_all_all->Range(-2.683529,-1.801889,11.21633,15.55966);
   nB_medium_jets_all_all->SetFillColor(0);
   nB_medium_jets_all_all->SetFillStyle(4000);
   nB_medium_jets_all_all->SetBorderMode(0);
   nB_medium_jets_all_all->SetBorderSize(2);
   nB_medium_jets_all_all->SetLogy();
   nB_medium_jets_all_all->SetLeftMargin(0.15709);
   nB_medium_jets_all_all->SetRightMargin(0.1234783);
   nB_medium_jets_all_all->SetBottomMargin(0.12);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(13.53401);
   st->SetMaximum(1.941091e+13);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",10,-0.5,9.5);
   st_stack_44->SetMinimum(1.91204);
   st_stack_44->SetMaximum(6.660513e+13);
   st_stack_44->SetDirectory(0);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_44->GetXaxis()->SetRange(1,10);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetTitleOffset(1);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/1.0");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetTitleSize(0.037);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetTitleOffset(1);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(1,1.94033e+11);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(2,3.502684e+10);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(3,6.30063e+09);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(4,5.912306e+08);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(5,4.644305e+07);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(6,2752561);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(7,115693.8);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(8,7041.446);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(1,1.849711e+07);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(2,7794531);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(3,3310769);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(4,1001799);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(5,287653.4);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(6,66335.06);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(7,13592.15);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(8,3648.406);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetEntries(1.542251e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(1,8499507);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(2,2.216636e+07);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(3,1.05355e+07);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(4,1624963);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(5,146414.7);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(6,10794.06);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(7,744.0976);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(8,56.50776);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(9,5.646754);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(10,0.7668371);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(11,0.1262733);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(1,1072.204);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(2,1792.963);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(3,1264.12);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(4,525.3386);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(5,165.4306);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(6,45.64896);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(7,12.02475);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(8,3.408543);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(9,1.12053);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(10,0.3283921);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(11,0.08928886);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetEntries(6.217747e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_3 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(1,8969332);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(2,4.135603e+07);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(3,5.426062e+07);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(4,1.338276e+07);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(5,1708852);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(6,160726.5);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(7,13439.51);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(8,1172.92);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(9,124.6017);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(10,17.23012);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinContent(11,3.291177);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(1,819.4252);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(2,1776.472);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(3,2050.358);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(4,1025.421);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(5,366.96);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(6,112.5209);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(7,32.82924);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(8,9.730226);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(9,3.215217);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(10,1.185027);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetBinError(11,0.5210327);
   VbbHcc_jets_all_nB_medium_all_stack_3->SetEntries(1.878746e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nB_medium_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_4 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(1,1.050727e+07);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(2,4148986);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(3,1983043);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(4,347140.9);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(5,56028.11);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(6,5471.141);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(7,465.861);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(8,37.57044);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(9,0.6945693);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinContent(10,0.7645965);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(1,2336.35);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(2,1469.879);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(3,1026.68);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(4,427.1763);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(5,170.5591);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(6,53.05995);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(7,16.3821);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(8,4.208168);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(9,0.4913626);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetBinError(10,0.5893144);
   VbbHcc_jets_all_nB_medium_all_stack_4->SetEntries(3.985608e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nB_medium_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_5 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(1,3.148201e+07);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(2,8248827);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(3,1287240);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(4,144577.8);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(5,12220.54);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(6,929.1142);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(7,79.30112);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinContent(8,5.360692);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(1,8026.193);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(2,4087.629);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(3,1622.077);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(4,545.8644);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(5,156.0102);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(6,42.3822);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(7,11.83594);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetBinError(8,3.492097);
   VbbHcc_jets_all_nB_medium_all_stack_5->SetEntries(2.697091e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nB_medium_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_6 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(1,9206874);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(2,1962359);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(3,196334.6);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(4,13721.67);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(5,807.2328);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(6,47.12972);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(7,3.468204);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(8,0.2817384);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinContent(9,0.291633);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(1,1605.031);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(2,749.1813);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(3,237.5076);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(4,63.74189);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(5,15.62406);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(6,3.669171);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(7,1.022446);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(8,0.2817384);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetBinError(9,0.291633);
   VbbHcc_jets_all_nB_medium_all_stack_6->SetEntries(6.001887e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nB_medium_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_7 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(1,3009255);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(2,811868.9);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(3,251779.9);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(4,29165);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(5,1938.733);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(6,105.5095);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(7,6.068133);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinContent(8,0.4340201);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(1,823.2258);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(2,429.2098);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(3,243.4545);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(4,82.61855);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(5,20.98373);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(6,4.754824);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(7,1.207182);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetBinError(8,0.2648267);
   VbbHcc_jets_all_nB_medium_all_stack_7->SetEntries(2.788188e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nB_medium_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_8 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(1,1195431);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(2,394073.6);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(3,180607.6);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(4,31485.97);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(5,6125.921);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(6,445.3367);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(7,27.27494);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinContent(8,1.024099);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(1,632.3007);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(2,366.0332);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(3,250.6903);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(4,104.9356);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(5,45.9822);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(6,12.49546);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(7,3.010585);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetBinError(8,0.5309337);
   VbbHcc_jets_all_nB_medium_all_stack_8->SetEntries(6488151);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nB_medium_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_9 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(1,6690.446);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(2,18537.98);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(3,20329.29);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(4,6570.68);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(5,2194.374);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(6,196.9631);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(7,16.94705);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(8,1.12204);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(9,0.06731923);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(10,0.005081957);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinContent(11,0.001889439);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(1,4.082577);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(2,6.826559);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(3,7.157643);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(4,4.042895);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(5,2.350628);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(6,0.6917972);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(7,0.2251233);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(8,0.0491676);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(9,0.01176949);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(10,0.003713486);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetBinError(11,0.001889439);
   VbbHcc_jets_all_nB_medium_all_stack_9->SetEntries(2.909576e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nB_medium_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_10 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(1,587.297);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(2,2431.449);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(3,2838.09);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(4,955.4037);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(5,344.1801);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(6,28.44279);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(7,2.298651);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(8,0.1348458);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinContent(9,0.008958127);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(1,0.5459044);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(2,1.116951);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(3,1.209165);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(4,0.7013215);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(5,0.4215673);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(6,0.1208017);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(7,0.03434571);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(8,0.008311857);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetBinError(9,0.00216646);
   VbbHcc_jets_all_nB_medium_all_stack_10->SetEntries(1.49329e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nB_medium_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_11 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(1,1223.594);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(2,770.4934);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(3,319.0047);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(4,83.87385);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(5,12.13636);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(6,1.138848);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(7,0.1002292);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinContent(8,0.005163728);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(1,1.643787);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(2,1.297496);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(3,0.8338699);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(4,0.4268628);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(5,0.1613278);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(6,0.04908049);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(7,0.01441167);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetBinError(8,0.003015365);
   VbbHcc_jets_all_nB_medium_all_stack_11->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_12 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(1,3234785);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(2,2300242);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(3,1156743);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(4,350265);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(5,58116.39);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(6,6474.329);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(7,527.3619);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(8,56.89829);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(9,4.029149);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinContent(10,4.36256);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(1,4305.848);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(2,3626.546);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(3,2577.089);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(4,1418.007);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(5,579.3786);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(6,192.5181);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(7,53.28792);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(8,16.7841);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(9,4.029149);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetBinError(10,4.36256);
   VbbHcc_jets_all_nB_medium_all_stack_12->SetEntries(1455030);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_all->Modified();
   nB_medium_jets_all_all->cd();
   nB_medium_jets_all_all->SetSelected(nB_medium_jets_all_all);
}
