#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_16/nB_medium_jets_16
//=========  (Tue Dec  6 15:26:15 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_16 = new TCanvas("nB_medium_jets_16", "nB_medium_jets_16",0,0,600,600);
   nB_medium_jets_16->SetHighLightColor(2);
   nB_medium_jets_16->Range(-2.683529,-3.414864,11.21633,15.13717);
   nB_medium_jets_16->SetFillColor(0);
   nB_medium_jets_16->SetFillStyle(4000);
   nB_medium_jets_16->SetBorderMode(0);
   nB_medium_jets_16->SetBorderSize(2);
   nB_medium_jets_16->SetLogy();
   nB_medium_jets_16->SetLeftMargin(0.15709);
   nB_medium_jets_16->SetRightMargin(0.1234783);
   nB_medium_jets_16->SetBottomMargin(0.12);
   nB_medium_jets_16->SetFrameFillStyle(1000);
   nB_medium_jets_16->SetFrameBorderMode(0);
   nB_medium_jets_16->SetFrameFillStyle(1000);
   nB_medium_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.486988);
   st->SetMaximum(5.305945e+12);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",10,-0.5,9.5);
   st_stack_17->SetMinimum(0.06477091);
   st_stack_17->SetMaximum(1.914093e+13);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_17->GetXaxis()->SetRange(1,10);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/1.0");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,5.303394e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,5.052967e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,5.481604e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,1.789519e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,534599.2);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,7397.074);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,8882069);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,2744519);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,905938.2);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,163740.6);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,28308.79);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,3316.822);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(4.010866e+07);

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
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,3798869);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,5537761);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,1295302);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,84216.68);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,3274.113);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,125.2336);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,5.755194);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,0.5525317);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,636.5826);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,791.9231);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,394.9317);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,109.7638);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,23.52407);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,4.806899);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,1.02124);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.3316776);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(1.791955e+08);

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
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(1,5140650);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(2,1.36442e+07);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(3,9924220);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(4,1090962);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(5,60675.03);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(6,2745.152);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(7,134.3105);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(8,7.62339);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(9,0.5021119);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(10,0.08026246);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(1,577.4899);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(2,945.6809);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(3,811.8424);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(4,276.9236);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(5,66.24106);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(6,14.12087);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(7,3.141454);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(8,0.7688999);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(9,0.1956009);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(10,0.08026246);
   VbbHcc_jets_nB_medium_stack_3->SetEntries(4.953882e+08);

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
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(1,2995319);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(2,907107.5);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(3,293143.7);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(4,30317.69);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(5,2908.467);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(6,112.9427);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(7,4.437424);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(8,0.6240752);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(1,966.7706);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(2,533.8615);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(3,304.7185);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(4,98.09752);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(5,30.44542);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(6,6.023624);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(7,1.192579);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(8,0.4413416);
   VbbHcc_jets_nB_medium_stack_4->SetEntries(1.381774e+07);

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
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(1,8704187);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(2,1365368);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(3,121898);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(4,7070.012);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(5,261.6474);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(6,6.277437);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(1,3075.228);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(2,1220.925);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(3,365.1998);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(4,88.0529);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(5,16.94022);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(6,2.508633);
   VbbHcc_jets_nB_medium_stack_5->SetEntries(9601782);

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
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(1,2634740);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(2,198609.8);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(3,7272.932);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(4,207.5046);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(5,5.335923);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(1,494.3233);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(2,135.7399);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(3,25.94544);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(4,4.378079);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(5,0.7006429);
   VbbHcc_jets_nB_medium_stack_6->SetEntries(3.111554e+07);

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
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(1,877870.9);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(2,123410.3);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(3,22212.73);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(4,942.7161);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(5,22.52971);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(6,0.5717151);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(1,256.5811);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(2,96.22564);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(3,40.86525);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(4,8.410202);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(5,1.300884);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(6,0.206493);
   VbbHcc_jets_nB_medium_stack_7->SetEntries(1.387664e+07);

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
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(1,356397);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(2,73842.25);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(3,19153.89);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(4,1855.157);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(5,203.0949);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(6,3.923184);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(1,266.0575);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(2,121.2002);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(3,61.81134);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(4,19.23056);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(5,6.376476);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(6,0.8820235);
   VbbHcc_jets_nB_medium_stack_8->SetEntries(2307748);

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
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(1,3396.659);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(2,5704.549);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(3,3584.5);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(4,756.7592);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(5,144.1072);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(6,4.338057);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(7,0.2304093);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(8,0.01145141);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(9,0.004849232);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(1,2.411156);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(2,3.089199);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(3,2.441276);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(4,1.118292);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(5,0.4878917);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(6,0.08333051);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(7,0.01911098);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(8,0.004332758);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(9,0.002807303);
   VbbHcc_jets_nB_medium_stack_9->SetEntries(9308026);

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
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(1,240.9319);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(2,782.4171);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(3,629.6432);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(4,177.8439);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(5,47.20902);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(6,1.847928);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(7,0.1128194);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(8,0.00296658);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(9,0.0003583219);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(1,0.3025959);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(2,0.548232);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(3,0.492533);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(4,0.2618304);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(5,0.1350606);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(6,0.02664637);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(7,0.006594868);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(8,0.001053972);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(9,0.0003583219);
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
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(1,395.7407);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(2,174.4993);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(3,48.03495);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(4,8.343149);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(5,0.721431);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(6,0.03460756);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(7,0.00289275);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(1,0.8022131);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(2,0.5281762);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(3,0.2762334);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(4,0.1148789);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(5,0.03362403);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(6,0.007419483);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(7,0.002047546);
   VbbHcc_jets_nB_medium_stack_11->SetEntries(472445);

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
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(1,997283.2);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(2,574120.9);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(3,223169);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(4,49319.95);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(5,5002.766);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(6,332.842);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(7,27.7908);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(9,4.36256);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(1,2005.721);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(2,1522.017);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(3,949.8576);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(4,446.3659);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(5,141.9221);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(6,36.34487);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(7,10.5908);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(9,4.36256);
   VbbHcc_jets_nB_medium_stack_12->SetEntries(492720);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_16->Modified();
   nB_medium_jets_16->cd();
   nB_medium_jets_16->SetSelected(nB_medium_jets_16);
}
