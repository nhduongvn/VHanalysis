#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_tagOnly_16/Aplanarity_tagOnly_16
//=========  (Wed Feb 14 12:32:57 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagOnly_16 = new TCanvas("Aplanarity_tagOnly_16", "Aplanarity_tagOnly_16",0,0,600,600);
   Aplanarity_tagOnly_16->SetHighLightColor(2);
   Aplanarity_tagOnly_16->Range(0,0,1,1);
   Aplanarity_tagOnly_16->SetFillColor(0);
   Aplanarity_tagOnly_16->SetFillStyle(4000);
   Aplanarity_tagOnly_16->SetBorderMode(0);
   Aplanarity_tagOnly_16->SetBorderSize(2);
   Aplanarity_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_tagOnly_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-7101.98,1.052419,7094888);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6384689);
   
   TH1F *st_stack_46 = new TH1F("st_stack_46","",50,0,1);
   st_stack_46->SetMinimum(0.01);
   st_stack_46->SetMaximum(6384689);
   st_stack_46->SetDirectory(nullptr);
   st_stack_46->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_46->SetLineColor(ci);
   st_stack_46->SetLineWidth(0);
   st_stack_46->GetXaxis()->SetRange(1,50);
   st_stack_46->GetXaxis()->SetLabelFont(42);
   st_stack_46->GetXaxis()->SetTitleOffset(1);
   st_stack_46->GetXaxis()->SetTitleFont(42);
   st_stack_46->GetYaxis()->SetTitle("Events/0.02");
   st_stack_46->GetYaxis()->SetLabelFont(42);
   st_stack_46->GetYaxis()->SetLabelSize(0.05);
   st_stack_46->GetYaxis()->SetTitleSize(0.057);
   st_stack_46->GetYaxis()->SetTitleOffset(1.2);
   st_stack_46->GetYaxis()->SetTitleFont(42);
   st_stack_46->GetZaxis()->SetLabelFont(42);
   st_stack_46->GetZaxis()->SetTitleOffset(1);
   st_stack_46->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_46);
   
   
   TH1D *VH_tagOnly_Aplanarity_stack_1 = new TH1D("VH_tagOnly_Aplanarity_stack_1","",50,0,1);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(1,1863767);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(2,265893.5);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(3,64801.62);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(4,21569.07);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(5,5817.646);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(6,2951.147);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(7,2206.36);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(8,626.624);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(9,783.3283);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(10,132.4082);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(11,175.2253);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(12,378.5018);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(13,101.3944);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(14,10.21887);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(15,38.21774);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinContent(17,12.40057);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(1,39238.5);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(2,19184.66);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(3,4195.751);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(4,2261.115);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(5,850.6796);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(6,571.122);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(7,525.8233);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(8,95.18941);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(9,298.7139);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(10,41.35709);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(11,48.36);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(12,250.4309);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(13,39.61198);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(14,7.810059);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(15,18.63109);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(16,0.4282265);
   VH_tagOnly_Aplanarity_stack_1->SetBinError(17,8.570513);
   VH_tagOnly_Aplanarity_stack_1->SetEntries(178453);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_1->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_1,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_2 = new TH1D("VH_tagOnly_Aplanarity_stack_2","",50,0,1);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(1,20048.81);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(2,2888.71);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(3,742.312);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(4,253.0526);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(5,93.53908);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(6,47.23488);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(7,27.23587);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(8,13.7963);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(9,9.86555);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(10,6.983449);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(11,3.868061);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(12,1.537047);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(13,1.819767);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(14,0.9050719);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(15,0.5858812);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(16,0.3742319);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(17,0.1128299);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(18,0.4991102);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(19,0.06937962);
   VH_tagOnly_Aplanarity_stack_2->SetBinContent(20,0.3762877);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(1,52.44479);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(2,19.63508);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(3,10.07244);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(4,5.926974);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(5,3.522063);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(6,2.648785);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(7,2.073186);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(8,1.398367);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(9,1.230083);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(10,1.081523);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(11,0.7365855);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(12,0.3964321);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(13,0.4880235);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(14,0.3913545);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(15,0.2717041);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(16,0.2201845);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(17,0.06623067);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(18,0.3561938);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(19,0.04928414);
   VH_tagOnly_Aplanarity_stack_2->SetBinError(20,0.307226);
   VH_tagOnly_Aplanarity_stack_2->SetEntries(391238);

   ci = TColor::GetColor("#660066");
   VH_tagOnly_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_2->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_2,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_3 = new TH1D("VH_tagOnly_Aplanarity_stack_3","",50,0,1);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(1,321601.7);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(2,45739.98);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(3,11946.75);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(4,4304.291);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(5,1899.896);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(6,958.9637);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(7,519.4191);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(8,299.4743);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(9,186.1992);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(10,110.8868);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(11,72.48368);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(12,45.73647);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(13,29.92511);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(14,18.48253);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(15,13.04406);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(16,6.240137);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(17,3.958028);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(18,2.353527);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(19,1.369998);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(20,0.2263156);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(21,0.254501);
   VH_tagOnly_Aplanarity_stack_3->SetBinContent(22,0.1130108);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(1,135.2833);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(2,50.43467);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(3,25.78896);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(4,15.50411);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(5,10.32123);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(6,7.353737);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(7,5.416917);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(8,4.118624);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(9,3.257637);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(10,2.5107);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(11,2.038753);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(12,1.641451);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(13,1.315484);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(14,1.038372);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(15,0.8815327);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(16,0.5998833);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(17,0.477333);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(18,0.3705875);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(19,0.2790547);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(20,0.1039437);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(21,0.1288106);
   VH_tagOnly_Aplanarity_stack_3->SetBinError(22,0.0800038);
   VH_tagOnly_Aplanarity_stack_3->SetEntries(7274481);

   ci = TColor::GetColor("#cc00cc");
   VH_tagOnly_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_3->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_3,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_4 = new TH1D("VH_tagOnly_Aplanarity_stack_4","",50,0,1);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(1,14794.71);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(2,1681.485);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(3,427.4806);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(4,133.4739);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(5,56.1955);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(6,24.87122);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(7,16.2148);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(8,7.6533);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(9,3.136373);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(10,6.973859);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(11,1.864706);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(12,1.7226);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(13,0.6856948);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(14,0.8119738);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(15,0.1519035);
   VH_tagOnly_Aplanarity_stack_4->SetBinContent(16,0.350902);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(1,72.55406);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(2,28.48706);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(3,14.27566);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(4,7.743379);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(5,4.720437);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(6,2.35227);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(7,1.552432);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(8,1.023179);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(9,0.540369);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(10,2.633401);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(11,0.4723849);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(12,0.4940093);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(13,0.2202531);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(14,0.3797305);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(15,0.110146);
   VH_tagOnly_Aplanarity_stack_4->SetBinError(16,0.2913944);
   VH_tagOnly_Aplanarity_stack_4->SetEntries(155692);

   ci = TColor::GetColor("#00cccc");
   VH_tagOnly_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_4->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_4,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_5 = new TH1D("VH_tagOnly_Aplanarity_stack_5","",50,0,1);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(1,8803.131);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(2,925.8559);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(3,258.4008);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(4,83.59198);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(5,29.05985);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(6,27.10142);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(7,23.12255);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(8,5.245211);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(9,2.124396);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(10,2.841452);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(11,1.014635);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(12,1.174789);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(13,0.3897767);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(15,0.1673636);
   VH_tagOnly_Aplanarity_stack_5->SetBinContent(20,0.1161398);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(1,91.89221);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(2,32.44575);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(3,20.26467);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(4,10.63905);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(5,3.596229);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(6,7.179678);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(7,9.281302);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(8,1.278568);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(9,0.583257);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(10,1.505166);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(11,0.3082362);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(12,0.5190446);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(13,0.1800609);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(14,0.0002168231);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(15,0.1673636);
   VH_tagOnly_Aplanarity_stack_5->SetBinError(20,0.08847096);
   VH_tagOnly_Aplanarity_stack_5->SetEntries(112560);

   ci = TColor::GetColor("#ff99cc");
   VH_tagOnly_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_5->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_5,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_6 = new TH1D("VH_tagOnly_Aplanarity_stack_6","",50,0,1);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(1,76.28871);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(2,7.704682);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(3,1.876927);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(4,0.7492838);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(5,0.6278226);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinContent(7,0.1969203);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(1,3.040422);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(2,0.9320073);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(3,0.4480539);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(4,0.3097005);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(5,0.2875252);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(6,0.1080637);
   VH_tagOnly_Aplanarity_stack_6->SetBinError(7,0.1392489);
   VH_tagOnly_Aplanarity_stack_6->SetEntries(766);

   ci = TColor::GetColor("#9933ff");
   VH_tagOnly_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_6->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_6,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_7 = new TH1D("VH_tagOnly_Aplanarity_stack_7","",50,0,1);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(1,202.071);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(2,21.25551);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(3,3.733304);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(4,2.388605);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(5,0.5816526);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(6,0.6051468);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(7,0.09976565);
   VH_tagOnly_Aplanarity_stack_7->SetBinContent(8,0.07611304);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(1,4.428625);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(2,1.419708);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(3,0.5974129);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(4,0.4868937);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(5,0.2416232);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(6,0.2504086);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(7,0.09976565);
   VH_tagOnly_Aplanarity_stack_7->SetBinError(8,0.07611304);
   VH_tagOnly_Aplanarity_stack_7->SetEntries(2494);

   ci = TColor::GetColor("#3399ff");
   VH_tagOnly_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_7->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_7,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_8 = new TH1D("VH_tagOnly_Aplanarity_stack_8","",50,0,1);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(1,142.187);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(2,15.02976);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(3,3.849583);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(4,1.337248);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(5,0.8600013);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(6,0.7431584);
   VH_tagOnly_Aplanarity_stack_8->SetBinContent(8,0.2475029);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(1,5.706371);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(2,1.798077);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(3,0.905814);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(4,0.5532117);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(5,0.4379585);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(6,0.3800822);
   VH_tagOnly_Aplanarity_stack_8->SetBinError(8,0.2475029);
   VH_tagOnly_Aplanarity_stack_8->SetEntries(759);

   ci = TColor::GetColor("#33ff99");
   VH_tagOnly_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_8->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_8,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_9 = new TH1D("VH_tagOnly_Aplanarity_stack_9","",50,0,1);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(1,64.89921);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(2,6.536214);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(3,1.46621);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(4,0.4600242);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(5,0.2105672);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(6,0.1080115);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(7,0.06652717);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(8,0.0317798);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(9,0.01891933);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(10,0.01371737);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(11,0.004439176);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(12,0.00463906);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(13,0.003235031);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(15,0.001495078);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(17,0.0009890595);
   VH_tagOnly_Aplanarity_stack_9->SetBinContent(20,0.001652488);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(1,0.2868612);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(2,0.09016853);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(3,0.04347528);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(4,0.02426978);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(5,0.01643079);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(6,0.01197128);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(7,0.009508311);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(8,0.006280111);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(9,0.004958238);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(10,0.004459122);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(11,0.002220441);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(12,0.002716629);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(13,0.002287616);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(15,0.001495078);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(17,0.0009890595);
   VH_tagOnly_Aplanarity_stack_9->SetBinError(20,0.001652488);
   VH_tagOnly_Aplanarity_stack_9->SetEntries(60951);

   ci = TColor::GetColor("#cccc00");
   VH_tagOnly_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_9->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_9,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_10 = new TH1D("VH_tagOnly_Aplanarity_stack_10","",50,0,1);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(1,33.51964);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(2,3.748945);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(3,0.8918757);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(4,0.304225);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(5,0.150649);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(6,0.06016428);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(7,0.04562179);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(8,0.02032436);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(9,0.01228727);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(10,0.008679508);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(11,0.004631419);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(12,0.00321702);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(13,0.001666491);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(14,0.001643577);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(16,0.0004862677);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(17,0.0003327318);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(19,0.0004289453);
   VH_tagOnly_Aplanarity_stack_10->SetBinContent(21,0.0003535607);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(1,0.1047598);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(2,0.03454571);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(3,0.01688402);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(4,0.0100428);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(5,0.0071251);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(6,0.004384799);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(7,0.003920879);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(8,0.002603236);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(9,0.002016714);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(10,0.001630261);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(11,0.001349185);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(12,0.001013434);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(13,0.0007540687);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(14,0.0007389029);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(16,0.0003535431);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(17,0.0003327318);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(19,0.0004289453);
   VH_tagOnly_Aplanarity_stack_10->SetBinError(21,0.0003535607);
   VH_tagOnly_Aplanarity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VH_tagOnly_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_10->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_10,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_11 = new TH1D("VH_tagOnly_Aplanarity_stack_11","",50,0,1);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(1,1.564113);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(2,0.1446119);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(3,0.03251455);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(4,0.01257971);
   VH_tagOnly_Aplanarity_stack_11->SetBinContent(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(1,0.0567808);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(2,0.0173493);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(3,0.008012246);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(4,0.005226104);
   VH_tagOnly_Aplanarity_stack_11->SetBinError(6,0.001736123);
   VH_tagOnly_Aplanarity_stack_11->SetEntries(888);

   ci = TColor::GetColor("#cc0000");
   VH_tagOnly_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_11->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_11,"");
   
   TH1D *VH_tagOnly_Aplanarity_stack_12 = new TH1D("VH_tagOnly_Aplanarity_stack_12","",50,0,1);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(1,0.7466573);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(2,0.08078894);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(3,0.02065006);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(4,0.007250189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(5,0.002633383);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(6,0.0009468242);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(7,0.0006445096);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(8,0.001458604);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinContent(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(1,0.01470872);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(2,0.004812859);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(3,0.002429019);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(4,0.001513212);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(5,0.0008911909);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(6,0.0004856896);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(7,0.0004612644);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(8,0.0006179336);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(9,0.0004297189);
   VH_tagOnly_Aplanarity_stack_12->SetBinError(17,0.0002685819);
   VH_tagOnly_Aplanarity_stack_12->SetEntries(3081);

   ci = TColor::GetColor("#00cc00");
   VH_tagOnly_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity_stack_12->SetLineColor(ci);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Aplanarity__91 = new TH1D("VH_tagOnly_Aplanarity__91","",50,0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(0,1);
   VH_tagOnly_Aplanarity__91->SetBinContent(1,2873110);
   VH_tagOnly_Aplanarity__91->SetBinContent(2,400413);
   VH_tagOnly_Aplanarity__91->SetBinContent(3,101430);
   VH_tagOnly_Aplanarity__91->SetBinContent(4,33331);
   VH_tagOnly_Aplanarity__91->SetBinContent(5,12880);
   VH_tagOnly_Aplanarity__91->SetBinContent(6,6167);
   VH_tagOnly_Aplanarity__91->SetBinContent(7,3268);
   VH_tagOnly_Aplanarity__91->SetBinContent(8,1792);
   VH_tagOnly_Aplanarity__91->SetBinContent(9,1083);
   VH_tagOnly_Aplanarity__91->SetBinContent(10,661);
   VH_tagOnly_Aplanarity__91->SetBinContent(11,393);
   VH_tagOnly_Aplanarity__91->SetBinContent(12,258);
   VH_tagOnly_Aplanarity__91->SetBinContent(13,179);
   VH_tagOnly_Aplanarity__91->SetBinContent(14,95);
   VH_tagOnly_Aplanarity__91->SetBinContent(15,74);
   VH_tagOnly_Aplanarity__91->SetBinContent(16,28);
   VH_tagOnly_Aplanarity__91->SetBinContent(17,21);
   VH_tagOnly_Aplanarity__91->SetBinContent(18,11);
   VH_tagOnly_Aplanarity__91->SetBinContent(19,9);
   VH_tagOnly_Aplanarity__91->SetBinContent(20,8);
   VH_tagOnly_Aplanarity__91->SetEntries(3435261);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__91->SetLineColor(ci);
   VH_tagOnly_Aplanarity__91->SetLineWidth(2);
   VH_tagOnly_Aplanarity__91->SetMarkerStyle(20);
   VH_tagOnly_Aplanarity__91->SetMarkerSize(1.2);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetRange(1,100);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__91->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__91->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_Aplanarity_fx1091[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fy1091[50] = { 2229537, 317184.1, 78188.44, 26348.74, 7898.77, 4010.946, 2792.761, 953.1703, 984.6855, 260.1162, 254.4654, 428.6806, 134.2197, 30.42031, 52.16845, 7.393983, 16.47302,
   2.852638, 1.439806, 0.7203956, 0.2548546, 0.1130108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fex1091[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VH_tagOnly_Aplanarity_fey1091[50] = { 39238.94, 19184.79, 4195.916, 2261.214, 850.7704, 571.2256, 525.9395, 95.30315, 298.7353, 41.55818, 48.41185, 250.4376, 39.63784, 7.897632, 18.65498, 0.8225752, 8.584051,
   0.5140128, 0.2833736, 0.3361874, 0.1288111, 0.0800038, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VH_tagOnly_Aplanarity_fx1091,Graph_from_VH_tagOnly_Aplanarity_fy1091,Graph_from_VH_tagOnly_Aplanarity_fex1091,Graph_from_VH_tagOnly_Aplanarity_fey1091);
   gre->SetName("Graph_from_VH_tagOnly_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_Aplanarity1091 = new TH1F("Graph_Graph_from_VH_tagOnly_Aplanarity1091","",100,0,1.1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMinimum(0);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetMaximum(2495653);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_Aplanarity1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_Aplanarity1091);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Aplanarity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VH_tagOnly_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_Aplanarity","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

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
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_tagOnly_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__92 = new TH1D("data_mc_ratio__92","",50,0,1);
   data_mc_ratio__92->SetBinContent(1,1.288658);
   data_mc_ratio__92->SetBinContent(2,1.262399);
   data_mc_ratio__92->SetBinContent(3,1.297251);
   data_mc_ratio__92->SetBinContent(4,1.264994);
   data_mc_ratio__92->SetBinContent(5,1.630634);
   data_mc_ratio__92->SetBinContent(6,1.537543);
   data_mc_ratio__92->SetBinContent(7,1.170168);
   data_mc_ratio__92->SetBinContent(8,1.880042);
   data_mc_ratio__92->SetBinContent(9,1.099844);
   data_mc_ratio__92->SetBinContent(10,2.541172);
   data_mc_ratio__92->SetBinContent(11,1.544414);
   data_mc_ratio__92->SetBinContent(12,0.6018467);
   data_mc_ratio__92->SetBinContent(13,1.333635);
   data_mc_ratio__92->SetBinContent(14,3.122914);
   data_mc_ratio__92->SetBinContent(15,1.418482);
   data_mc_ratio__92->SetBinContent(16,3.786863);
   data_mc_ratio__92->SetBinContent(17,1.274812);
   data_mc_ratio__92->SetBinContent(18,3.85608);
   data_mc_ratio__92->SetBinContent(19,6.250841);
   data_mc_ratio__92->SetBinContent(20,11.10501);
   data_mc_ratio__92->SetBinError(1,0.0007602589);
   data_mc_ratio__92->SetBinError(2,0.001994999);
   data_mc_ratio__92->SetBinError(3,0.004073246);
   data_mc_ratio__92->SetBinError(4,0.006928901);
   data_mc_ratio__92->SetBinError(5,0.01436807);
   data_mc_ratio__92->SetBinError(6,0.01957899);
   data_mc_ratio__92->SetBinError(7,0.0204695);
   data_mc_ratio__92->SetBinError(8,0.04441181);
   data_mc_ratio__92->SetBinError(9,0.03342079);
   data_mc_ratio__92->SetBinError(10,0.09884015);
   data_mc_ratio__92->SetBinError(11,0.07790538);
   data_mc_ratio__92->SetBinError(12,0.03746934);
   data_mc_ratio__92->SetBinError(13,0.09968053);
   data_mc_ratio__92->SetBinError(14,0.3204042);
   data_mc_ratio__92->SetBinError(15,0.1648952);
   data_mc_ratio__92->SetBinError(16,0.7156498);
   data_mc_ratio__92->SetBinError(17,0.2781868);
   data_mc_ratio__92->SetBinError(18,1.162652);
   data_mc_ratio__92->SetBinError(19,2.083614);
   data_mc_ratio__92->SetBinError(20,3.926214);
   data_mc_ratio__92->SetMinimum(0.4);
   data_mc_ratio__92->SetMaximum(1.6);
   data_mc_ratio__92->SetEntries(45.73525);
   data_mc_ratio__92->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__92->SetLineColor(ci);
   data_mc_ratio__92->SetLineWidth(2);
   data_mc_ratio__92->SetMarkerStyle(20);
   data_mc_ratio__92->SetMarkerSize(1.2);
   data_mc_ratio__92->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__92->GetXaxis()->SetRange(1,50);
   data_mc_ratio__92->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__92->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__92->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__92->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__92->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__92->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__92->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__92->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__92->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__92->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1092[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1092[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1092[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1092[50] = { 0.01759959, 0.06048471, 0.05366415, 0.0858187, 0.1077092, 0.1424167, 0.1883224, 0.09998544, 0.3033814, 0.1597678, 0.1902492, 0.5842055, 0.2953207, 0.2596171, 0.3575913, 0.1112493, 0.5210977,
   0.1801886, 0.1968137, 0.4666705, 0.5054297, 0.7079305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1092,Graph_from_mc_statistical_error_fy1092,Graph_from_mc_statistical_error_fex1092,Graph_from_mc_statistical_error_fey1092);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1092 = new TH1F("Graph_Graph_from_mc_statistical_error1092","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1092->SetMinimum(0.1504834);
   Graph_Graph_from_mc_statistical_error1092->SetMaximum(1.849517);
   Graph_Graph_from_mc_statistical_error1092->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1092->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1092->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1092);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->Modified();
   Aplanarity_tagOnly_16->cd();
   Aplanarity_tagOnly_16->SetSelected(Aplanarity_tagOnly_16);
}
