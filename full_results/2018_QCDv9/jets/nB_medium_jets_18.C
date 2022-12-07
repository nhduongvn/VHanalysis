#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_18()
{
//=========Macro generated from canvas: nB_medium_jets_18/nB_medium_jets_18
//=========  (Wed Dec  7 11:08:46 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_18 = new TCanvas("nB_medium_jets_18", "nB_medium_jets_18",0,0,600,600);
   nB_medium_jets_18->SetHighLightColor(2);
   nB_medium_jets_18->Range(-2.683529,-2.185208e+10,11.21633,1.602486e+11);
   nB_medium_jets_18->SetFillColor(0);
   nB_medium_jets_18->SetFillStyle(4000);
   nB_medium_jets_18->SetBorderMode(0);
   nB_medium_jets_18->SetBorderSize(2);
   nB_medium_jets_18->SetLeftMargin(0.15709);
   nB_medium_jets_18->SetRightMargin(0.1234783);
   nB_medium_jets_18->SetBottomMargin(0.12);
   nB_medium_jets_18->SetFrameFillStyle(1000);
   nB_medium_jets_18->SetFrameBorderMode(0);
   nB_medium_jets_18->SetFrameFillStyle(1000);
   nB_medium_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.420385e+11);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",10,-0.5,9.5);
   st_stack_19->SetMinimum(0);
   st_stack_19->SetMaximum(1.420385e+11);
   st_stack_19->SetDirectory(0);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_19->GetXaxis()->SetRange(1,10);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/1.0");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetTitleSize(0.037);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,9.465077e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,9.871454e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,1.155803e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,4.315456e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,1443339);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,28787.34);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.443237e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,4653840);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,1592622);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,313558.6);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,59645.04);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,7326.74);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(5.780668e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,6002102);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,1.030157e+07);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,2723370);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,200917.9);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,8601.368);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,364.7804);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,15.76394);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,0.7055949);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.144265);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,1002.346);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,1349.228);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,716.5933);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,210.1811);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,46.05072);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,9.614967);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,1.81475);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.4492798);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.1022376);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(2.46127e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_3 = new TH1D("VbbHcc_jets_nB_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(1,7495356);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(2,2.344618e+07);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(3,2.007329e+07);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(4,2536674);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(5,159303.7);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(6,8050.803);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(7,411.4344);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(8,25.17244);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(9,2.213325);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(10,0.2846756);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(1,816.9655);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(2,1450.411);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(3,1349.679);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(4,489.3821);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(5,123.9091);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(6,27.56288);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(7,6.363405);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(8,1.55435);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(9,0.5655645);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(10,0.1647841);
   VbbHcc_jets_nB_medium_stack_3->SetEntries(7.666522e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nB_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_4 = new TH1D("VbbHcc_jets_nB_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(1,5393704);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(2,1685638);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(3,602491.1);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(4,67704.71);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(5,7270.333);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(6,308.3134);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(7,12.71936);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(8,1.601525);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(1,1945.782);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(2,1089.824);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(3,653.636);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(4,213.7773);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(5,70.32288);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(6,15.1531);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(7,2.770084);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(8,0.9253011);
   VbbHcc_jets_nB_medium_stack_4->SetEntries(1.321133e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nB_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_5 = new TH1D("VbbHcc_jets_nB_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(1,1.58576e+07);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(2,2661787);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(3,259902.7);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(4,16727.32);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(5,688.0549);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(6,20.49691);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(1,6948.549);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(2,2830.316);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(3,879.1696);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(4,229.0626);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(5,42.1117);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(6,6.953959);
   VbbHcc_jets_nB_medium_stack_5->SetEntries(7460725);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nB_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_6 = new TH1D("VbbHcc_jets_nB_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(1,4654120);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(2,409648.7);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(3,16869.77);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(4,541.7993);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(5,17.65653);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(6,0.4158722);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(1,1357.465);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(2,399.6391);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(3,80.69095);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(4,13.69254);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(5,2.427257);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(6,0.3019673);
   VbbHcc_jets_nB_medium_stack_6->SetEntries(1.542487e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nB_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_7 = new TH1D("VbbHcc_jets_nB_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(1,1542426);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(2,239269.4);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(3,48222.49);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(4,2335.712);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(5,62.77589);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(6,1.508281);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(1,735.245);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(2,286.3805);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(3,132.1095);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(4,29.6592);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(5,4.405673);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(6,0.682244);
   VbbHcc_jets_nB_medium_stack_7->SetEntries(6302940);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nB_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_8 = new TH1D("VbbHcc_jets_nB_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(1,621809.4);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(2,139384.5);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(3,40463.64);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(4,4293.549);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(5,528.0342);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(6,14.16905);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(7,0.8217823);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(1,453.2113);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(2,215.8738);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(3,115.5252);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(4,38.70281);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(5,12.40762);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(6,2.013989);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(7,0.4756197);
   VbbHcc_jets_nB_medium_stack_8->SetEntries(2933859);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nB_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_9 = new TH1D("VbbHcc_jets_nB_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(1,5275.683);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(2,9965.855);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(3,7164.181);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(4,1639.757);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(5,356.8611);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(6,11.62143);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(7,0.7849126);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(8,0.007683906);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(1,4.241112);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(2,5.762041);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(3,4.845612);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(4,2.315415);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(5,1.06553);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(6,0.1841739);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(7,0.113784);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(8,0.004530928);
   VbbHcc_jets_nB_medium_stack_9->SetEntries(9973110);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nB_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_10 = new TH1D("VbbHcc_jets_nB_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(1,401.1501);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(2,1302.719);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(3,1048.352);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(4,296.109);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(5,78.60272);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(6,3.076788);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(7,0.1878436);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(8,0.004939337);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(9,0.0005966037);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(1,0.5038203);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(2,0.9128028);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(3,0.8200642);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(4,0.435946);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(5,0.224875);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(6,0.04436603);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(7,0.01098041);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(8,0.001754856);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(9,0.0005966037);
   VbbHcc_jets_nB_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nB_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_11 = new TH1D("VbbHcc_jets_nB_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(1,664.1583);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(2,298.1044);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(3,86.31199);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(4,14.429);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(5,1.105283);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(6,0.03872779);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(7,0.001122243);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(1,1.360377);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(2,0.9028499);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(3,0.4841887);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(4,0.1973394);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(5,0.05454828);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(6,0.01007048);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(7,0.001122243);
   VbbHcc_jets_nB_medium_stack_11->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_12 = new TH1D("VbbHcc_jets_nB_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(1,80.73013);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(2,44.68828);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(3,17.79402);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(4,3.887273);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(5,0.3885822);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(6,0.01865747);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(7,0.000749049);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(1,0.1640464);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(2,0.1219467);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(3,0.07696775);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(4,0.03603509);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(5,0.01140845);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(6,0.002541029);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(7,0.0005183129);
   VbbHcc_jets_nB_medium_stack_12->SetEntries(496915);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_18->Modified();
   nB_medium_jets_18->cd();
   nB_medium_jets_18->SetSelected(nB_medium_jets_18);
}
