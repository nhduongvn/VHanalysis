#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_DHZfirst_16/Sphericity_DHZfirst_16
//=========  (Thu May 23 12:59:57 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_DHZfirst_16 = new TCanvas("Sphericity_DHZfirst_16", "Sphericity_DHZfirst_16",0,0,600,600);
   Sphericity_DHZfirst_16->SetHighLightColor(2);
   Sphericity_DHZfirst_16->Range(0,0,1,1);
   Sphericity_DHZfirst_16->SetFillColor(0);
   Sphericity_DHZfirst_16->SetFillStyle(4000);
   Sphericity_DHZfirst_16->SetBorderMode(0);
   Sphericity_DHZfirst_16->SetBorderSize(2);
   Sphericity_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_DHZfirst_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-353.2146,1.052419,352871.3);
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
   st->SetMaximum(317548.9);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",25,0,1);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(317548.9);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,25);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/0.04");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_DHZfirst_Sphericity_stack_1 = new TH1D("VH_DHZfirst_Sphericity_stack_1","",25,0,1);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(1,108803.6);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(2,96077.34);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(3,51727.75);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(4,30864.05);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(5,12667.99);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(6,5192.875);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(7,1443.086);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(8,240.3094);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(9,278.6359);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(10,332.8927);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(11,32.9959);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(12,6.298517);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(13,6.578973);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(14,18.39914);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(16,2.328363);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(17,1.002264);
   VH_DHZfirst_Sphericity_stack_1->SetBinContent(18,20.07859);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(1,5597.399);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(2,4995.016);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(3,3329.003);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(4,3257.868);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(5,1308.236);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(6,1250.691);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(7,440.1078);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(8,61.56557);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(9,221.3929);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(10,288.3116);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(11,23.43461);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(12,4.566537);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(13,6.578973);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(14,15.96637);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(16,2.328363);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(17,1.002264);
   VH_DHZfirst_Sphericity_stack_1->SetBinError(18,20.07859);
   VH_DHZfirst_Sphericity_stack_1->SetEntries(16195);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_1->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_1,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_2 = new TH1D("VH_DHZfirst_Sphericity_stack_2","",25,0,1);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(1,744.8205);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(2,689.28);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(3,402.1879);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(4,212.4271);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(5,117.5007);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(6,51.0209);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(7,14.84398);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(8,8.230731);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(9,3.107501);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(10,1.529642);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(11,1.18582);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(12,0.6335742);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(13,0.4778046);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(14,0.4913835);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(15,0.08899988);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(16,0.4473187);
   VH_DHZfirst_Sphericity_stack_2->SetBinContent(17,0.2951208);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(1,9.670954);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(2,9.125014);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(3,7.126266);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(4,5.325398);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(5,4.171429);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(6,2.819345);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(7,1.406309);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(8,1.150637);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(9,0.613273);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(10,0.4291945);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(11,0.403736);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(12,0.2975175);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(13,0.240915);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(14,0.2408594);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(15,0.05327516);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(16,0.2869207);
   VH_DHZfirst_Sphericity_stack_2->SetBinError(17,0.2156191);
   VH_DHZfirst_Sphericity_stack_2->SetEntries(39210);

   ci = TColor::GetColor("#660066");
   VH_DHZfirst_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_2->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_2,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_3 = new TH1D("VH_DHZfirst_Sphericity_stack_3","",25,0,1);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(1,6815.681);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(2,7076.325);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(3,3846.523);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(4,2089.506);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(5,1089.865);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(6,527.9946);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(7,245.3371);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(8,120.7828);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(9,62.95413);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(10,36.03327);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(11,20.70784);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(12,13.02857);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(13,8.739189);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(14,5.078515);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(15,3.498084);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(16,2.750101);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(17,1.686609);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(18,1.088891);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(19,0.6525055);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(20,0.1339443);
   VH_DHZfirst_Sphericity_stack_3->SetBinContent(21,0.03039179);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(1,20.21545);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(2,20.56375);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(3,15.19987);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(4,11.25027);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(5,8.135091);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(6,5.604518);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(7,3.754662);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(8,2.570099);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(9,1.818436);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(10,1.363527);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(11,1.027422);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(12,0.7980013);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(13,0.6506006);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(14,0.4907894);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(15,0.4039316);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(16,0.3764195);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(17,0.2822255);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(18,0.2332455);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(19,0.1713397);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(20,0.08074467);
   VH_DHZfirst_Sphericity_stack_3->SetBinError(21,0.03039179);
   VH_DHZfirst_Sphericity_stack_3->SetEntries(408287);

   ci = TColor::GetColor("#cc00cc");
   VH_DHZfirst_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_3->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_3,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_4 = new TH1D("VH_DHZfirst_Sphericity_stack_4","",25,0,1);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(1,697.2141);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(2,592.1898);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(3,342.5571);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(4,197.808);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(5,100.3164);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(6,49.05756);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(7,14.0361);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(8,2.617229);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(9,1.429405);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(10,0.265902);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(11,0.1104909);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(12,0.06789502);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(13,0.207778);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(14,0.4108835);
   VH_DHZfirst_Sphericity_stack_4->SetBinContent(15,0.03740041);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(1,19.86842);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(2,18.90725);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(3,14.21946);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(4,9.680031);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(5,5.732567);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(6,4.749151);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(7,2.209955);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(8,0.6819111);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(9,0.4530526);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(10,0.137511);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(11,0.07844191);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(12,0.06789502);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(13,0.09379237);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(14,0.2856213);
   VH_DHZfirst_Sphericity_stack_4->SetBinError(15,0.03740041);
   VH_DHZfirst_Sphericity_stack_4->SetEntries(15554);

   ci = TColor::GetColor("#00cccc");
   VH_DHZfirst_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_4->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_4,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_5 = new TH1D("VH_DHZfirst_Sphericity_stack_5","",25,0,1);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(1,399.9845);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(2,378.8293);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(3,181.3864);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(4,114.3275);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(5,53.1867);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(6,26.13059);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(7,7.454525);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(8,2.929384);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(9,1.509787);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(10,0.2172731);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(11,0.8676831);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(13,0.2789971);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(14,0.03170269);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(16,0.0002950033);
   VH_DHZfirst_Sphericity_stack_5->SetBinContent(17,0.1352765);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(1,22.61552);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(2,24.84495);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(3,15.97645);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(4,11.27755);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(5,6.834737);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(6,3.378081);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(7,1.897468);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(8,1.46511);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(9,1.224522);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(10,0.1408445);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(11,0.8566116);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(13,0.2789971);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(14,0.03170269);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(16,0.0002950033);
   VH_DHZfirst_Sphericity_stack_5->SetBinError(17,0.1352765);
   VH_DHZfirst_Sphericity_stack_5->SetEntries(9167);

   ci = TColor::GetColor("#ff99cc");
   VH_DHZfirst_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_5->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_5,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_6 = new TH1D("VH_DHZfirst_Sphericity_stack_6","",25,0,1);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(1,2.163076);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(2,2.684348);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(3,1.099575);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(4,0.4552001);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(5,0.4862962);
   VH_DHZfirst_Sphericity_stack_6->SetBinContent(6,0.3360981);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(1,0.506358);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(2,0.5453574);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(3,0.3441643);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(4,0.2051763);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(5,0.2440647);
   VH_DHZfirst_Sphericity_stack_6->SetBinError(6,0.2026493);
   VH_DHZfirst_Sphericity_stack_6->SetEntries(67);

   ci = TColor::GetColor("#9933ff");
   VH_DHZfirst_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_6->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_6,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_7 = new TH1D("VH_DHZfirst_Sphericity_stack_7","",25,0,1);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(1,15.73812);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(2,10.99214);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(3,7.245091);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(4,4.046132);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(5,2.620221);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(6,1.589063);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(7,0.2032813);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(8,0.03842012);
   VH_DHZfirst_Sphericity_stack_7->SetBinContent(13,0.07623354);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(1,1.226511);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(2,1.007895);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(3,0.8159006);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(4,0.6208211);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(5,0.5023127);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(6,0.3901027);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(7,0.1439145);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(8,0.03842012);
   VH_DHZfirst_Sphericity_stack_7->SetBinError(13,0.07623354);
   VH_DHZfirst_Sphericity_stack_7->SetEntries(469);

   ci = TColor::GetColor("#3399ff");
   VH_DHZfirst_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_7->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_7,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_8 = new TH1D("VH_DHZfirst_Sphericity_stack_8","",25,0,1);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(1,10.77225);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(2,9.741009);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(3,4.575945);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(4,2.756035);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(5,1.823944);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(6,0.3424811);
   VH_DHZfirst_Sphericity_stack_8->SetBinContent(7,0.1744355);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(1,1.487239);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(2,1.410473);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(3,0.9685459);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(4,0.7457341);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(5,0.6130596);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(6,0.2475464);
   VH_DHZfirst_Sphericity_stack_8->SetBinError(7,0.1744355);
   VH_DHZfirst_Sphericity_stack_8->SetEntries(155);

   ci = TColor::GetColor("#33ff99");
   VH_DHZfirst_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_8->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_8,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_9 = new TH1D("VH_DHZfirst_Sphericity_stack_9","",25,0,1);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(1,3.96107);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(2,3.769306);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(3,2.183588);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(4,1.514377);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(5,0.9755685);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(6,0.4909306);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(7,0.1136152);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(8,0.0221187);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(9,0.007305244);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(11,0.001065724);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(12,0.001010367);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(14,0.001358495);
   VH_DHZfirst_Sphericity_stack_9->SetBinContent(15,0.0009370424);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(1,0.06629926);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(2,0.06400717);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(3,0.04896905);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(4,0.04083742);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(5,0.03309683);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(6,0.02354082);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(7,0.01131112);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(8,0.00508124);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(9,0.003061588);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(11,0.001065724);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(12,0.001010367);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(14,0.001358495);
   VH_DHZfirst_Sphericity_stack_9->SetBinError(15,0.0009370424);
   VH_DHZfirst_Sphericity_stack_9->SetEntries(12341);

   ci = TColor::GetColor("#cccc00");
   VH_DHZfirst_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_9->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_9,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_10 = new TH1D("VH_DHZfirst_Sphericity_stack_10","",25,0,1);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(1,1.719405);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(2,1.617085);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(3,0.9280332);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(4,0.5895221);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(5,0.3288081);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(6,0.1620772);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(7,0.0463447);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(8,0.01527734);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(9,0.004690978);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(10,0.002396985);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(11,0.0005904913);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(12,0.0007373012);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(13,0.0009858196);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(14,0.0003932568);
   VH_DHZfirst_Sphericity_stack_10->SetBinContent(16,0.0001564318);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(1,0.0235874);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(2,0.02266392);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(3,0.01725957);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(4,0.01381816);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(5,0.01025132);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(6,0.007249561);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(7,0.003850394);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(8,0.002164246);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(9,0.001250267);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(10,0.0008864009);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(11,0.000401201);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(12,0.0004284842);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(13,0.0004958406);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(14,0.0003932568);
   VH_DHZfirst_Sphericity_stack_10->SetBinError(16,0.0001564318);
   VH_DHZfirst_Sphericity_stack_10->SetEntries(17705);

   ci = TColor::GetColor("#0000cc");
   VH_DHZfirst_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_10->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_10,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_11 = new TH1D("VH_DHZfirst_Sphericity_stack_11","",25,0,1);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(1,0.1379087);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(2,0.1074763);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(3,0.05756606);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(4,0.05192394);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(5,0.0401269);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(6,0.02469009);
   VH_DHZfirst_Sphericity_stack_11->SetBinContent(7,0.003333098);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(1,0.01673255);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(2,0.01460157);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(3,0.01053471);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(4,0.009891163);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(5,0.00908396);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(6,0.007228884);
   VH_DHZfirst_Sphericity_stack_11->SetBinError(7,0.002385918);
   VH_DHZfirst_Sphericity_stack_11->SetEntries(220);

   ci = TColor::GetColor("#cc0000");
   VH_DHZfirst_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_11->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_11,"");
   
   TH1D *VH_DHZfirst_Sphericity_stack_12 = new TH1D("VH_DHZfirst_Sphericity_stack_12","",25,0,1);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(1,0.05168979);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(2,0.05567354);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(3,0.02262133);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(4,0.01588136);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(5,0.007292335);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(6,0.005929638);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(7,0.00129905);
   VH_DHZfirst_Sphericity_stack_12->SetBinContent(8,0.0005961694);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(1,0.003813177);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(2,0.003917715);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(3,0.002529142);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(4,0.002107786);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(5,0.001441016);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(6,0.001302197);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(7,0.0005832756);
   VH_DHZfirst_Sphericity_stack_12->SetBinError(8,0.0004245717);
   VH_DHZfirst_Sphericity_stack_12->SetEntries(593);

   ci = TColor::GetColor("#00cc00");
   VH_DHZfirst_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity_stack_12->SetLineColor(ci);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Sphericity__229 = new TH1D("VH_DHZfirst_Sphericity__229","",25,0,1);
   VH_DHZfirst_Sphericity__229->SetBinContent(1,142897);
   VH_DHZfirst_Sphericity__229->SetBinContent(2,132155);
   VH_DHZfirst_Sphericity__229->SetBinContent(3,70430);
   VH_DHZfirst_Sphericity__229->SetBinContent(4,37754);
   VH_DHZfirst_Sphericity__229->SetBinContent(5,19059);
   VH_DHZfirst_Sphericity__229->SetBinContent(6,7877);
   VH_DHZfirst_Sphericity__229->SetBinContent(7,2572);
   VH_DHZfirst_Sphericity__229->SetBinContent(8,798);
   VH_DHZfirst_Sphericity__229->SetBinContent(9,349);
   VH_DHZfirst_Sphericity__229->SetBinContent(10,158);
   VH_DHZfirst_Sphericity__229->SetBinContent(11,91);
   VH_DHZfirst_Sphericity__229->SetBinContent(12,51);
   VH_DHZfirst_Sphericity__229->SetBinContent(13,52);
   VH_DHZfirst_Sphericity__229->SetBinContent(14,18);
   VH_DHZfirst_Sphericity__229->SetBinContent(15,26);
   VH_DHZfirst_Sphericity__229->SetBinContent(16,12);
   VH_DHZfirst_Sphericity__229->SetBinContent(17,5);
   VH_DHZfirst_Sphericity__229->SetBinContent(18,5);
   VH_DHZfirst_Sphericity__229->SetBinContent(19,1);
   VH_DHZfirst_Sphericity__229->SetBinContent(20,3);
   VH_DHZfirst_Sphericity__229->SetBinContent(21,1);
   VH_DHZfirst_Sphericity__229->SetBinError(1,378.0172);
   VH_DHZfirst_Sphericity__229->SetBinError(2,363.5313);
   VH_DHZfirst_Sphericity__229->SetBinError(3,265.3865);
   VH_DHZfirst_Sphericity__229->SetBinError(4,194.3039);
   VH_DHZfirst_Sphericity__229->SetBinError(5,138.0543);
   VH_DHZfirst_Sphericity__229->SetBinError(6,88.75246);
   VH_DHZfirst_Sphericity__229->SetBinError(7,50.71489);
   VH_DHZfirst_Sphericity__229->SetBinError(8,28.24889);
   VH_DHZfirst_Sphericity__229->SetBinError(9,18.68154);
   VH_DHZfirst_Sphericity__229->SetBinError(10,12.56981);
   VH_DHZfirst_Sphericity__229->SetBinError(11,9.539392);
   VH_DHZfirst_Sphericity__229->SetBinError(12,7.141428);
   VH_DHZfirst_Sphericity__229->SetBinError(13,7.211103);
   VH_DHZfirst_Sphericity__229->SetBinError(14,4.242641);
   VH_DHZfirst_Sphericity__229->SetBinError(15,5.09902);
   VH_DHZfirst_Sphericity__229->SetBinError(16,3.464102);
   VH_DHZfirst_Sphericity__229->SetBinError(17,2.236068);
   VH_DHZfirst_Sphericity__229->SetBinError(18,2.236068);
   VH_DHZfirst_Sphericity__229->SetBinError(19,1);
   VH_DHZfirst_Sphericity__229->SetBinError(20,1.732051);
   VH_DHZfirst_Sphericity__229->SetBinError(21,1);
   VH_DHZfirst_Sphericity__229->SetEntries(414338);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__229->SetLineColor(ci);
   VH_DHZfirst_Sphericity__229->SetLineWidth(2);
   VH_DHZfirst_Sphericity__229->SetMarkerStyle(20);
   VH_DHZfirst_Sphericity__229->SetMarkerSize(1.2);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetRange(1,100);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__229->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__229->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_Sphericity_fx1229[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fy1229[25] = { 117495.9, 104842.9, 56516.52, 33487.55, 14035.14, 5850.03, 1725.3, 374.9459, 347.6487, 370.9411, 55.86939, 20.03031, 16.35996, 24.41338, 3.625422, 5.526234, 3.119271,
   21.16749, 0.6525055, 0.1339443, 0.03039179, 0, 0, 0, 0 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fex1229[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_VH_DHZfirst_Sphericity_fey1229[25] = { 5597.525, 4995.164, 3329.114, 3257.926, 1308.299, 1250.72, 440.1357, 61.65113, 221.4051, 288.3152, 23.47636, 4.645772, 6.622436, 15.97831, 0.4091438, 2.375981, 1.071903,
   20.07995, 0.1713397, 0.08074467, 0.03039179, 0, 0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VH_DHZfirst_Sphericity_fx1229,Graph_from_VH_DHZfirst_Sphericity_fy1229,Graph_from_VH_DHZfirst_Sphericity_fex1229,Graph_from_VH_DHZfirst_Sphericity_fey1229);
   gre->SetName("Graph_from_VH_DHZfirst_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_Sphericity1229 = new TH1F("Graph_Graph_from_VH_DHZfirst_Sphericity1229","",100,0,1.1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMinimum(0);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetMaximum(135402.7);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_Sphericity1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_Sphericity1229);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Sphericity","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHcc","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ggZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZHbb","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","ZZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WZ","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","WW","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","W + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Z + jets","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","t#bar{t}","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","Single top","F");

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
   entry=leg->AddEntry("VH_DHZfirst_Sphericity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_DHZfirst_16->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",25,0,1);
   data_mc_ratio__230->SetBinContent(1,1.216187);
   data_mc_ratio__230->SetBinContent(2,1.260505);
   data_mc_ratio__230->SetBinContent(3,1.246184);
   data_mc_ratio__230->SetBinContent(4,1.127404);
   data_mc_ratio__230->SetBinContent(5,1.357949);
   data_mc_ratio__230->SetBinContent(6,1.346489);
   data_mc_ratio__230->SetBinContent(7,1.490755);
   data_mc_ratio__230->SetBinContent(8,2.128307);
   data_mc_ratio__230->SetBinContent(9,1.003887);
   data_mc_ratio__230->SetBinContent(10,0.4259436);
   data_mc_ratio__230->SetBinContent(11,1.628799);
   data_mc_ratio__230->SetBinContent(12,2.546142);
   data_mc_ratio__230->SetBinContent(13,3.178492);
   data_mc_ratio__230->SetBinContent(14,0.7373007);
   data_mc_ratio__230->SetBinContent(15,7.171579);
   data_mc_ratio__230->SetBinContent(16,2.171461);
   data_mc_ratio__230->SetBinContent(17,1.602939);
   data_mc_ratio__230->SetBinContent(18,0.2362113);
   data_mc_ratio__230->SetBinContent(19,1.532554);
   data_mc_ratio__230->SetBinContent(20,22.39737);
   data_mc_ratio__230->SetBinContent(21,32.90362);
   data_mc_ratio__230->SetBinError(1,0.003217281);
   data_mc_ratio__230->SetBinError(2,0.003467389);
   data_mc_ratio__230->SetBinError(3,0.004695733);
   data_mc_ratio__230->SetBinError(4,0.005802272);
   data_mc_ratio__230->SetBinError(5,0.009836335);
   data_mc_ratio__230->SetBinError(6,0.01517128);
   data_mc_ratio__230->SetBinError(7,0.02939482);
   data_mc_ratio__230->SetBinError(8,0.07534125);
   data_mc_ratio__230->SetBinError(9,0.05373683);
   data_mc_ratio__230->SetBinError(10,0.03388625);
   data_mc_ratio__230->SetBinError(11,0.1707445);
   data_mc_ratio__230->SetBinError(12,0.3565312);
   data_mc_ratio__230->SetBinError(13,0.4407775);
   data_mc_ratio__230->SetBinError(14,0.1737834);
   data_mc_ratio__230->SetBinError(15,1.406462);
   data_mc_ratio__230->SetBinError(16,0.6268467);
   data_mc_ratio__230->SetBinError(17,0.716856);
   data_mc_ratio__230->SetBinError(18,0.1056369);
   data_mc_ratio__230->SetBinError(19,1.532554);
   data_mc_ratio__230->SetBinError(20,12.93113);
   data_mc_ratio__230->SetBinError(21,32.90362);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(3.11527);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__230->GetXaxis()->SetRange(1,25);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[25] = { 0.02, 0.06, 0.1, 0.14, 0.18, 0.22, 0.26, 0.3, 0.34, 0.38, 0.42, 0.46, 0.5, 0.54, 0.58, 0.62, 0.66,
   0.7, 0.74, 0.78, 0.82, 0.86, 0.9, 0.94, 0.98 };
   Double_t Graph_from_mc_statistical_error_fy1230[25] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1230[25] = { 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02,
   0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 };
   Double_t Graph_from_mc_statistical_error_fey1230[25] = { 0.04764018, 0.04764426, 0.05890516, 0.09728768, 0.09321593, 0.2137973, 0.2551068, 0.1644267, 0.6368643, 0.7772533, 0.4202007, 0.2319371, 0.4047953, 0.6544899, 0.1128541, 0.4299458, 0.343639,
   0.9486223, 0.2625874, 0.6028227, 1, 0, 0, 0, 0 };
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->Modified();
   Sphericity_DHZfirst_16->cd();
   Sphericity_DHZfirst_16->SetSelected(Sphericity_DHZfirst_16);
}
