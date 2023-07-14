void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Jul 14 13:38:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(0,0,1,1);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2695.758,1.052419,2693072);
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
   st->SetMaximum(2308091);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(0.01);
   st_stack_59->SetMaximum(2423496);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetLabelSize(0.035);
   st_stack_59->GetXaxis()->SetTitleSize(0.035);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetLabelSize(0.035);
   st_stack_59->GetZaxis()->SetTitleSize(0.035);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,640606.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,483485.2);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,268376.3);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,172797.5);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,90216.1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,48861.84);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,20522.73);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,13698.88);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,9661.585);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,6980.694);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,5844.131);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,3537.64);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,2436.7);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,2186.311);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,1424.711);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,3886.992);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,561.867);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,517.2049);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,336.4211);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,72.81894);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,18.61173);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.2521726);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,10912.24);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,10203.84);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,6746.955);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,6030.018);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,3627.11);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,2500.005);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1298.121);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,1158.199);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,1035.384);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,863.2459);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,941.0995);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,469.4498);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,198.1893);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,459.8404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,168.746);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,3122.226);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,76.89723);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,86.63883);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,84.46167);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,26.63743);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,12.84488);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.2521726);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(155876);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,7025.847);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,5702.234);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,3363.453);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,1963.806);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,1114.391);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,616.8554);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,326.9939);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,206.535);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,124.0476);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,83.02775);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,60.7574);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,45.25487);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,33.33033);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,20.20162);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,16.32987);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,12.47781);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,9.120907);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,6.182506);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,3.1433);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,1.119775);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,1.110322);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,0.3321652);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,42.20828);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,35.65908);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,27.90842);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,24.91814);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,16.27556);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,12.929);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,8.564211);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,7.595642);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,5.544341);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,4.337068);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,4.498424);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,3.324226);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,2.751525);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,2.006087);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,1.746421);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,1.634226);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,1.372617);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,1.078708);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.6547373);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.4908968);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.515229);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,0.22368);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(222347);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,128905.1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,109390.3);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,61195.27);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,35352.53);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,20480.7);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,11657.37);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,6715.309);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,4050.217);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,2693.531);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,1868.003);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,1320.428);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,981.4098);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,734.6847);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,560.2735);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,438.4121);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,327.717);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,240.0665);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,153.2599);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,89.89363);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,35.88201);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,11.93154);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,3.883261);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(23,0.5223258);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,104.5942);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,95.58514);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,71.83098);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,54.88042);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,41.40803);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,31.05976);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,23.11085);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,18.12353);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,15.34113);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,12.21074);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,10.30598);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,9.446863);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,7.595964);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,6.505535);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,6.148408);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,5.030729);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,5.552195);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,3.498235);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,2.608874);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,1.816441);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.9328631);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.5249707);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(23,0.187462);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(5745643);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,5407.349);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,4084.223);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,2377.154);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,1427.116);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,838.0691);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,437.0361);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,217.9978);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,128.8093);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,93.93196);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,65.09887);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,50.58399);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,34.69626);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,24.56454);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,15.00456);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,16.96398);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,11.5687);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,8.116836);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,5.680293);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,2.185247);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,1.067478);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.4711902);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(22,0.1251113);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(23,0.4799386);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,51.39653);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,52.90722);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,37.43016);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,25.54293);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,18.52142);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,11.88222);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,8.460383);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,5.475276);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,4.843513);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,6.459139);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,3.624213);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,2.467541);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,2.030133);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,1.591066);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,1.995826);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,1.444492);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,1.330852);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,1.409524);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.6780214);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.5607819);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.2385988);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(22,0.1251113);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(23,0.4799386);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(86588);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_5 = new TH1D("VbbHcc_tags_Sphericity_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(1,2940.275);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(2,1991.791);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(3,1127.472);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(4,773.5743);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(5,450.6539);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(6,223.2631);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(7,127.5238);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(8,90.76472);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(9,52.80811);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(10,51.57679);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(11,22.79658);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(12,23.30509);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(13,14.8459);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(14,8.461265);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(15,8.281924);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(16,8.925248);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(17,4.894619);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(18,4.851789);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(19,0.9451131);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(20,0.2935501);
   VbbHcc_tags_Sphericity_stack_5->SetBinContent(21,2.226874);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(1,72.59023);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(2,51.48376);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(3,39.44373);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(4,38.84952);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(5,30.84299);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(6,13.6847);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(7,9.672139);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(8,9.445304);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(9,12.60724);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(10,10.88295);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(11,2.783088);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(12,7.48454);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(13,1.777516);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(14,1.216516);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(15,2.475167);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(16,2.75652);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(17,1.071114);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(18,2.672509);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(19,0.4318442);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(20,0.1786583);
   VbbHcc_tags_Sphericity_stack_5->SetBinError(21,2.226874);
   VbbHcc_tags_Sphericity_stack_5->SetEntries(38399);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_6 = new TH1D("VbbHcc_tags_Sphericity_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(1,15.91301);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(2,10.66519);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(3,6.950567);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(4,4.803452);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(5,1.890196);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(6,2.069773);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(7,0.4510667);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(8,0.7658737);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(11,0.3114526);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(13,0.3757414);
   VbbHcc_tags_Sphericity_stack_6->SetBinContent(15,0.3114526);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(1,2.265847);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(2,1.872387);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(3,1.483711);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(4,1.26684);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(5,0.7290746);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(6,0.7874061);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(7,0.3413133);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(8,0.5424566);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(11,0.3114526);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(13,0.3757414);
   VbbHcc_tags_Sphericity_stack_6->SetBinError(15,0.3114526);
   VbbHcc_tags_Sphericity_stack_6->SetEntries(144);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,40.92209);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,30.81037);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,16.82609);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,12.7152);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,6.493733);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,3.967159);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,2.69837);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(8,0.9196129);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.8713686);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(10,1.014275);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(11,0.5272741);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.2257285);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.2032833);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(15,0.3007647);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,3.162028);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,2.750596);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,2.024727);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,1.752408);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,1.315511);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.9944571);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.7882902);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(8,0.4681373);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.5037534);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(10,0.5104226);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(11,0.3232196);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.2257285);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.2032833);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(15,0.3007647);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(512);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,41.81044);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,32.61984);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,14.59751);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,12.69588);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,8.028431);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,3.36376);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,1.830347);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(8,0.5870979);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(9,0.1568058);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.7362517);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.422531);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(14,0.1428);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(15,0.3018657);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,3.303996);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.773872);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.875682);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.775954);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.399295);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.8369108);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.6602842);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(8,0.3450989);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(9,0.1568058);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.4297288);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2990576);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(14,0.1428);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(15,0.3018657);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(509);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_9 = new TH1D("VbbHcc_tags_Sphericity_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(1,27.11401);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(2,22.2884);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(3,12.86331);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(4,8.411742);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(5,5.566188);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(6,3.141761);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(7,1.228246);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(8,0.6080724);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(9,0.4227627);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(10,0.2586993);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(11,0.1812233);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(12,0.1645841);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(13,0.1371528);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(14,0.07047229);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(15,0.06855047);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(16,0.03280195);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(17,0.02945311);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(18,0.03228634);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(19,0.01577212);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(20,0.01304543);
   VbbHcc_tags_Sphericity_stack_9->SetBinContent(21,0.004784507);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(1,0.2901578);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(2,0.280491);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(3,0.1999745);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(4,0.1543798);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(5,0.1301749);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(6,0.09640417);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(7,0.05829722);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(8,0.04046071);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(9,0.03421379);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(10,0.02645179);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(11,0.02198081);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(12,0.02147966);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(13,0.0203064);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(14,0.01326954);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(15,0.01437531);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(16,0.009266204);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(17,0.009167031);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(18,0.00953631);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(19,0.00646341);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(20,0.005896947);
   VbbHcc_tags_Sphericity_stack_9->SetBinError(21,0.003389899);
   VbbHcc_tags_Sphericity_stack_9->SetEntries(32696);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,25.60066);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,21.41589);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,12.23418);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,7.659791);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,4.57264);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,2.529995);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,1.348431);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.8090472);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.455969);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.3656203);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.2690629);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.2315105);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.1670164);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.1242406);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.09702509);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.06917404);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.04902317);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0337083);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.01869786);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.006132306);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001888188);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.000620625);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.1275713);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.1168077);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.08831728);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.06991263);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.05400867);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.04015521);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.02926868);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.02260775);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01699294);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.0152117);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.01307799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.01209073);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.01023838);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.00884141);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.007841488);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.006576585);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.005595935);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.004629251);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.003444343);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001954057);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001090356);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.000620625);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(124885);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_11 = new TH1D("VbbHcc_tags_Sphericity_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(1,0.7260035);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(2,0.6233005);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(3,0.3174018);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(4,0.2761426);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(5,0.171607);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(6,0.06562688);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(7,0.03463106);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(8,0.01764561);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(9,0.002133138);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(10,0.007566668);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(11,0.005452211);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(13,0.002397148);
   VbbHcc_tags_Sphericity_stack_11->SetBinContent(18,0.002532203);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(1,0.05238035);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(2,0.04159088);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(3,0.03478735);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(4,0.02800352);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(5,0.02195283);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(6,0.01326068);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(7,0.0100936);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(8,0.006899936);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(9,0.002133138);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(10,0.004386768);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(11,0.003211875);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(13,0.002397148);
   VbbHcc_tags_Sphericity_stack_11->SetBinError(18,0.002532203);
   VbbHcc_tags_Sphericity_stack_11->SetEntries(903);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_12 = new TH1D("VbbHcc_tags_Sphericity_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(1,0.3801457);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(2,0.3080121);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(3,0.1506462);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(4,0.1135838);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(5,0.06810871);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(6,0.03712961);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(7,0.01933147);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(8,0.01064844);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(9,0.007882183);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(10,0.004143726);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(11,0.003458078);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(12,0.002791317);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(13,0.001733363);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(14,0.002473251);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(15,0.002617283);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(16,0.0007705261);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(17,0.0007939823);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(18,0.000280877);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(19,0.0003603593);
   VbbHcc_tags_Sphericity_stack_12->SetBinContent(20,0.0003105083);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(1,0.01165215);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(2,0.01040897);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(3,0.007227941);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(4,0.006526248);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(5,0.006285232);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(6,0.003642418);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(7,0.002603115);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(8,0.001875112);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(9,0.001637267);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(10,0.001207065);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(11,0.001050507);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(12,0.001025878);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(13,0.0007800283);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(14,0.0009391263);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(15,0.001002746);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(16,0.0005497544);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(17,0.0005623655);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(18,0.000280877);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(19,0.0003603593);
   VbbHcc_tags_Sphericity_stack_12->SetBinError(20,0.0003105083);
   VbbHcc_tags_Sphericity_stack_12->SetEntries(3336);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity__117 = new TH1D("VbbHcc_tags_Sphericity__117","",25,0,1);
   VbbHcc_tags_Sphericity__117->SetBinContent(1,1038641);
   VbbHcc_tags_Sphericity__117->SetBinContent(2,820086);
   VbbHcc_tags_Sphericity__117->SetBinContent(3,474247);
   VbbHcc_tags_Sphericity__117->SetBinContent(4,273412);
   VbbHcc_tags_Sphericity__117->SetBinContent(5,153487);
   VbbHcc_tags_Sphericity__117->SetBinContent(6,82288);
   VbbHcc_tags_Sphericity__117->SetBinContent(7,43858);
   VbbHcc_tags_Sphericity__117->SetBinContent(8,25801);
   VbbHcc_tags_Sphericity__117->SetBinContent(9,17183);
   VbbHcc_tags_Sphericity__117->SetBinContent(10,11946);
   VbbHcc_tags_Sphericity__117->SetBinContent(11,8450);
   VbbHcc_tags_Sphericity__117->SetBinContent(12,6422);
   VbbHcc_tags_Sphericity__117->SetBinContent(13,4630);
   VbbHcc_tags_Sphericity__117->SetBinContent(14,3625);
   VbbHcc_tags_Sphericity__117->SetBinContent(15,2698);
   VbbHcc_tags_Sphericity__117->SetBinContent(16,1975);
   VbbHcc_tags_Sphericity__117->SetBinContent(17,1516);
   VbbHcc_tags_Sphericity__117->SetBinContent(18,1007);
   VbbHcc_tags_Sphericity__117->SetBinContent(19,517);
   VbbHcc_tags_Sphericity__117->SetBinContent(20,219);
   VbbHcc_tags_Sphericity__117->SetBinContent(21,71);
   VbbHcc_tags_Sphericity__117->SetBinContent(22,17);
   VbbHcc_tags_Sphericity__117->SetBinContent(23,9);
   VbbHcc_tags_Sphericity__117->SetBinContent(24,1);
   VbbHcc_tags_Sphericity__117->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity__117->SetLineColor(ci);
   VbbHcc_tags_Sphericity__117->SetLineWidth(2);
   VbbHcc_tags_Sphericity__117->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity__117->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity__117->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity__117->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__117->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_fx1117[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fy1117[25] = {
   785037.3,
   604772.4,
   336503.5,
   212361.2,
   113126.7,
   61811.53,
   27918.16,
   18178.93,
   12627.82,
   9050.787,
   7299.995,
   4623.353,
   3244.81,
   2790.795,
   1905.781,
   4247.784,
   824.1451,
   687.2482,
   432.6232,
   111.2012,
   34.35834,
   4.593331,
   1.002264,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_fex1117[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_fey1117[25] = {
   10913.19,
   10204.62,
   6747.615,
   6030.499,
   3627.562,
   2500.297,
   1298.419,
   1158.417,
   1035.601,
   863.4362,
   941.1779,
   469.6229,
   198.3726,
   459.8952,
   168.8978,
   3122.232,
   77.12855,
   86.76876,
   84.50831,
   26.71029,
   13.08215,
   0.636295,
   0.5152505,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_fx1117,Graph_from_VbbHcc_tags_Sphericity_fy1117,Graph_from_VbbHcc_tags_Sphericity_fex1117,Graph_from_VbbHcc_tags_Sphericity_fey1117);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity1117 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity1117","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetMaximum(875545.6);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity1117);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",25,0,1);
   data_mc_ratio__118->SetBinContent(1,1.323047);
   data_mc_ratio__118->SetBinContent(2,1.356024);
   data_mc_ratio__118->SetBinContent(3,1.409337);
   data_mc_ratio__118->SetBinContent(4,1.287485);
   data_mc_ratio__118->SetBinContent(5,1.356771);
   data_mc_ratio__118->SetBinContent(6,1.331273);
   data_mc_ratio__118->SetBinContent(7,1.570949);
   data_mc_ratio__118->SetBinContent(8,1.419281);
   data_mc_ratio__118->SetBinContent(9,1.360726);
   data_mc_ratio__118->SetBinContent(10,1.319885);
   data_mc_ratio__118->SetBinContent(11,1.157535);
   data_mc_ratio__118->SetBinContent(12,1.389035);
   data_mc_ratio__118->SetBinContent(13,1.426894);
   data_mc_ratio__118->SetBinContent(14,1.298913);
   data_mc_ratio__118->SetBinContent(15,1.415692);
   data_mc_ratio__118->SetBinContent(16,0.4649483);
   data_mc_ratio__118->SetBinContent(17,1.839482);
   data_mc_ratio__118->SetBinContent(18,1.465264);
   data_mc_ratio__118->SetBinContent(19,1.195035);
   data_mc_ratio__118->SetBinContent(20,1.969402);
   data_mc_ratio__118->SetBinContent(21,2.066456);
   data_mc_ratio__118->SetBinContent(22,3.701018);
   data_mc_ratio__118->SetBinContent(23,8.979666);
   data_mc_ratio__118->SetBinError(1,0.001298202);
   data_mc_ratio__118->SetBinError(2,0.0014974);
   data_mc_ratio__118->SetBinError(3,0.002046504);
   data_mc_ratio__118->SetBinError(4,0.002462258);
   data_mc_ratio__118->SetBinError(5,0.003463145);
   data_mc_ratio__118->SetBinError(6,0.004640863);
   data_mc_ratio__118->SetBinError(7,0.007501318);
   data_mc_ratio__118->SetBinError(8,0.008835884);
   data_mc_ratio__118->SetBinError(9,0.01038057);
   data_mc_ratio__118->SetBinError(10,0.01207605);
   data_mc_ratio__118->SetBinError(11,0.01259232);
   data_mc_ratio__118->SetBinError(12,0.01733317);
   data_mc_ratio__118->SetBinError(13,0.02097014);
   data_mc_ratio__118->SetBinError(14,0.02157377);
   data_mc_ratio__118->SetBinError(15,0.02725511);
   data_mc_ratio__118->SetBinError(16,0.01046215);
   data_mc_ratio__118->SetBinError(17,0.04724392);
   data_mc_ratio__118->SetBinError(18,0.04617438);
   data_mc_ratio__118->SetBinError(19,0.0525576);
   data_mc_ratio__118->SetBinError(20,0.1330799);
   data_mc_ratio__118->SetBinError(21,0.2452432);
   data_mc_ratio__118->SetBinError(22,0.8976287);
   data_mc_ratio__118->SetBinError(23,2.993222);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(54.27083);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__118->GetXaxis()->SetRange(1,25);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1118[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1118[25] = {
   0.01390149,
   0.01687348,
   0.02005213,
   0.02839736,
   0.03206636,
   0.04045034,
   0.04650804,
   0.06372308,
   0.08200948,
   0.09539902,
   0.1289286,
   0.1015763,
   0.06113534,
   0.16479,
   0.0886239,
   0.7350261,
   0.09358613,
   0.1262553,
   0.1953393,
   0.2401978,
   0.3807562,
   0.1385258,
   0.5140864,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0.1179687);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(1.882031);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
