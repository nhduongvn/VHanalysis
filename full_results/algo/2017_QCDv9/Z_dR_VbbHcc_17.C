void Z_dR_VbbHcc_17()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_17/Z_dR_VbbHcc_17
//=========  (Mon Nov 21 13:06:14 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_17 = new TCanvas("Z_dR_VbbHcc_17", "Z_dR_VbbHcc_17",0,0,600,600);
   Z_dR_VbbHcc_17->SetHighLightColor(2);
   Z_dR_VbbHcc_17->Range(0,0,1,1);
   Z_dR_VbbHcc_17->SetFillColor(0);
   Z_dR_VbbHcc_17->SetFillStyle(4000);
   Z_dR_VbbHcc_17->SetBorderMode(0);
   Z_dR_VbbHcc_17->SetBorderSize(2);
   Z_dR_VbbHcc_17->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-1040.92,10.52419,1039889);
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
   st->SetMaximum(891233.9);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",50,0,10);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(935795.6);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,50);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",50,0,10);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,296034.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,390862.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,328956.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,270475.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,235883.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,219075.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,174800.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,173136.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,161308.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,138851);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,140362.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,114537.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,116910.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,103273.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,64082.69);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,39806.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,19878.24);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,14709.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,3637.381);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,5500.298);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,19727.95);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,22459.42);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,20700.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,18909.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,17800.96);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,17006.47);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,15081.08);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,14906.78);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,14446.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,13288.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,13490.71);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,12066.13);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,12497.82);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,11635.91);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,9255.358);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,7288.842);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,5178.478);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,4499.043);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,2109.271);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,2795.969);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(2422);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",50,0,10);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.419948);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,371.0414);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,807.1504);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,1046.558);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,1303.875);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,1504.048);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,1585.218);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,1631.897);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,1553.676);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,1409.864);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,1267.985);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,1136.185);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,1013.492);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,891.4671);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,781.112);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,406.1221);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,236.7232);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,137.9914);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,73.62262);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,40.66883);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,21.36187);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,11.99566);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,6.600149);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,1.961817);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,0.8712485);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,0.04714179);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,0.2464181);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.2526139);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,7.882962);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,11.15515);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,12.75621);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,14.02698);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,14.9558);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,15.158);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,15.46117);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,14.99351);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,14.19263);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,13.34603);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,12.71144);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,12.02812);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,11.26048);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,10.68916);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,7.649392);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,5.908324);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,4.577893);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,3.244008);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,2.346876);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,1.744695);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,1.3127);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,1.004819);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,0.4303045);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,0.2210367);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,0.03364396);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,0.1995198);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(263449);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",50,0,10);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,2.782341);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,3100.29);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,7088.993);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,9423.571);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,11858.6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,13468.36);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,14271.03);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,14201.58);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,13329.17);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,12167.73);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,10720.16);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,9418.058);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,8295.093);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,7440.961);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,6376.992);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,2978.057);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,1492.945);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,765.9404);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,392.4024);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,203.5079);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,91.59383);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,42.26013);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,16.1343);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,6.989474);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,2.252285);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,0.7292321);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,0.1790246);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.4323313);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,14.69062);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,22.20561);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,25.62998);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,28.7381);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,30.64219);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,31.51177);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,31.36241);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,30.31656);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,28.90942);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,27.02079);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,25.24617);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,23.61287);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,22.2692);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,20.5694);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,14.02727);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,9.916627);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,7.074603);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,5.031119);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,3.621737);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,2.419665);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,1.636237);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,0.977413);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,0.6662785);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,0.364314);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,0.1945367);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,0.1088898);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(2401118);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",50,0,10);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,240.0929);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,947.2479);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1211.007);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,863.6492);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,461.9835);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,293.6349);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,231.5287);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,198.4938);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,173.2273);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,137.0567);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,123.4317);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,141.0211);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,110.7964);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,104.412);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,63.23296);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,43.31109);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,25.90883);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,21.86274);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,10.9064);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,12.14854);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,5.094706);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,3.255757);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,0.4293495);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,0.415882);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,0.3954546);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,0.5118056);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,9.739042);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,19.32429);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,21.82603);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,18.43369);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,13.46268);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,10.66336);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,9.521269);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,8.743019);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,8.145085);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,7.296023);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,6.888969);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,7.337248);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,6.511701);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,6.372443);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,4.915544);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,4.143711);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,3.101449);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,2.851552);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,1.985049);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,2.19091);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,1.43164);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,1.101743);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,0.3095807);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,0.415882);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,0.3954546);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,0.5118056);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(14584);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",50,0,10);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,1.464731);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,376.0285);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,368.5606);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,268.9685);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,203.2593);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,170.7432);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,135.1051);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,114.4315);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,120.57);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,120.2399);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,139.1366);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,112.7853);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,84.16659);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,99.99758);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,64.6286);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,56.79615);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,40.55688);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,21.16042);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,21.99432);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,10.57808);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,7.305353);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,7.329054);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,1.540664);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,1.058951);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,0.5454643);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,1.464731);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,22.33644);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,22.1054);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,18.99579);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,16.40765);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,15.32367);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,13.41172);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,12.16681);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,12.56343);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,12.3836);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,13.67624);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,12.04514);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,10.48863);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,11.32613);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,9.160293);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,8.688085);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,7.307936);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,5.217583);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,5.442729);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,3.619187);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,3.025732);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,3.043501);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,1.106387);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,1.058951);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,0.5454643);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(2033);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",50,0,10);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,3.19479);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,7.44797);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,6.268641);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,6.487058);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,6.184389);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,6.957468);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,5.90622);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,6.889327);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,5.326149);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,6.140499);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,3.584684);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,3.648293);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,3.774021);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,4.535285);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,4.106825);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.724453);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,0.850561);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,0.2562129);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,0.250968);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,0.2397567);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.8463285);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.313633);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,1.202043);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,1.201735);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,1.195174);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,1.270438);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,1.151899);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,1.283859);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,1.131734);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,1.195436);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.9086084);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.9296249);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.9489622);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,1.017977);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,1.006137);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.6324901);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.4363663);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.2562129);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.250968);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.2397567);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(380);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",50,0,10);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,16.31254);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,27.74381);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,33.15862);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,26.36014);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,34.42408);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,32.80665);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,24.05458);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,19.92011);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,16.17983);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,15.80947);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,10.1816);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,10.37752);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,9.602912);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,5.857352);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,3.004524);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,1.631728);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,0.521465);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,0.3006219);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,0.1040415);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,0.1409904);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.667569);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,2.137665);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,2.379754);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,2.084623);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,2.408172);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,2.345649);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,2.009821);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,1.831776);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,1.671617);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,1.630815);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,1.292399);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,1.324432);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,1.279255);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.9965309);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.7005075);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.4987603);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.3016222);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.2167576);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.1040415);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.1409904);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(1796);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",50,0,10);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,16.52854);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,23.46625);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,28.54538);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,33.38011);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,33.69954);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,30.55903);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,26.00443);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,21.93401);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,16.29933);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,14.43173);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,10.83318);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,14.23742);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,4.929841);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,5.516288);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,2.218752);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,0.5991812);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,0.4144037);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,0.6024078);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,0.2105156);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.902681);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.251163);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.499351);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,2.714431);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,2.711954);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,2.591089);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,2.358137);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,2.175024);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.890403);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.760737);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.525697);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.72916);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.020659);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.092913);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.7063832);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.3496045);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.2959801);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.3509436);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.2105156);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(1368);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",50,0,10);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.001547651);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,2.641784);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,6.155643);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,7.806219);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,8.696953);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,8.904484);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,8.228795);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,7.400373);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,6.024752);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,4.578592);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,3.608056);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.708003);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.313419);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,1.769539);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,1.551127);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,0.5017133);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,0.1745319);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,0.08055312);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,0.03401228);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,0.02775449);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,0.02187618);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,0.00383212);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,0.003844328);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,0.001823373);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.001547651);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.07204733);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1099959);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1243221);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1309081);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.1328191);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.1269927);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.1203819);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.1086302);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.09426757);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.08346115);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.07305797);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.0666113);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.05804974);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.05417371);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.03145381);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.0185186);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.01196826);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.007727308);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.007065033);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.006416378);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.002258958);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.002783812);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.001823373);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(42122);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",50,0,10);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.002818658);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,0.6550964);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,1.39227);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,1.972307);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,2.377975);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,2.469157);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.142961);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.691066);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.157274);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,0.8305662);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,0.6304945);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,0.4972698);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,0.4258709);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,0.3605746);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,0.2962693);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.107991);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.05690827);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.01955287);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.01339193);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.006979442);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.003471365);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.001328062);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.0008391657);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.0009215657);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.001152198);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.01701439);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.02482513);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.02962332);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.03251894);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.03318785);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.03088284);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02741949);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02270425);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.01917951);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.01666634);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.01481082);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.01369717);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.0125861);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.01145382);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.006872513);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.004983726);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.002927553);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.002369958);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.001747916);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.001230842);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.0007668998);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.0005933957);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.0006532045);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(39248);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",50,0,10);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.1048623);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1628812);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.2989223);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.3778779);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.3254773);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.2865296);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.2429487);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.1932786);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.1352875);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.08343215);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.05022275);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.05232466);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.03633794);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.03326888);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.01438648);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.005834278);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.001376775);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.001472708);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01372678);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01677178);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.02363831);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.02653021);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.02477943);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.02317439);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.02104691);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.01929838);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.01572979);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.01250974);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.009731534);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.009630924);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.008012985);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.007500957);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.004816932);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.003452255);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.001376775);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.001472708);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(1619);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",50,0,10);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,329.6375);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,914.6232);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,2358.731);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,2908.127);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,2361.185);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,1345.823);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,748.1298);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,637.2549);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,334.694);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,288.1977);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,220.3656);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,188.0266);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,191.4439);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,147.6101);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,43.98656);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,50.11926);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,24.32573);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,14.62763);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,14.77243);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,5.90666);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.03218308);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,41.13833);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,69.52719);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,111.0586);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,122.7856);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,111.2791);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,83.17674);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,61.85802);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,58.20556);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,41.35131);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,39.41805);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,34.02433);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,31.18619);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,31.37569);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,28.5478);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,14.63452);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,16.04124);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,10.84095);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,7.902193);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,8.59964);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,5.90666);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.03218308);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(2893);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__35 = new TH1D("VbbHcc_algo_Z_dR__35","",50,0,10);
   VbbHcc_algo_Z_dR__35->SetBinContent(2,21);
   VbbHcc_algo_Z_dR__35->SetBinContent(3,20949);
   VbbHcc_algo_Z_dR__35->SetBinContent(4,19618);
   VbbHcc_algo_Z_dR__35->SetBinContent(5,13302);
   VbbHcc_algo_Z_dR__35->SetBinContent(6,11085);
   VbbHcc_algo_Z_dR__35->SetBinContent(7,10451);
   VbbHcc_algo_Z_dR__35->SetBinContent(8,9105);
   VbbHcc_algo_Z_dR__35->SetBinContent(9,8680);
   VbbHcc_algo_Z_dR__35->SetBinContent(10,8067);
   VbbHcc_algo_Z_dR__35->SetBinContent(11,7028);
   VbbHcc_algo_Z_dR__35->SetBinContent(12,6578);
   VbbHcc_algo_Z_dR__35->SetBinContent(13,6013);
   VbbHcc_algo_Z_dR__35->SetBinContent(14,5717);
   VbbHcc_algo_Z_dR__35->SetBinContent(15,5310);
   VbbHcc_algo_Z_dR__35->SetBinContent(16,4853);
   VbbHcc_algo_Z_dR__35->SetBinContent(17,2976);
   VbbHcc_algo_Z_dR__35->SetBinContent(18,1929);
   VbbHcc_algo_Z_dR__35->SetBinContent(19,1245);
   VbbHcc_algo_Z_dR__35->SetBinContent(20,749);
   VbbHcc_algo_Z_dR__35->SetBinContent(21,435);
   VbbHcc_algo_Z_dR__35->SetBinContent(22,270);
   VbbHcc_algo_Z_dR__35->SetBinContent(23,144);
   VbbHcc_algo_Z_dR__35->SetBinContent(24,82);
   VbbHcc_algo_Z_dR__35->SetBinContent(25,38);
   VbbHcc_algo_Z_dR__35->SetBinContent(26,12);
   VbbHcc_algo_Z_dR__35->SetBinContent(27,3);
   VbbHcc_algo_Z_dR__35->SetBinContent(28,3);
   VbbHcc_algo_Z_dR__35->SetEntries(144663);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__35->SetLineColor(ci);
   VbbHcc_algo_Z_dR__35->SetLineWidth(2);
   VbbHcc_algo_Z_dR__35->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__35->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__35->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Z_dR__35->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__35->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__35->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__35->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__35->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__35->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__35->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__35->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__35->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__35->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__35->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__35->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__35->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__35->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1035[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1035[50] = {
   0,
   4.671387,
   300490.6,
   401055.2,
   343343.3,
   287690.9,
   253936,
   236786.9,
   191793.4,
   189031.4,
   175557.5,
   151444.3,
   151400.8,
   124290,
   125665.4,
   110766.1,
   67640.84,
   41674.07,
   20855.45,
   15235.36,
   3917.851,
   5638.994,
   66.92741,
   27.9163,
   10.44051,
   3.541239,
   1.717293,
   0.9372483,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1035[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1035[50] = {
   0,
   1.547955,
   19728.02,
   22459.56,
   20701.05,
   18909.85,
   17801.35,
   17006.72,
   15081.26,
   14906.94,
   14446.82,
   13288.75,
   13490.79,
   12066.21,
   12497.89,
   11635.97,
   9255.389,
   7288.873,
   5178.5,
   4499.058,
   2109.297,
   2795.979,
   3.969673,
   2.116671,
   1.358789,
   0.5954352,
   0.7020627,
   0.560009,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_algo_Z_dR_fx1035,Graph_from_VbbHcc_algo_Z_dR_fy1035,Graph_from_VbbHcc_algo_Z_dR_fex1035,Graph_from_VbbHcc_algo_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1035","",100,0,11);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->SetMaximum(465866.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__36 = new TH1D("data_mc_ratio__36","",50,0,10);
   data_mc_ratio__36->SetBinContent(2,4.495453);
   data_mc_ratio__36->SetBinContent(3,0.06971598);
   data_mc_ratio__36->SetBinContent(4,0.04891595);
   data_mc_ratio__36->SetBinContent(5,0.03874256);
   data_mc_ratio__36->SetBinContent(6,0.03853094);
   data_mc_ratio__36->SetBinContent(7,0.04115605);
   data_mc_ratio__36->SetBinContent(8,0.0384523);
   data_mc_ratio__36->SetBinContent(9,0.04525703);
   data_mc_ratio__36->SetBinContent(10,0.04267544);
   data_mc_ratio__36->SetBinContent(11,0.04003248);
   data_mc_ratio__36->SetBinContent(12,0.04343512);
   data_mc_ratio__36->SetBinContent(13,0.03971579);
   data_mc_ratio__36->SetBinContent(14,0.04599728);
   data_mc_ratio__36->SetBinContent(15,0.04225505);
   data_mc_ratio__36->SetBinContent(16,0.04381305);
   data_mc_ratio__36->SetBinContent(17,0.04399709);
   data_mc_ratio__36->SetBinContent(18,0.04628777);
   data_mc_ratio__36->SetBinContent(19,0.05969662);
   data_mc_ratio__36->SetBinContent(20,0.04916195);
   data_mc_ratio__36->SetBinContent(21,0.1110303);
   data_mc_ratio__36->SetBinContent(22,0.04788088);
   data_mc_ratio__36->SetBinContent(23,2.151585);
   data_mc_ratio__36->SetBinContent(24,2.937352);
   data_mc_ratio__36->SetBinContent(25,3.639668);
   data_mc_ratio__36->SetBinContent(26,3.388644);
   data_mc_ratio__36->SetBinContent(27,1.746936);
   data_mc_ratio__36->SetBinContent(28,3.200859);
   data_mc_ratio__36->SetBinError(2,0.9809882);
   data_mc_ratio__36->SetBinError(3,0.0004816712);
   data_mc_ratio__36->SetBinError(4,0.0003492393);
   data_mc_ratio__36->SetBinError(5,0.0003359154);
   data_mc_ratio__36->SetBinError(6,0.0003659668);
   data_mc_ratio__36->SetBinError(7,0.0004025823);
   data_mc_ratio__36->SetBinError(8,0.000402979);
   data_mc_ratio__36->SetBinError(9,0.000485765);
   data_mc_ratio__36->SetBinError(10,0.0004751404);
   data_mc_ratio__36->SetBinError(11,0.0004775255);
   data_mc_ratio__36->SetBinError(12,0.0005355427);
   data_mc_ratio__36->SetBinError(13,0.0005121741);
   data_mc_ratio__36->SetBinError(14,0.0006083423);
   data_mc_ratio__36->SetBinError(15,0.000579871);
   data_mc_ratio__36->SetBinError(16,0.0006289243);
   data_mc_ratio__36->SetBinError(17,0.0008065057);
   data_mc_ratio__36->SetBinError(18,0.001053902);
   data_mc_ratio__36->SetBinError(19,0.001691862);
   data_mc_ratio__36->SetBinError(20,0.001796339);
   data_mc_ratio__36->SetBinError(21,0.005323494);
   data_mc_ratio__36->SetBinError(22,0.002913937);
   data_mc_ratio__36->SetBinError(23,0.1792987);
   data_mc_ratio__36->SetBinError(24,0.3243763);
   data_mc_ratio__36->SetBinError(25,0.5904321);
   data_mc_ratio__36->SetBinError(26,0.9782174);
   data_mc_ratio__36->SetBinError(27,1.008594);
   data_mc_ratio__36->SetBinError(28,1.848017);
   data_mc_ratio__36->SetMinimum(0.4);
   data_mc_ratio__36->SetMaximum(1.6);
   data_mc_ratio__36->SetEntries(36.68845);
   data_mc_ratio__36->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__36->SetLineColor(ci);
   data_mc_ratio__36->SetLineWidth(2);
   data_mc_ratio__36->SetMarkerStyle(20);
   data_mc_ratio__36->SetMarkerSize(1.2);
   data_mc_ratio__36->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__36->GetXaxis()->SetRange(1,50);
   data_mc_ratio__36->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__36->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__36->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__36->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__36->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__36->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__36->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__36->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__36->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1036[50] = {
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
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1036[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1036[50] = {
   0,
   0.3313695,
   0.06565269,
   0.05600117,
   0.06029258,
   0.06572973,
   0.07010172,
   0.07182292,
   0.07863284,
   0.07885957,
   0.08229115,
   0.08774679,
   0.08910647,
   0.0970811,
   0.09945366,
   0.1050499,
   0.1368314,
   0.1749019,
   0.2483044,
   0.2953037,
   0.5383812,
   0.4958293,
   0.05931311,
   0.07582205,
   0.1301458,
   0.1681432,
   0.4088195,
   0.5975033,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,11);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.282996);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.717004);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->Modified();
   Z_dR_VbbHcc_17->cd();
   Z_dR_VbbHcc_17->SetSelected(Z_dR_VbbHcc_17);
}
