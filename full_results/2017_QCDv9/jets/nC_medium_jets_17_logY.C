#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_17_logY()
{
//=========Macro generated from canvas: nC_medium_jets_17/nC_medium_jets_17
//=========  (Mon Dec 12 10:47:55 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_17 = new TCanvas("nC_medium_jets_17", "nC_medium_jets_17",0,0,600,600);
   nC_medium_jets_17->SetHighLightColor(2);
   nC_medium_jets_17->Range(-2.683529,-2.954197,11.21633,15.04292);
   nC_medium_jets_17->SetFillColor(0);
   nC_medium_jets_17->SetFillStyle(4000);
   nC_medium_jets_17->SetBorderMode(0);
   nC_medium_jets_17->SetBorderSize(2);
   nC_medium_jets_17->SetLogy();
   nC_medium_jets_17->SetLeftMargin(0.15709);
   nC_medium_jets_17->SetRightMargin(0.1234783);
   nC_medium_jets_17->SetBottomMargin(0.12);
   nC_medium_jets_17->SetFrameFillStyle(1000);
   nC_medium_jets_17->SetFrameBorderMode(0);
   nC_medium_jets_17->SetFrameFillStyle(1000);
   nC_medium_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1.173722);
   st->SetMaximum(4.966029e+12);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",10,-0.5,9.5);
   st_stack_22->SetMinimum(0.1604931);
   st_stack_22->SetMaximum(1.750669e+13);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_22->GetXaxis()->SetRange(1,10);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/1.0");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,4.963556e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,2.996902e+10);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,7.15179e+09);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,8.922115e+08);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,7.310759e+07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,4931182);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,311234.3);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,16246.07);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(9,1013.558);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(10,461.9595);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(11,0.5509428);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,7576099);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,5782756);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,2742188);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,919370.2);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,242012.3);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,56206.52);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,12515.85);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,2226.728);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(9,327.1104);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(10,366.6187);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(11,0.5509428);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(2.186231e+08);

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
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,6002995);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,4852886);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,1737216);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,371804.1);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,55664.19);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,6573.212);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,637.8027);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,57.21815);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(9,6.055217);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(10,0.1255202);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(11,0.02048559);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,825.2371);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,801.5838);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,523.7089);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,264.9213);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,110.3783);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,39.70574);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,12.53815);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,3.691348);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(9,1.184319);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(10,0.09005008);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(11,0.02048559);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(1.964522e+08);

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
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(1,1.056283e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(2,1.391481e+07);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(3,8181751);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(4,2836130);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(5,651515.6);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(6,107626.2);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(7,13838.55);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(8,1516.289);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(9,147.6332);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(10,13.52391);
   VbbHcc_jets_nC_medium_stack_3->SetBinContent(11,0.9043218);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(1,805.4673);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(2,959.799);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(3,759.081);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(4,457.4857);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(5,222.7733);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(6,91.37886);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(7,32.8975);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(8,10.91928);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(9,3.388752);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(10,1.03813);
   VbbHcc_jets_nC_medium_stack_3->SetBinError(11,0.2597929);
   VbbHcc_jets_nC_medium_stack_3->SetEntries(6.16706e+08);

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
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(1,1644559);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(2,2032426);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(3,1046872);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(4,286603);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(5,46494.17);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(6,5038.166);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(7,377.8763);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(8,26.2697);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(9,0.8787401);
   VbbHcc_jets_nC_medium_stack_4->SetBinContent(10,0.3007987);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(1,824.137);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(2,921.4943);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(3,664.08);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(4,348.4235);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(5,140.5433);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(6,46.24381);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(7,12.65294);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(8,3.380412);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(9,0.6213632);
   VbbHcc_jets_nC_medium_stack_4->SetBinError(10,0.3007987);
   VbbHcc_jets_nC_medium_stack_4->SetEntries(1.282701e+07);

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
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(1,3482868);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(2,5025509);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(3,2774866);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(4,763135.5);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(5,120254.3);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(6,12673.27);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(7,987.3253);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(8,71.58481);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(9,5.414623);
   VbbHcc_jets_nC_medium_stack_5->SetBinContent(10,0.4295645);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(1,2114.13);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(2,2561.013);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(3,1912.324);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(4,1005.654);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(5,399.5798);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(6,129.5911);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(7,36.06771);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(8,9.732235);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(9,2.757721);
   VbbHcc_jets_nC_medium_stack_5->SetBinError(10,0.4295645);
   VbbHcc_jets_nC_medium_stack_5->SetEntries(9908404);

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
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(1,1990032);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(2,1116660);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(3,298668.3);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(4,47245.81);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(5,5067.233);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(6,409.1806);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(7,28.51101);
   VbbHcc_jets_nC_medium_stack_6->SetBinContent(8,1.186272);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(1,729.4291);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(2,547.0024);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(3,283.0533);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(4,112.5105);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(5,36.82522);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(6,10.42544);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(7,2.761308);
   VbbHcc_jets_nC_medium_stack_6->SetBinError(8,0.5400439);
   VbbHcc_jets_nC_medium_stack_6->SetEntries(1.347846e+07);

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
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(1,720721.9);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(2,394913.6);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(3,110112.6);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(4,19143.14);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(5,2242.338);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(6,194.8943);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(7,12.16991);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(8,0.72671);
   VbbHcc_jets_nC_medium_stack_7->SetBinContent(9,0.1747581);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(1,348.9008);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(2,258.3146);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(3,136.3628);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(4,56.8299);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(5,19.43116);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(6,5.709411);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(7,1.424625);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(8,0.3592148);
   VbbHcc_jets_nC_medium_stack_7->SetBinError(9,0.1747581);
   VbbHcc_jets_nC_medium_stack_7->SetEntries(7702296);

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
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(1,322812.1);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(2,167866.5);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(3,49640.27);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(4,8778.151);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(5,1061.715);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(6,84.34864);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(7,4.618282);
   VbbHcc_jets_nC_medium_stack_8->SetBinContent(8,0.4980689);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(1,385.3657);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(2,277.9701);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(3,151.1949);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(4,63.58085);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(5,22.17592);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(6,6.214017);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(7,1.467517);
   VbbHcc_jets_nC_medium_stack_8->SetBinError(8,0.4980689);
   VbbHcc_jets_nC_medium_stack_8->SetEntries(1246544);

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
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(1,7501.343);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(2,6115.86);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(3,2322.511);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(4,510.1263);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(5,73.07671);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(6,8.118932);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(7,0.8595617);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(8,0.0719019);
   VbbHcc_jets_nC_medium_stack_9->SetBinContent(9,0.004308105);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(1,3.886129);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(2,3.478464);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(3,2.13021);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(4,0.9920803);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(5,0.3725788);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(6,0.1229383);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(7,0.03988826);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(8,0.01146701);
   VbbHcc_jets_nC_medium_stack_9->SetBinError(9,0.003060379);
   VbbHcc_jets_nC_medium_stack_9->SetEntries(9814626);

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
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(1,686.9954);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(2,853.8575);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(3,463.725);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(4,141.5244);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(5,26.93569);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(6,3.636886);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(7,0.3800662);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(8,0.0354784);
   VbbHcc_jets_nC_medium_stack_10->SetBinContent(9,0.002398665);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(1,0.5538661);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(2,0.6164978);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(3,0.4535001);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(4,0.24998);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(5,0.1086965);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(6,0.03976412);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(7,0.01279425);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(8,0.003914867);
   VbbHcc_jets_nC_medium_stack_10->SetBinError(9,0.00099963);
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
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(1,198.0357);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(2,290.2418);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(3,175.8248);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(4,48.14384);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(5,6.243164);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(6,0.3198134);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(7,0.009382889);
   VbbHcc_jets_nC_medium_stack_11->SetBinContent(8,0.001999757);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(1,0.6107652);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(2,0.7339965);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(3,0.5694605);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(4,0.2970401);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(5,0.1067701);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(6,0.02401044);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(7,0.004174284);
   VbbHcc_jets_nC_medium_stack_11->SetBinError(8,0.001999757);
   VbbHcc_jets_nC_medium_stack_11->SetEntries(495304);

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
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(1,17.29424);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(2,38.8327);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(3,30.51842);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(4,10.82934);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(5,1.841427);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(6,0.1079246);
   VbbHcc_jets_nC_medium_stack_12->SetBinContent(7,0.001374398);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(1,0.06469849);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(2,0.09724538);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(3,0.08629639);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(4,0.05142);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(5,0.02123808);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(6,0.005100223);
   VbbHcc_jets_nC_medium_stack_12->SetBinError(7,0.0006138697);
   VbbHcc_jets_nC_medium_stack_12->SetEntries(465395);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_17->Modified();
   nC_medium_jets_17->cd();
   nC_medium_jets_17->SetSelected(nC_medium_jets_17);
}
