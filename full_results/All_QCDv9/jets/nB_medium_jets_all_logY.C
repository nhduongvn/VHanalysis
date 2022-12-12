#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all/nB_medium_jets_all
//=========  (Mon Dec 12 10:47:55 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all = new TCanvas("nB_medium_jets_all", "nB_medium_jets_all",0,0,600,600);
   nB_medium_jets_all->SetHighLightColor(2);
   nB_medium_jets_all->Range(-2.683529,-1.982721,11.21633,15.72561);
   nB_medium_jets_all->SetFillColor(0);
   nB_medium_jets_all->SetFillStyle(4000);
   nB_medium_jets_all->SetBorderMode(0);
   nB_medium_jets_all->SetBorderSize(2);
   nB_medium_jets_all->SetLogy();
   nB_medium_jets_all->SetLeftMargin(0.15709);
   nB_medium_jets_all->SetRightMargin(0.1234783);
   nB_medium_jets_all->SetBottomMargin(0.12);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2.587484e+13);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",10,-0.5,9.5);
   st_stack_20->SetMinimum(1.387648);
   st_stack_20->SetMaximum(9.011107e+13);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_20->GetXaxis()->SetRange(1,10);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/1.0");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(1,2.586553e+11);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(2,2.846106e+10);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(3,3.540552e+09);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(4,1.52771e+08);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(5,6421719);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(6,158601.3);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(7,2638.418);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(8,69.06642);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(1,1.969308e+07);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(2,6382016);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(3,2190424);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(4,431572.5);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(5,82723.14);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(6,10507.6);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(7,528.0272);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(8,34.49786);
   VbbHcc_jets_nB_medium_all_stack_1->SetEntries(6.271464e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(1,1.37863e+07);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(2,2.283032e+07);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(3,5914740);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(4,433583.2);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(5,18566.12);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(6,790.5372);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(7,35.13636);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(8,1.994514);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(9,0.2728251);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(1,1377.292);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(2,1831.587);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(3,965.1783);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(4,283.8429);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(5,62.93501);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(6,13.32312);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(7,2.656493);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(8,0.6931613);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(9,0.1368183);
   VbbHcc_jets_nB_medium_all_stack_2->SetEntries(6.217747e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_2,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_3 = new TH1D("VbbHcc_jets_nB_medium_all_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(1,1.747363e+07);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(2,5.270521e+07);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(3,4.382582e+07);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(4,5487193);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(5,342946.4);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(6,17305.88);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(7,909.5159);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(8,57.3415);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(9,4.317769);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(10,0.9262838);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinContent(11,0.06906218);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(1,1147.483);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(2,2007.257);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(3,1845.726);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(4,669.6776);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(5,169.633);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(6,37.96499);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(7,8.81551);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(8,2.206672);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(9,0.6987404);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(10,0.2814447);
   VbbHcc_jets_nB_medium_all_stack_3->SetBinError(11,0.06906218);
   VbbHcc_jets_nB_medium_all_stack_3->SetEntries(1.878746e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_nB_medium_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_3->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_3,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_4 = new TH1D("VbbHcc_jets_nB_medium_all_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(1,1.184405e+07);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(2,3732001);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(3,1309888);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(4,146331.5);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(5,15484);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(6,660.0579);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(7,26.86217);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinContent(8,2.2256);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(1,2481.143);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(2,1396.911);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(3,834.2212);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(4,275.5586);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(5,90.25432);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(6,19.17982);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(7,3.67942);
   VbbHcc_jets_nB_medium_all_stack_4->SetBinError(8,1.025166);
   VbbHcc_jets_nB_medium_all_stack_4->SetEntries(3.985608e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_nB_medium_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_4->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_4,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_5 = new TH1D("VbbHcc_jets_nB_medium_all_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(1,3.468786e+07);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(2,5879465);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(3,570603.5);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(4,36402.74);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(5,1506.555);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinContent(6,49.93185);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(1,8421.031);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(2,3454.698);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(3,1074.878);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(4,277.3487);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(5,52.92731);
   VbbHcc_jets_nB_medium_all_stack_5->SetBinError(6,9.180331);
   VbbHcc_jets_nB_medium_all_stack_5->SetEntries(2.697091e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_nB_medium_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_5->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_5,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_6 = new TH1D("VbbHcc_jets_nB_medium_all_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(1,1.043588e+07);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(2,905924.9);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(3,37130.77);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(4,1169.988);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(5,40.08187);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinContent(6,0.9470763);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(1,1711.474);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(2,507.9245);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(3,103.2976);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(4,17.84139);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(5,3.309939);
   VbbHcc_jets_nB_medium_all_stack_6->SetBinError(6,0.4825696);
   VbbHcc_jets_nB_medium_all_stack_6->SetEntries(6.001887e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_nB_medium_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_6->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_6,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_7 = new TH1D("VbbHcc_jets_nB_medium_all_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(1,3463275);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(2,531056.6);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(3,104617.2);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(4,5030.351);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(5,134.9373);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinContent(6,4.602897);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(1,884.6171);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(2,346.0509);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(3,157.8166);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(4,35.31246);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(5,5.435628);
   VbbHcc_jets_nB_medium_all_stack_7->SetBinError(6,0.9584796);
   VbbHcc_jets_nB_medium_all_stack_7->SetEntries(2.788188e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_nB_medium_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_7->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_7,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_8 = new TH1D("VbbHcc_jets_nB_medium_all_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(1,1399337);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(2,310447.8);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(3,88053.54);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(4,9236.463);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(5,1098.635);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(6,23.78875);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinContent(7,0.8217823);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(1,685.4512);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(2,325.7633);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(3,174.052);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(4,57.36831);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(5,19.0733);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(6,2.676043);
   VbbHcc_jets_nB_medium_all_stack_8->SetBinError(7,0.4756197);
   VbbHcc_jets_nB_medium_all_stack_8->SetEntries(6488151);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_nB_medium_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_8->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_8,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_9 = new TH1D("VbbHcc_jets_nB_medium_all_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(1,12112.06);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(2,22372.68);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(3,15712.51);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(4,3557.077);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(5,757.3754);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(6,24.61224);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(7,1.529458);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(8,0.0319421);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinContent(9,0.004849232);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(1,5.548282);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(2,7.486539);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(3,6.263793);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(4,2.981658);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(5,1.369265);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(6,0.239089);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(7,0.1194659);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(8,0.007945232);
   VbbHcc_jets_nB_medium_all_stack_9->SetBinError(9,0.002807303);
   VbbHcc_jets_nB_medium_all_stack_9->SetEntries(2.909576e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_nB_medium_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_9->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_9,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_10 = new TH1D("VbbHcc_jets_nB_medium_all_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(1,921.0865);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(2,2991.193);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(3,2407.136);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(4,679.9001);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(5,180.4808);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(6,7.064658);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(7,0.4313103);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(8,0.01134128);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinContent(9,0.00136987);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(1,0.6842429);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(2,1.239686);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(3,1.113737);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(4,0.5920622);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(5,0.3054048);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(6,0.06025391);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(7,0.0149126);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(8,0.002383286);
   VbbHcc_jets_nB_medium_all_stack_10->SetBinError(9,0.0008102529);
   VbbHcc_jets_nB_medium_all_stack_10->SetEntries(1.49329e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_nB_medium_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_10->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_10,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_11 = new TH1D("VbbHcc_jets_nB_medium_all_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(1,1494.398);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(2,681.5202);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(3,197.3849);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(4,34.14729);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(5,2.788466);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(6,0.09884325);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinContent(7,0.008208908);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(1,1.817915);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(2,1.217122);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(3,0.6530547);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(4,0.2701173);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(5,0.07663087);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(6,0.0141656);
   VbbHcc_jets_nB_medium_all_stack_11->SetBinError(7,0.003617565);
   VbbHcc_jets_nB_medium_all_stack_11->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_11->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_11,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_12 = new TH1D("VbbHcc_jets_nB_medium_all_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(1,180.0813);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(2,102.7042);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(3,40.93207);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(4,9.081958);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(5,0.9300506);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(6,0.04868452);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(7,0.0027979);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinContent(9,0.0002048819);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(1,0.2203265);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(2,0.1659953);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(3,0.1049123);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(4,0.0494361);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(5,0.01580435);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(6,0.003571554);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(7,0.0008372152);
   VbbHcc_jets_nB_medium_all_stack_12->SetBinError(9,0.0002048819);
   VbbHcc_jets_nB_medium_all_stack_12->SetEntries(1455030);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_12->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_1","QCD","F");

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
   nB_medium_jets_all->Modified();
   nB_medium_jets_all->cd();
   nB_medium_jets_all->SetSelected(nB_medium_jets_all);
}
