#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_17_logY()
{
//=========Macro generated from canvas: nC_medium_jets_all_17/nC_medium_jets_all_17
//=========  (Tue Dec  6 15:26:16 2022) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_17 = new TCanvas("nC_medium_jets_all_17", "nC_medium_jets_all_17",0,0,600,600);
   nC_medium_jets_all_17->SetHighLightColor(2);
   nC_medium_jets_all_17->Range(-2.683529,4.607896,11.21633,13.64074);
   nC_medium_jets_all_17->SetFillColor(0);
   nC_medium_jets_all_17->SetFillStyle(4000);
   nC_medium_jets_all_17->SetBorderMode(0);
   nC_medium_jets_all_17->SetBorderSize(2);
   nC_medium_jets_all_17->SetLogy();
   nC_medium_jets_all_17->SetLeftMargin(0.15709);
   nC_medium_jets_all_17->SetRightMargin(0.1234783);
   nC_medium_jets_all_17->SetBottomMargin(0.12);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   nC_medium_jets_all_17->SetFrameFillStyle(1000);
   nC_medium_jets_all_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1990169);
   st->SetMaximum(2.462604e+12);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",10,-0.5,9.5);
   st_stack_46->SetMinimum(491854.9);
   st_stack_46->SetMaximum(5.463289e+12);
   st_stack_46->SetDirectory(0);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_46->GetXaxis()->SetRange(1,10);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/1.0");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetTitleSize(0.037);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,1.752608e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,2.460654e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,1.703793e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,8.059786e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,3.025509e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,9.782548e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,2.872497e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,7.753107e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,1.980886e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,4768169);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,1403763);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,4840206);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,5718051);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,4747625);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,3261133);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1996728);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,1135010);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,615141.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,319347.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,161665.1);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,79202.01);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,43052.51);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(5.630978e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,2251511);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,4006376);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,3462454);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,1984291);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,867704.6);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,315389.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,100651.9);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,29115);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,7783.974);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,1957.274);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,605.2082);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,500.9389);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,696.8072);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,675.8465);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,531.9246);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,363.3659);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,224.3754);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,128.9542);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,70.28897);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,36.68761);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,18.53139);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,10.42562);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(1.964522e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_3 = new TH1D("VbbHcc_jets_all_nC_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(1,3449662);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(2,8455997);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(3,9916385);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(4,7483353);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(5,4144526);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(6,1827024);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(7,679995.1);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(8,222653.3);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(9,66185.84);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(10,18199.88);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinContent(11,6201.466);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(1,456.4189);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(2,734.1438);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(3,812.2407);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(4,717.0405);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(5,539.7299);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(6,361.1027);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(7,221.4217);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(8,127.1525);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(9,69.48707);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(10,36.49865);
   VbbHcc_jets_all_nC_medium_stack_3->SetBinError(11,21.3111);
   VbbHcc_jets_all_nC_medium_stack_3->SetEntries(6.16706e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nC_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_4 = new TH1D("VbbHcc_jets_all_nC_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(1,632664.8);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(2,1371720);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(3,1415060);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(4,932292);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(5,451004.3);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(6,176304.8);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(7,59187.2);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(8,17672.79);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(9,4872.911);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(10,1232.4);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinContent(11,386.1397);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(1,517.6349);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(2,758.6475);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(3,767.8803);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(4,621.6116);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(5,431.678);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(6,269.5665);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(7,156.0259);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(8,85.22803);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(9,44.75288);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(10,22.45318);
   VbbHcc_jets_all_nC_medium_stack_4->SetBinError(11,12.55108);
   VbbHcc_jets_all_nC_medium_stack_4->SetEntries(1.282701e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nC_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_5 = new TH1D("VbbHcc_jets_all_nC_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(1,1290312);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(2,3215739);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(3,3517218);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(4,2355875);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(5,1146763);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(6,445163);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(7,148549.6);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(8,44425.42);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(9,12175.88);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(10,3171.309);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinContent(11,977.2499);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(1,1305.721);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(2,2053.536);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(3,2140.303);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(4,1746.826);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(5,1216.157);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(6,756.6223);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(7,436.8938);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(8,238.7228);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(9,125.012);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(10,63.60004);
   VbbHcc_jets_all_nC_medium_stack_5->SetBinError(11,35.34933);
   VbbHcc_jets_all_nC_medium_stack_5->SetEntries(9908404);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nC_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_6 = new TH1D("VbbHcc_jets_all_nC_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(1,763077.6);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(2,1149987);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(3,864222.5);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(4,433949.7);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(5,168883.6);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(6,55644.98);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(7,16393.17);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(8,4447.829);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(9,1144.501);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(10,280.3829);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinContent(11,81.9968);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(1,453.0758);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(2,555.1993);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(3,480.4994);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(4,339.9398);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(5,211.8325);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(6,121.5072);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(7,65.95033);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(8,34.36327);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(9,17.40633);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(10,8.619989);
   VbbHcc_jets_all_nC_medium_stack_6->SetBinError(11,4.665452);
   VbbHcc_jets_all_nC_medium_stack_6->SetEntries(1.347846e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nC_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_7 = new TH1D("VbbHcc_jets_all_nC_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(1,285437.8);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(2,410113.4);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(3,305707.2);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(4,155579.2);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(5,61490.53);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(6,20577.14);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(7,6161.641);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(8,1695.233);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(9,441.1786);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(10,110.1607);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinContent(11,28.1797);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(1,220.3047);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(2,263.4258);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(3,226.9531);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(4,161.6023);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(5,101.4577);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(6,58.67238);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(7,32.08464);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(8,16.81821);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(9,8.560683);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(10,4.277401);
   VbbHcc_jets_all_nC_medium_stack_7->SetBinError(11,2.164889);
   VbbHcc_jets_all_nC_medium_stack_7->SetEntries(7702296);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nC_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_8 = new TH1D("VbbHcc_jets_all_nC_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(1,132821.6);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(2,178832);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(3,132042.5);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(4,66940.65);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(5,26838.63);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(6,9021.948);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(7,2700.061);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(8,783.2219);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(9,214.2887);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(10,39.30233);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinContent(11,14.11164);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(1,248.1288);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(2,287.0784);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(3,246.0887);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(4,174.9881);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(5,110.6106);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(6,64.05004);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(7,35.05894);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(8,18.91397);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(9,9.95286);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(10,4.161016);
   VbbHcc_jets_all_nC_medium_stack_8->SetBinError(11,2.564424);
   VbbHcc_jets_all_nC_medium_stack_8->SetEntries(1246544);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nC_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_9 = new TH1D("VbbHcc_jets_all_nC_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(1,2693.087);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(2,4995.561);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(3,4478.12);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(4,2609.632);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(5,1146.639);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(6,419.352);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(7,135.4486);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(8,39.493);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(9,10.94013);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(10,2.7658);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinContent(11,0.9321717);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(1,2.341611);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(2,3.166834);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(3,2.978795);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(4,2.259609);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(5,1.489872);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(6,0.8980195);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(7,0.5092162);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(8,0.2743854);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(9,0.1437295);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(10,0.07220118);
   VbbHcc_jets_all_nC_medium_stack_9->SetBinError(11,0.0417163);
   VbbHcc_jets_all_nC_medium_stack_9->SetEntries(9814626);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nC_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_10 = new TH1D("VbbHcc_jets_all_nC_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(1,323.7291);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(2,652.0312);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(3,614.1983);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(4,361.6924);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(5,153.4043);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(6,51.59059);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(7,15.02167);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(8,4.0707);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(9,1.017863);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(10,0.2476611);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinContent(11,0.08896693);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(1,0.3818502);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(2,0.5403262);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(3,0.5226885);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(4,0.3995087);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(5,0.2589325);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(6,0.1492853);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(7,0.07999061);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(8,0.04133047);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(9,0.0204783);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(10,0.009979916);
   VbbHcc_jets_all_nC_medium_stack_10->SetBinError(11,0.005955208);
   VbbHcc_jets_all_nC_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nC_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_11 = new TH1D("VbbHcc_jets_all_nC_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(1,108.6937);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(2,255.5496);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(3,230.2167);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(4,98.88254);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(5,22.62664);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(6,2.638144);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(7,0.2017205);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinContent(8,0.01133589);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(1,0.452645);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(2,0.6898088);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(3,0.6532786);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(4,0.4267714);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(5,0.203679);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(6,0.06927806);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(7,0.01915597);
   VbbHcc_jets_all_nC_medium_stack_11->SetBinError(8,0.00433818);
   VbbHcc_jets_all_nC_medium_stack_11->SetEntries(495304);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nC_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_12 = new TH1D("VbbHcc_jets_all_nC_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(1,249635.6);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(2,708873.3);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(3,726077.7);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(4,342748.6);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(5,81616.53);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(6,7919.79);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinContent(7,198.3964);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(1,1139.811);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(2,1918.537);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(3,1939.969);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(4,1330.666);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(5,649.0503);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(6,201.7087);
   VbbHcc_jets_all_nC_medium_stack_12->SetBinError(7,33.09318);
   VbbHcc_jets_all_nC_medium_stack_12->SetEntries(465395);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nC_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   nC_medium_jets_all_17->Modified();
   nC_medium_jets_all_17->cd();
   nC_medium_jets_all_17->SetSelected(nC_medium_jets_all_17);
}
