#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_17_logY()
{
//=========Macro generated from canvas: nB_medium_jets_17/nB_medium_jets_17
//=========  (Tue Dec  6 15:26:15 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_17 = new TCanvas("nB_medium_jets_17", "nB_medium_jets_17",0,0,600,600);
   nB_medium_jets_17->SetHighLightColor(2);
   nB_medium_jets_17->Range(-2.683529,-3.964592,11.21633,15.30058);
   nB_medium_jets_17->SetFillColor(0);
   nB_medium_jets_17->SetFillStyle(4000);
   nB_medium_jets_17->SetBorderMode(0);
   nB_medium_jets_17->SetBorderSize(2);
   nB_medium_jets_17->SetLogy();
   nB_medium_jets_17->SetLeftMargin(0.15709);
   nB_medium_jets_17->SetRightMargin(0.1234783);
   nB_medium_jets_17->SetBottomMargin(0.12);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   nB_medium_jets_17->SetFrameFillStyle(1000);
   nB_medium_jets_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.1731307);
   st->SetMaximum(6.372584e+12);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",10,-0.5,9.5);
   st_stack_18->SetMinimum(0.02224481);
   st_stack_18->SetMaximum(2.36626e+13);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_18->GetXaxis()->SetRange(1,10);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/1.0");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,6.36977e+10);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,7.061727e+09);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,8.319709e+08);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,3.232136e+07);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,1121413);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,14926.76);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,9193317);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,3068128);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,1055022);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,208183.1);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,38936.82);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,4528.134);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(5.630978e+07);

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
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,3985334);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,6990985);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,1896067);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,148448.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,6690.635);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,300.5232);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,13.61723);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(8,0.7363871);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(9,0.1285601);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,697.8533);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,952.4461);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,511.9495);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,156.0212);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,35.8715);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,7.870937);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,1.649456);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(8,0.4106216);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(9,0.09092146);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(1.964522e+08);

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
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(1,4837623);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(2,1.561483e+07);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(3,1.382831e+07);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(4,1859557);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(5,122967.6);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(6,6509.924);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(7,363.771);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(8,24.54567);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(9,1.602332);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(10,0.5613458);
   VbbHcc_jets_nB_medium_stack_3->SetBinContent(11,0.06906218);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(1,561.9523);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(2,1015.42);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(3,962.2791);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(4,363.7122);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(5,95.04746);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(6,21.95973);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(7,5.229871);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(8,1.36462);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(9,0.3607149);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(10,0.2135773);
   VbbHcc_jets_nB_medium_stack_3->SetBinError(11,0.06906218);
   VbbHcc_jets_nB_medium_stack_3->SetEntries(6.16706e+08);

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
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(1,3455026);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(2,1139256);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(3,414253.5);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(4,48309.08);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(5,5305.199);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(6,238.8018);
   VbbHcc_jets_nB_medium_stack_4->SetBinContent(7,9.705387);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(1,1198.065);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(2,691.8362);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(3,419.323);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(4,143.5572);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(5,47.6824);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(6,10.09777);
   VbbHcc_jets_nB_medium_stack_4->SetBinError(7,2.107729);
   VbbHcc_jets_nB_medium_stack_4->SetEntries(1.282701e+07);

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
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(1,1.012607e+07);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(2,1852310);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(3,188802.9);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(4,12605.41);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(5,556.853);
   VbbHcc_jets_nB_medium_stack_5->SetBinContent(6,23.15751);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(1,3629.657);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(2,1559.996);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(3,499.0509);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(4,129.2258);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(5,27.2201);
   VbbHcc_jets_nB_medium_stack_5->SetBinError(6,5.443134);
   VbbHcc_jets_nB_medium_stack_5->SetEntries(9908404);

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
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(1,3147020);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(2,297666.4);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(3,12988.06);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(4,420.684);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(5,17.08942);
   VbbHcc_jets_nB_medium_stack_6->SetBinContent(6,0.5312041);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(1,917.6469);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(2,282.5784);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(3,59.04398);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(4,10.56702);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(5,2.138509);
   VbbHcc_jets_nB_medium_stack_6->SetBinError(6,0.3764162);
   VbbHcc_jets_nB_medium_stack_6->SetEntries(1.347846e+07);

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
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(1,1042979);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(2,168376.9);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(3,34181.98);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(4,1751.923);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(5,49.63166);
   VbbHcc_jets_nB_medium_stack_7->SetBinContent(6,2.522901);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(1,419.6764);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(2,168.7545);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(3,76.04724);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(4,17.22122);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(5,2.905822);
   VbbHcc_jets_nB_medium_stack_7->SetBinError(6,0.6407705);
   VbbHcc_jets_nB_medium_stack_7->SetEntries(7702296);

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
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(1,421130.2);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(2,97221.01);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(3,28436.01);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(4,3087.757);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(5,367.506);
   VbbHcc_jets_nB_medium_stack_8->SetBinContent(6,5.696521);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(1,440.064);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(2,211.7327);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(3,114.5748);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(4,37.72799);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(5,13.00701);
   VbbHcc_jets_nB_medium_stack_8->SetBinError(6,1.525479);
   VbbHcc_jets_nB_medium_stack_8->SetEntries(1246544);

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
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(1,3439.714);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(2,6702.279);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(3,4963.831);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(4,1160.561);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(5,256.4071);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(6,8.652747);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(7,0.5141364);
   VbbHcc_jets_nB_medium_stack_9->SetBinContent(8,0.01280678);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(1,2.642487);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(2,3.647464);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(3,3.129747);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(4,1.50949);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(5,0.708163);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(6,0.1276697);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(7,0.03098483);
   VbbHcc_jets_nB_medium_stack_9->SetBinError(8,0.004881047);
   VbbHcc_jets_nB_medium_stack_9->SetEntries(9814626);

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
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(1,279.0045);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(2,906.0565);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(3,729.1409);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(4,205.9472);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(5,54.6691);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(6,2.139942);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(7,0.1306474);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(8,0.003435367);
   VbbHcc_jets_nB_medium_stack_10->SetBinContent(9,0.0004149448);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(1,0.3504129);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(2,0.634865);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(3,0.5703642);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(4,0.3032055);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(5,0.1564032);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(6,0.03085709);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(7,0.007637005);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(8,0.001220523);
   VbbHcc_jets_nB_medium_stack_10->SetBinError(9,0.0004149448);
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
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(1,434.4993);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(2,208.9165);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(3,63.03796);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(4,11.37514);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(5,0.9617521);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(6,0.0255079);
   VbbHcc_jets_nB_medium_stack_11->SetBinContent(7,0.004193915);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(1,0.9003576);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(2,0.6223173);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(3,0.3402012);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(4,0.1443029);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(5,0.04202618);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(6,0.006648375);
   VbbHcc_jets_nB_medium_stack_11->SetBinError(7,0.002763133);
   VbbHcc_jets_nB_medium_stack_11->SetEntries(495304);

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
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(1,1118206);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(2,661214);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(3,269510.6);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(4,61290.69);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(5,6526.745);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(6,306.5253);
   VbbHcc_jets_nB_medium_stack_12->SetBinContent(7,15.83547);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(1,2405.233);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(2,1853.119);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(3,1184.133);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(4,565.7517);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(5,184.6488);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(6,39.17977);
   VbbHcc_jets_nB_medium_stack_12->SetBinError(7,9.15579);
   VbbHcc_jets_nB_medium_stack_12->SetEntries(465395);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_17->Modified();
   nB_medium_jets_17->cd();
   nB_medium_jets_17->SetSelected(nB_medium_jets_17);
}
