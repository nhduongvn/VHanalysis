#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_18()
{
//=========Macro generated from canvas: nC_medium_jets_18/nC_medium_jets_18
//=========  (Wed Dec  7 11:08:46 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_18 = new TCanvas("nC_medium_jets_18", "nC_medium_jets_18",0,0,600,600);
   nC_medium_jets_18->SetHighLightColor(2);
   nC_medium_jets_18->Range(-2.683529,-1.467001e+10,11.21633,1.075801e+11);
   nC_medium_jets_18->SetFillColor(0);
   nC_medium_jets_18->SetFillStyle(4000);
   nC_medium_jets_18->SetBorderMode(0);
   nC_medium_jets_18->SetBorderSize(2);
   nC_medium_jets_18->SetLeftMargin(0.15709);
   nC_medium_jets_18->SetRightMargin(0.1234783);
   nC_medium_jets_18->SetBottomMargin(0.12);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   nC_medium_jets_18->SetFrameFillStyle(1000);
   nC_medium_jets_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.535509e+10);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",10,-0.5,9.5);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(9.535509e+10);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_23->GetXaxis()->SetRange(1,10);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/1.0");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,6.3532e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,3.427497e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,7.137493e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,7.312293e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,4.472197e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,2130950);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,95427.69);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,9102.534);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,1.189561e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,8621524);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,3889780);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,1237646);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,294225.6);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,68036.04);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,13176.07);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,3936.133);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(5.780668e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,9009553);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,7132682);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,2491868);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,518347);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,75087.69);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,8527.162);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,813.2252);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,58.98704);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,7.460356);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,0.5267752);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,-0.03414705);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,1187.031);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,1136.828);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,727.6258);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,361.0625);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,144.9778);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,50.16705);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,15.23843);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.95039);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.512093);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.1893612);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.03414705);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(2.46127e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_3 = new TH1D("VbbHcc_jets_nC_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(1,1.602404e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(2,2.070174e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(3,1.190772e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(4,4025205);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(5,897821.2);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(6,143070.4);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(7,17686.32);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(8,1826.471);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(9,169.1824);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(10,12.07882);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(11,0.7864789);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(1,1170.024);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(2,1367.039);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(3,1057.801);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(4,622.7606);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(5,296.5119);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(6,118.123);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(7,42.69795);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(8,12.98647);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(9,4.096582);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(10,1.016226);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(11,0.2703901);
   VbbHcc_jets_nC_medium_stack_3->SetEntries(7.666522e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nC_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_4 = new TH1D("VbbHcc_jets_nC_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(1,2678027);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(2,3104913);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(3,1512414);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(4,394318);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(5,60839.7);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(6,6115.129);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(7,473.0232);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(8,30.09896);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(9,2.303372);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(1,1385.19);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(2,1475.984);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(3,1020.591);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(4,516.6175);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(5,204.9806);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(6,61.66565);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(7,16.97613);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(8,4.12636);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(9,1.123491);
   VbbHcc_jets_nC_medium_stack_4->SetEntries(1.321133e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nC_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_5 = new TH1D("VbbHcc_jets_nC_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(1,5795955);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(2,7764248);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(3,4023181);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(4,1041601);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(5,155124);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(6,15310.16);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(7,1212.434);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(8,90.96977);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(9,2.793624);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(1,4238.178);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(2,4854.727);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(3,3459.968);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(4,1769.969);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(5,664.6215);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(6,200.1531);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(7,59.54377);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(8,14.74142);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(9,2.34486);
   VbbHcc_jets_nC_medium_stack_5->SetEntries(7460725);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nC_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_6 = new TH1D("VbbHcc_jets_nC_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(1,2980860);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(2,1613129);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(3,416967.2);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(4,63166.31);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(5,6538.862);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(6,501.8832);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(7,33.02409);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(8,1.883226);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(9,0.179752);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(1,1090.914);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(2,794.8722);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(3,401.5295);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(4,151.9945);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(5,51.86073);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(6,13.47836);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(7,3.283684);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(8,0.7693672);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(9,0.179752);
   VbbHcc_jets_nC_medium_stack_6->SetEntries(1.542487e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nC_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_7 = new TH1D("VbbHcc_jets_nC_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(1,1077549);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(2,570984.2);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(3,154755);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(4,25826.17);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(5,2945.321);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(6,242.2106);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(7,14.07223);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(8,1.042367);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(9,0.2800554);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(1,616.4446);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(2,444.5597);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(3,230.6608);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(4,95.3187);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(5,30.78105);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(6,8.511879);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(7,1.959506);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(8,0.5218476);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(9,0.2800554);
   VbbHcc_jets_nC_medium_stack_7->SetEntries(6302940);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nC_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_8 = new TH1D("VbbHcc_jets_nC_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(1,480609.2);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(2,242972.6);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(3,69398.02);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(4,12015.69);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(5,1383.01);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(6,106.9773);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(7,7.733457);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(8,0.8550467);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(1,399.5893);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(2,282.8326);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(3,152.0632);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(4,61.34774);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(5,20.43647);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(6,5.55835);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(7,1.63747);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(8,0.5206279);
   VbbHcc_jets_nC_medium_stack_8->SetEntries(2933859);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nC_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_9 = new TH1D("VbbHcc_jets_nC_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(1,11260.57);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(2,8986.653);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(3,3339.429);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(4,716.6748);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(5,99.61482);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(6,10.6201);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(7,1.086028);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(8,0.09956292);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(9,0.004014845);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(1,6.211489);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(2,5.415891);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(3,3.272141);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(4,1.507998);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(5,0.531909);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(6,0.1731176);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(7,0.05354099);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(8,0.01659283);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(9,0.002901441);
   VbbHcc_jets_nC_medium_stack_9->SetEntries(9973110);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nC_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_10 = new TH1D("VbbHcc_jets_nC_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(1,987.7554);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(2,1227.668);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(3,666.7394);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(4,203.4824);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(5,38.72788);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(6,5.22908);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(7,0.5464556);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(8,0.0510105);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(9,0.003448777);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(1,0.7963434);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(2,0.8863947);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(3,0.6520381);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(4,0.3594188);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(5,0.1562828);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(6,0.05717247);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(7,0.01839545);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(8,0.005628759);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(9,0.001437258);
   VbbHcc_jets_nC_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nC_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_11 = new TH1D("VbbHcc_jets_nC_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(1,306.4238);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(2,426.8213);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(3,250.084);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(4,70.13709);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(5,10.01132);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(6,0.6508262);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(7,0.01955877);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(8,0.0008416796);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(1,0.9333794);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(2,1.084285);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(3,0.824427);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(4,0.4331727);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(5,0.1623622);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(6,0.04040314);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(7,0.006308294);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(8,0.0008416796);
   VbbHcc_jets_nC_medium_stack_11->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_12 = new TH1D("VbbHcc_jets_nC_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(1,25.54677);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(2,56.82819);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(3,45.05947);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(4,16.75303);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(5,3.096112);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(6,0.2195795);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(7,0.004529512);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(1,0.09225929);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(2,0.1378357);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(3,0.1225729);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(4,0.07433232);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(5,0.03177452);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(6,0.008410247);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(7,0.001199522);
   VbbHcc_jets_nC_medium_stack_12->SetEntries(496915);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_18->Modified();
   nC_medium_jets_18->cd();
   nC_medium_jets_18->SetSelected(nC_medium_jets_18);
}
