#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_17/nB_medium_jets_all_17
//=========  (Mon Dec 12 10:47:57 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_17 = new TCanvas("nB_medium_jets_all_17", "nB_medium_jets_all_17",0,0,600,600);
   nB_medium_jets_all_17->SetHighLightColor(2);
   nB_medium_jets_all_17->Range(-2.683529,-1.873381,11.21633,15.06875);
   nB_medium_jets_all_17->SetFillColor(0);
   nB_medium_jets_all_17->SetFillStyle(4000);
   nB_medium_jets_all_17->SetBorderMode(0);
   nB_medium_jets_all_17->SetBorderSize(2);
   nB_medium_jets_all_17->SetLogy();
   nB_medium_jets_all_17->SetLeftMargin(0.15709);
   nB_medium_jets_all_17->SetRightMargin(0.1234783);
   nB_medium_jets_all_17->SetBottomMargin(0.12);
   nB_medium_jets_all_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_17->SetFrameBorderMode(0);
   nB_medium_jets_all_17->SetFrameFillStyle(1000);
   nB_medium_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(7.030467e+12);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",10,-0.5,9.5);
   st_stack_62->SetMinimum(1.444358);
   st_stack_62->SetMaximum(2.368843e+13);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_62->GetXaxis()->SetRange(1,10);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/1.0");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,7.028398e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.434614e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,2.774033e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,2.947821e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,2.607788e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,1823762);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,94373.63);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,8568.417);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,1.69215);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(11,24.37632);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,8941542);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,3994974);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1736621);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,556334.7);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,161666.4);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,41322.47);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,8342.396);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,2216.754);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,0.9788758);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(11,24.37632);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(2.186231e+08);

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
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,2328508);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,6670964);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,3399780);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,568800.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,55099.25);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,4348.534);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,310.4081);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,25.48231);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,3.408249);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.1033809);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.1262733);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,530.9768);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,924.1032);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,672.1575);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,290.3502);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,95.42023);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,27.74578);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,7.534052);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,2.266808);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.8028867);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.07336306);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.08928886);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(1.964522e+08);

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
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(1,2276895);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(2,1.175991e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(3,1.696793e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(4,4566317);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(5,629717.8);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(6,63230.83);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(7,5595.754);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(8,510.7907);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(9,57.51265);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(10,8.326504);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(11,1.767485);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(1,386.3485);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(2,881.257);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(3,1062.512);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(4,557.966);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(5,208.9888);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(6,66.54844);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(7,19.91283);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(8,6.063475);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(9,2.067777);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(10,0.7858042);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(11,0.3707789);
   VbbHcc_jets_all_nB_medium_stack_3->SetEntries(6.16706e+08);

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
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(1,3026275);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(2,1265126);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(3,631794.9);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(4,117105.2);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(5,19800.61);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(6,2101.903);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(7,176.8306);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(8,16.93902);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(9,0.3578675);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(1,1122.271);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(2,726.7861);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(3,516.0353);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(4,222.3532);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(5,91.64352);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(6,29.86626);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(7,8.683215);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(8,2.68927);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(9,0.3578675);
   VbbHcc_jets_all_nB_medium_stack_4->SetEntries(1.282701e+07);

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
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(1,9078618);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(2,2610029);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(3,434813.9);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(4,51906.74);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(5,4624.704);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(6,338.9017);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(7,37.02391);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(8,2.263575);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(1,3438.556);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(2,1846.184);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(3,753.6383);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(4,260.676);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(5,77.70212);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(6,21.00733);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(7,7.003465);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(8,1.61326);
   VbbHcc_jets_all_nB_medium_stack_5->SetEntries(9908404);

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
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(1,2730806);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(2,650040.7);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(3,71471.96);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(4,5438.779);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(5,331.1397);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(6,22.25552);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(7,1.35816);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(8,0.2817384);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(9,0.291633);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(1,854.7794);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(2,417.3604);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(3,138.3556);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(4,38.14236);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(5,9.375891);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(6,2.420745);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(7,0.5936314);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(8,0.2817384);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(9,0.291633);
   VbbHcc_jets_all_nB_medium_stack_6->SetEntries(1.347846e+07);

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
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(1,891529.1);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(2,260621.6);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(3,83822.41);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(4,10558.77);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(5,761.4744);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(6,45.06588);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(7,2.792568);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(8,0.3592976);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(1,388.049);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(2,209.8042);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(3,119.0562);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(4,42.24053);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(5,11.33571);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(6,2.741264);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(7,0.6895975);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(8,0.2540663);
   VbbHcc_jets_all_nB_medium_stack_7->SetEntries(7702296);

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
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(1,353590.8);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(2,124427.3);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(3,59038.53);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(4,10830.66);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(5,2190.499);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(6,160.3963);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(7,9.670926);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(8,0.3763153);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(1,403.3277);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(2,239.246);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(3,164.9845);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(4,70.66748);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(5,31.71198);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(6,8.559121);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(7,2.144929);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(8,0.3763153);
   VbbHcc_jets_all_nB_medium_stack_8->SetEntries(1246544);

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
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(1,1756.73);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(2,5370.301);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(3,6396.59);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(4,2168.094);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(5,758.9871);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(6,74.29359);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(7,6.423181);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(8,0.5129568);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(9,0.03546465);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(10,0.001878847);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(11,0.001889439);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(1,1.899933);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(2,3.274545);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(3,3.555809);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(4,2.064125);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(5,1.21921);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(6,0.378032);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(7,0.1103823);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(8,0.03097148);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(9,0.008168501);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(10,0.001878847);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(11,0.001889439);
   VbbHcc_jets_all_nB_medium_stack_9->SetEntries(9814626);

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
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(1,177.897);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(2,736.5056);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(3,859.6804);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(4,289.3995);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(5,104.2549);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(6,8.615552);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(7,0.6962798);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(8,0.0408459);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(9,0.002713489);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(1,0.2795673);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(2,0.5720102);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(3,0.6192346);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(4,0.3591591);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(5,0.2158921);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(6,0.06186468);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(7,0.01758905);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(8,0.004256649);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(9,0.001109482);
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
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(1,345.7462);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(2,236.2975);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(3,102.7588);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(4,29.10677);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(5,4.430873);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(6,0.4432221);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(7,0.03494691);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(8,0.002089168);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(1,0.8036088);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(2,0.6622703);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(3,0.4353244);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(4,0.231128);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(5,0.08994934);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(6,0.02882063);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(7,0.007636144);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(8,0.002089168);
   VbbHcc_jets_all_nB_medium_stack_11->SetEntries(495304);

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
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(1,43.35777);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(2,32.59001);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(3,16.97742);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(4,5.41172);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(5,0.9742296);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(6,0.105126);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(7,0.008169258);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(8,0.0009807227);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(1,0.1027049);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(2,0.08907733);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(3,0.06434963);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(4,0.03633491);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(5,0.01547332);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(6,0.005043252);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(7,0.001368984);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(8,0.0004443019);
   VbbHcc_jets_all_nB_medium_stack_12->SetEntries(465395);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_17->Modified();
   nB_medium_jets_all_17->cd();
   nB_medium_jets_all_17->SetSelected(nB_medium_jets_all_17);
}
