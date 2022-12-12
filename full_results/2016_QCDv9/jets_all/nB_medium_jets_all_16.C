#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_16()
{
//=========Macro generated from canvas: nB_medium_jets_all_16/nB_medium_jets_all_16
//=========  (Mon Dec 12 10:49:50 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_16 = new TCanvas("nB_medium_jets_all_16", "nB_medium_jets_all_16",0,0,600,600);
   nB_medium_jets_all_16->SetHighLightColor(2);
   nB_medium_jets_all_16->Range(-2.683529,-1.419565e+10,11.21633,1.041015e+11);
   nB_medium_jets_all_16->SetFillColor(0);
   nB_medium_jets_all_16->SetFillStyle(4000);
   nB_medium_jets_all_16->SetBorderMode(0);
   nB_medium_jets_all_16->SetBorderSize(2);
   nB_medium_jets_all_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_16->SetBottomMargin(0.12);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   nB_medium_jets_all_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(9.227174e+10);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",10,-0.5,9.5);
   st_stack_61->SetMinimum(0);
   st_stack_61->SetMaximum(9.227174e+10);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_61->GetXaxis()->SetRange(1,10);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetTitleOffset(1);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/1.0");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetTitleSize(0.037);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetTitleOffset(1);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,6.149444e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,9.669875e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,1.62876e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,1.310606e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,9205080);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,445577.9);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,20433.47);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,795.304);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,1.770709);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,8788070);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,3428256);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1385622);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,382215.7);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,97743.85);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,19579.57);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,3746.926);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,419.8077);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,1.024321);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(1.868198e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,2622881);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,5571293);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,2224735);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,279133.9);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,20207.67);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,1224.538);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,74.26856);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,4.49047);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,0.1783232);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.2783886);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,526.4538);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,790.2074);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,509.3866);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,191.621);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,54.73086);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,13.90823);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,3.46557);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,0.8304013);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.1034397);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.2783886);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(1.791955e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_3 = new TH1D("VbbHcc_jets_all_nB_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(1,3094109);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(2,1.162624e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(3,1.235208e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(4,2508827);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(5,260800.8);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(6,20059.26);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(7,1366.594);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(8,101.7723);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(9,10.12096);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(10,0.9691904);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(11,0.3147015);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(1,448.2594);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(2,872.7246);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(3,903.5546);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(4,412.0108);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(5,133.9179);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(6,37.31976);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(7,9.798948);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(8,2.711301);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(9,0.8528074);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(10,0.2687089);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(11,0.1574223);
   VbbHcc_jets_all_nB_medium_stack_3->SetEntries(4.953882e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nB_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_4 = new TH1D("VbbHcc_jets_all_nB_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(1,2734532);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(2,993981);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(3,425770.8);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(4,64768.71);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(5,9075.075);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(6,726.0661);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(7,54.84542);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(8,5.641111);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(9,0.3367018);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(1,924.096);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(2,557.8122);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(3,366.6284);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(4,142.9985);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(5,53.59853);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(6,15.16131);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(7,4.141597);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(8,1.370229);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(9,0.3367018);
   VbbHcc_jets_all_nB_medium_stack_4->SetEntries(1.381774e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nB_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_5 = new TH1D("VbbHcc_jets_all_nB_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(1,8099694);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(2,1826975);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(3,246852.1);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(4,23523.61);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(5,1625.488);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(6,110.8402);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(7,10.14556);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(1,2967.408);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(2,1409.824);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(3,518.1648);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(4,159.9909);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(5,41.95691);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(6,10.95976);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(7,3.279899);
   VbbHcc_jets_all_nB_medium_stack_5->SetEntries(9601782);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nB_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_6 = new TH1D("VbbHcc_jets_all_nB_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(1,2399095);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(2,407910);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(3,32000.84);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(4,1749.319);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(5,78.26477);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(6,2.497729);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(7,0.09442656);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(1,471.7187);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(2,194.4931);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(3,54.39834);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(4,12.69113);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(5,2.679016);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(6,0.4704761);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(7,0.09442656);
   VbbHcc_jets_all_nB_medium_stack_6->SetEntries(3.111554e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nB_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_7 = new TH1D("VbbHcc_jets_all_nB_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(1,788581.6);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(2,181115.8);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(3,49954.32);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(4,4561.747);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(5,234.5564);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(6,11.15238);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(7,0.5969608);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(8,0.07472252);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(1,243.2025);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(2,116.5016);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(3,61.27796);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(4,18.49895);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(5,4.185405);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(6,0.9098634);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(7,0.211252);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(8,0.07472252);
   VbbHcc_jets_all_nB_medium_stack_7->SetEntries(1.387664e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nB_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_8 = new TH1D("VbbHcc_jets_all_nB_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(1,315203.3);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(2,92114.61);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(3,37489.53);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(4,5636.727);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(5,950.6371);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(6,56.58873);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(7,3.722626);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(8,0.2220094);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(1,250.2364);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(2,135.2375);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(3,86.45945);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(4,33.51727);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(5,13.78204);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(6,3.34157);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(7,0.8582653);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(8,0.2220094);
   VbbHcc_jets_all_nB_medium_stack_8->SetEntries(2307748);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nB_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_9 = new TH1D("VbbHcc_jets_all_nB_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(1,2218.913);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(2,5047.466);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(3,4587.119);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(4,1329.911);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(5,379.1623);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(6,26.51453);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(7,1.930091);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(8,0.1310637);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(9,0.01243317);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(1,1.954973);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(2,2.912106);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(3,2.763674);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(4,1.483233);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(5,0.7914177);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(6,0.2068692);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(7,0.05559066);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(8,0.01439621);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(9,0.004405718);
   VbbHcc_jets_all_nB_medium_stack_9->SetEntries(9308026);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nB_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_10 = new TH1D("VbbHcc_jets_all_nB_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(1,153.6214);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(2,636.0029);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(3,742.3694);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(4,249.9084);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(5,90.02843);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(6,7.439883);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(7,0.6012663);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(8,0.03527211);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(9,0.00234321);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(1,0.2414178);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(2,0.4939544);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(3,0.5347346);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(4,0.3101487);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(5,0.1864317);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(6,0.0534227);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(7,0.01518887);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(8,0.003675791);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(9,0.0009580835);
   VbbHcc_jets_all_nB_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nB_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_11 = new TH1D("VbbHcc_jets_all_nB_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(1,338.5762);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(2,194.4816);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(3,73.67601);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(4,17.97467);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(5,2.419875);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(6,0.2321652);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(7,0.01343043);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(8,0.00307456);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(1,0.7428183);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(2,0.5582274);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(3,0.3425213);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(4,0.1683566);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(5,0.06138217);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(6,0.01878609);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(7,0.004536208);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(8,0.002174351);
   VbbHcc_jets_all_nB_medium_stack_11->SetEntries(472445);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_12 = new TH1D("VbbHcc_jets_all_nB_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(1,40.79967);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(2,28.16418);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(3,13.40643);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(4,3.830715);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(5,0.5705139);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(6,0.06832484);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(7,0.006728769);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(8,0.001163988);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(1,0.08795382);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(2,0.07302238);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(3,0.05042589);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(4,0.02694501);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(5,0.01038603);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(6,0.00358509);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(7,0.001127736);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(8,0.0004754812);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_stack_12->SetEntries(492720);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_all_16->Modified();
   nB_medium_jets_all_16->cd();
   nB_medium_jets_all_16->SetSelected(nB_medium_jets_all_16);
}
