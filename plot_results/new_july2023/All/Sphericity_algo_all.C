void Sphericity_algo_all()
{
//=========Macro generated from canvas: Sphericity_algo_all/Sphericity_algo_all
//=========  (Mon Jul 24 10:11:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_all = new TCanvas("Sphericity_algo_all", "Sphericity_algo_all",0,0,600,600);
   Sphericity_algo_all->SetHighLightColor(2);
   Sphericity_algo_all->Range(0,0,1,1);
   Sphericity_algo_all->SetFillColor(0);
   Sphericity_algo_all->SetFillStyle(4000);
   Sphericity_algo_all->SetBorderMode(0);
   Sphericity_algo_all->SetBorderSize(2);
   Sphericity_algo_all->SetFrameFillStyle(1000);
   Sphericity_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-794.8766,1.052419,794381.7);
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
   st->SetMinimum(0.3);
   st->SetMaximum(680822.9);
   
   TH1F *st_stack_156 = new TH1F("st_stack_156","",25,0,1);
   st_stack_156->SetMinimum(0.3);
   st_stack_156->SetMaximum(714864);
   st_stack_156->SetDirectory(0);
   st_stack_156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_156->SetLineColor(ci);
   st_stack_156->GetXaxis()->SetRange(1,25);
   st_stack_156->GetXaxis()->SetLabelFont(42);
   st_stack_156->GetXaxis()->SetLabelSize(0.035);
   st_stack_156->GetXaxis()->SetTitleSize(0.035);
   st_stack_156->GetXaxis()->SetTitleFont(42);
   st_stack_156->GetYaxis()->SetTitle("Events/0.04");
   st_stack_156->GetYaxis()->SetLabelFont(42);
   st_stack_156->GetYaxis()->SetLabelSize(0.05);
   st_stack_156->GetYaxis()->SetTitleSize(0.057);
   st_stack_156->GetYaxis()->SetTitleOffset(1.2);
   st_stack_156->GetYaxis()->SetTitleFont(42);
   st_stack_156->GetZaxis()->SetLabelFont(42);
   st_stack_156->GetZaxis()->SetLabelSize(0.035);
   st_stack_156->GetZaxis()->SetTitleSize(0.035);
   st_stack_156->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_156);
   
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_1 = new TH1D("VbbHcc_algo_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(1,281213.5);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(2,265783);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(3,129698.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(4,70141.37);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(5,40163.07);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(6,12870.7);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(7,4902.198);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(8,563.5218);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(9,437.3592);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(10,365.2333);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(11,111.7777);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(12,46.65679);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(13,29.27126);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(14,39.75672);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinContent(17,3.971349);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(1,9385.193);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(2,24100.02);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(3,6054.162);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(4,4337.564);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(5,3771.942);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(6,1933.235);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(7,1597.728);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(8,93.50735);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(9,320.2201);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(10,296.1456);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(11,42.22352);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(12,30.19932);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(13,14.90867);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(14,31.85859);
   VbbHcc_algo_Sphericity_all_stack_1->SetBinError(17,2.359342);
   VbbHcc_algo_Sphericity_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_2 = new TH1D("VbbHcc_algo_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(1,1849.251);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(2,1714.542);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(3,1005.069);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(4,540.291);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(5,262.1497);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(6,120.2908);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(7,40.49371);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(8,19.15787);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(9,6.140157);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(10,3.321757);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(11,1.923452);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(12,2.020351);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(13,1.288879);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(14,1.387361);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(15,0.2172497);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(16,0.7883148);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(17,0.1639674);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(18,0.409478);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinContent(19,0.008613847);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(1,18.01397);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(2,16.92783);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(3,13.36365);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(4,11.04156);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(5,7.080174);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(6,4.98439);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(7,2.915018);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(8,2.029502);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(9,1.02349);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(10,0.807375);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(11,0.6199241);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(12,0.6831913);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(13,0.5412245);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(14,0.5409104);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(15,0.1097052);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(16,0.3853619);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(17,0.0953799);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(18,0.3172742);
   VbbHcc_algo_Sphericity_all_stack_2->SetBinError(19,0.03521532);
   VbbHcc_algo_Sphericity_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_3 = new TH1D("VbbHcc_algo_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(1,20266.42);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(2,20460.65);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(3,11356.01);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(4,6111.377);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(5,3184.643);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(6,1522.751);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(7,677.5252);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(8,324.105);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(9,157.9649);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(10,90.87805);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(11,54.6016);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(12,35.09872);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(13,21.92108);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(14,12.8598);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(15,10.7721);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(16,5.666779);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(17,4.134631);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(18,2.666854);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(19,1.537232);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(20,0.5657184);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(21,0.3336247);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(22,0.03753087);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinContent(23,0.06468811);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(1,38.17141);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(2,38.32774);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(3,28.69747);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(4,21.06168);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(5,15.0524);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(6,10.38821);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(7,6.866508);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(8,5.024243);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(9,3.142951);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(10,2.354247);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(11,1.812104);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(12,1.435489);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(13,1.138529);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(14,0.8563495);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(15,1.125265);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(16,0.5817296);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(17,0.4805686);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(18,0.3898676);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(19,0.2913663);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(20,0.2079757);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(21,0.1475856);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(22,0.03753087);
   VbbHcc_algo_Sphericity_all_stack_3->SetBinError(23,0.04687699);
   VbbHcc_algo_Sphericity_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_4 = new TH1D("VbbHcc_algo_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(1,1940.681);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(2,1721.647);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(3,999.6719);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(4,583.1337);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(5,309.965);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(6,132.0618);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(7,36.55067);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(8,8.470081);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(9,2.710051);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(10,1.516857);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(11,0.5995057);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(12,0.6134987);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(13,0.1065415);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(14,0.7437431);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(15,0.1486632);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(17,0.0748464);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(18,0.01344924);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinContent(19,0.07066921);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(1,36.86327);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(2,38.39919);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(3,27.21394);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(4,21.29658);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(5,14.32182);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(6,7.512216);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(7,3.988437);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(8,1.387124);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(9,0.7107225);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(10,0.7367319);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(11,0.2884447);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(12,0.2583895);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(13,0.07538787);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(14,0.4454235);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(15,0.1126705);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(17,0.05575907);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(18,0.01344924);
   VbbHcc_algo_Sphericity_all_stack_4->SetBinError(19,0.07066921);
   VbbHcc_algo_Sphericity_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_5 = new TH1D("VbbHcc_algo_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(1,1034.177);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(2,935.5695);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(3,480.0646);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(4,300.0221);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(5,151.9944);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(6,69.89856);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(7,25.89711);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(8,9.455678);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(9,1.772882);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(10,1.485326);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(11,0.3249123);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(12,0.3008144);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(13,0.4209455);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(14,0.1421163);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(15,0.04360035);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(16,6.5226e-05);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinContent(17,0.4613199);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(1,41.84185);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(2,41.36719);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(3,27.43971);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(4,23.89259);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(5,18.33448);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(6,8.302715);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(7,7.939484);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(8,3.988464);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(9,1.114106);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(10,1.093113);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(11,0.316734);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(12,0.2140766);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(13,0.3956515);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(14,0.1143289);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(15,0.04360035);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(16,6.5226e-05);
   VbbHcc_algo_Sphericity_all_stack_5->SetBinError(17,0.4303029);
   VbbHcc_algo_Sphericity_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_6 = new TH1D("VbbHcc_algo_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(1,6.347959);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(2,2.61287);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(3,1.935771);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(4,0.4136548);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(5,0.6328066);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(6,0.1907278);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinContent(7,0.09122876);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(1,1.1856);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(2,0.6063534);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(3,0.6323451);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(4,0.1865835);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(5,0.2708925);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(6,0.1353248);
   VbbHcc_algo_Sphericity_all_stack_6->SetBinError(7,0.09122876);
   VbbHcc_algo_Sphericity_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_7 = new TH1D("VbbHcc_algo_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(1,15.41776);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(2,9.585667);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(3,6.658073);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(4,2.847546);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(5,2.10011);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(6,1.108453);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(7,0.06696388);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(8,0.1717439);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinContent(13,0.06245006);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(1,1.412448);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(2,0.8963004);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(3,0.8383549);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(4,0.4414952);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(5,0.4115685);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(6,0.2783788);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(7,0.06696388);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(8,0.1087257);
   VbbHcc_algo_Sphericity_all_stack_7->SetBinError(13,0.06245006);
   VbbHcc_algo_Sphericity_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_8 = new TH1D("VbbHcc_algo_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(1,24.48124);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(2,19.71319);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(3,10.14475);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(4,6.88263);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(5,7.056804);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(6,1.573888);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(7,0.4536892);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinContent(8,0.2026665);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(1,2.303734);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(2,2.033115);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(3,1.450845);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(4,1.222241);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(5,1.261326);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(6,0.5659736);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(7,0.3208257);
   VbbHcc_algo_Sphericity_all_stack_8->SetBinError(8,0.2026665);
   VbbHcc_algo_Sphericity_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_9 = new TH1D("VbbHcc_algo_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(1,11.988);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(2,11.00719);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(3,6.196724);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(4,4.243139);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(5,2.695888);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(6,1.283569);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(7,0.3180925);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(8,0.0471754);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(9,0.02088195);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(10,0.006621484);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(11,0.01040538);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(12,0.003836865);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(14,0.001447078);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(15,0.001478464);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(17,0.0007648387);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinContent(20,0.003348055);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(1,0.1691749);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(2,0.1530822);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(3,0.1131543);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(4,0.09389865);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(5,0.0751759);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(6,0.05170799);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(7,0.02519967);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(8,0.009475921);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(9,0.00697751);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(10,0.004682214);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(11,0.004801195);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(12,0.002799916);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(14,0.001447078);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(15,0.001478464);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(17,0.0007648387);
   VbbHcc_algo_Sphericity_all_stack_9->SetBinError(20,0.003348055);
   VbbHcc_algo_Sphericity_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_10 = new TH1D("VbbHcc_algo_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(1,7.282408);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(2,7.053075);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(3,4.048357);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(4,2.454226);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(5,1.398891);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(6,0.6708672);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(7,0.2085652);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(8,0.06208152);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(9,0.01460192);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(10,0.008657852);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(11,0.004203518);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(12,0.004652381);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(13,0.004913992);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(14,0.001435988);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(16,0.001161416);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinContent(18,0.001232725);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(1,0.06096838);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(2,0.06006653);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(3,0.04563801);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(4,0.0355372);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(5,0.02676976);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(6,0.0185604);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(7,0.0103167);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(8,0.005539366);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(9,0.002748173);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(10,0.002071702);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(11,0.001436311);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(12,0.001377704);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(13,0.001460605);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(14,0.0008493601);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(16,0.0006869557);
   VbbHcc_algo_Sphericity_all_stack_10->SetBinError(18,0.0007291337);
   VbbHcc_algo_Sphericity_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_11 = new TH1D("VbbHcc_algo_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(1,0.5777721);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(2,0.4336128);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(3,0.2251312);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(4,0.2115011);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(5,0.1496397);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(6,0.07396857);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(7,0.005448583);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinContent(9,0.004047012);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(1,0.03818438);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(2,0.03442143);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(3,0.02428953);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(4,0.02354094);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(5,0.0199828);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(6,0.01401943);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(7,0.003862295);
   VbbHcc_algo_Sphericity_all_stack_11->SetBinError(9,0.0028656);
   VbbHcc_algo_Sphericity_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_all_stack_12 = new TH1D("VbbHcc_algo_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(1,0.2052579);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(2,0.2095618);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(3,0.09280122);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(4,0.06430992);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(5,0.03785119);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(6,0.02282471);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(7,0.005866562);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(8,0.002520482);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(10,0.001224737);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(11,0.0002137836);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinContent(12,0.0003035629);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(1,0.008462243);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(2,0.008321388);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(3,0.00550295);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(4,0.004654956);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(5,0.003917114);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(6,0.002790035);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(7,0.001372559);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(8,0.0008749032);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(10,0.0006332626);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(11,0.0002137836);
   VbbHcc_algo_Sphericity_all_stack_12->SetBinError(12,0.0003035629);
   VbbHcc_algo_Sphericity_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity_all__311 = new TH1D("VbbHcc_algo_Sphericity_all__311","",25,0,1);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(1,151759);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(2,134907);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(3,76445);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(4,41636);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(5,21069);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(6,8912);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(7,3068);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(8,1027);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(9,442);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(10,215);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(11,133);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(12,82);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(13,49);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(14,32);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(15,27);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(16,17);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(17,12);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(18,12);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(19,2);
   VbbHcc_algo_Sphericity_all__311->SetBinContent(22,1);
   VbbHcc_algo_Sphericity_all__311->SetEntries(439871);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_all__311->SetLineColor(ci);
   VbbHcc_algo_Sphericity_all__311->SetLineWidth(2);
   VbbHcc_algo_Sphericity_all__311->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity_all__311->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_all__311->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_all__311->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_all__311->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fx1311[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fy1311[25] = {
   306370.3,
   290666,
   143568.8,
   77693.31,
   44085.89,
   14720.63,
   5683.815,
   925.1966,
   605.9867,
   462.4518,
   169.242,
   84.69896,
   53.07607,
   54.89263,
   11.18309,
   6.456321,
   8.806878,
   3.091014,
   1.616515,
   0.5690665,
   0.3336247,
   0.03753087,
   0.06468811,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fex1311[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_all_fey1311[25] = {
   9385.454,
   24100.13,
   6054.369,
   4337.748,
   3772.051,
   1933.302,
   1597.77,
   93.75964,
   320.2399,
   296.159,
   42.2691,
   30.24299,
   14.96742,
   31.87801,
   1.137037,
   0.697792,
   2.448429,
   0.502833,
   0.3018751,
   0.2080027,
   0.1475856,
   0.03753087,
   0.04687699,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_all_fx1311,Graph_from_VbbHcc_algo_Sphericity_all_fy1311,Graph_from_VbbHcc_algo_Sphericity_all_fex1311,Graph_from_VbbHcc_algo_Sphericity_all_fey1311);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity_all1311 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity_all1311","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetMaximum(347331.3);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity_all1311->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity_all1311);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__312 = new TH1D("data_mc_ratio__312","",25,0,1);
   data_mc_ratio__312->SetBinContent(1,0.495345);
   data_mc_ratio__312->SetBinContent(2,0.4641307);
   data_mc_ratio__312->SetBinContent(3,0.5324625);
   data_mc_ratio__312->SetBinContent(4,0.535902);
   data_mc_ratio__312->SetBinContent(5,0.477908);
   data_mc_ratio__312->SetBinContent(6,0.605409);
   data_mc_ratio__312->SetBinContent(7,0.5397783);
   data_mc_ratio__312->SetBinContent(8,1.110034);
   data_mc_ratio__312->SetBinContent(9,0.7293889);
   data_mc_ratio__312->SetBinContent(10,0.4649133);
   data_mc_ratio__312->SetBinContent(11,0.785857);
   data_mc_ratio__312->SetBinContent(12,0.9681347);
   data_mc_ratio__312->SetBinContent(13,0.9232033);
   data_mc_ratio__312->SetBinContent(14,0.5829563);
   data_mc_ratio__312->SetBinContent(15,2.414359);
   data_mc_ratio__312->SetBinContent(16,2.633079);
   data_mc_ratio__312->SetBinContent(17,1.362571);
   data_mc_ratio__312->SetBinContent(18,3.882221);
   data_mc_ratio__312->SetBinContent(19,1.23723);
   data_mc_ratio__312->SetBinContent(22,26.64474);
   data_mc_ratio__312->SetBinError(1,0.001271542);
   data_mc_ratio__312->SetBinError(2,0.001263639);
   data_mc_ratio__312->SetBinError(3,0.001925814);
   data_mc_ratio__312->SetBinError(4,0.00262634);
   data_mc_ratio__312->SetBinError(5,0.003292474);
   data_mc_ratio__312->SetBinError(6,0.006413001);
   data_mc_ratio__312->SetBinError(7,0.009745133);
   data_mc_ratio__312->SetBinError(8,0.03463787);
   data_mc_ratio__312->SetBinError(9,0.03469349);
   data_mc_ratio__312->SetBinError(10,0.03170683);
   data_mc_ratio__312->SetBinError(11,0.06814244);
   data_mc_ratio__312->SetBinError(12,0.1069126);
   data_mc_ratio__312->SetBinError(13,0.1318862);
   data_mc_ratio__312->SetBinError(14,0.1030531);
   data_mc_ratio__312->SetBinError(15,0.4646436);
   data_mc_ratio__312->SetBinError(16,0.6386154);
   data_mc_ratio__312->SetBinError(17,0.3933405);
   data_mc_ratio__312->SetBinError(18,1.120701);
   data_mc_ratio__312->SetBinError(19,0.8748535);
   data_mc_ratio__312->SetBinError(22,26.64474);
   data_mc_ratio__312->SetMinimum(0.4);
   data_mc_ratio__312->SetMaximum(1.6);
   data_mc_ratio__312->SetEntries(1.576987);
   data_mc_ratio__312->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__312->SetLineColor(ci);
   data_mc_ratio__312->SetLineWidth(2);
   data_mc_ratio__312->SetMarkerStyle(20);
   data_mc_ratio__312->SetMarkerSize(1.2);
   data_mc_ratio__312->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__312->GetXaxis()->SetRange(1,25);
   data_mc_ratio__312->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__312->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__312->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__312->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__312->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__312->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__312->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__312->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__312->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__312->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__312->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__312->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__312->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__312->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__312->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1312[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1312[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1312[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1312[25] = {
   0.03063435,
   0.08291347,
   0.0421705,
   0.05583168,
   0.08556141,
   0.1313329,
   0.2811087,
   0.1013402,
   0.5284602,
   0.6404105,
   0.2497554,
   0.3570645,
   0.2819994,
   0.5807339,
   0.1016747,
   0.1080789,
   0.2780133,
   0.1626757,
   0.1867444,
   0.3655156,
   0.4423702,
   1,
   0.7246616,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1312,Graph_from_mc_statistical_error_fy1312,Graph_from_mc_statistical_error_fex1312,Graph_from_mc_statistical_error_fey1312);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1312 = new TH1F("Graph_Graph_from_mc_statistical_error1312","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1312->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1312->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1312->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1312->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1312->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1312->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1312);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->Modified();
   Sphericity_algo_all->cd();
   Sphericity_algo_all->SetSelected(Sphericity_algo_all);
}
