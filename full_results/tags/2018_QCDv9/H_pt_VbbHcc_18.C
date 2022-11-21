void H_pt_VbbHcc_18()
{
//=========Macro generated from canvas: H_pt_VbbHcc_18/H_pt_VbbHcc_18
//=========  (Mon Nov 21 09:33:06 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_18 = new TCanvas("H_pt_VbbHcc_18", "H_pt_VbbHcc_18",0,0,600,600);
   H_pt_VbbHcc_18->SetHighLightColor(2);
   H_pt_VbbHcc_18->Range(0,0,1,1);
   H_pt_VbbHcc_18->SetFillColor(0);
   H_pt_VbbHcc_18->SetFillStyle(4000);
   H_pt_VbbHcc_18->SetBorderMode(0);
   H_pt_VbbHcc_18->SetBorderSize(2);
   H_pt_VbbHcc_18->SetFrameFillStyle(1000);
   H_pt_VbbHcc_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-34445.42,1562.903,3.441098e+07);
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
   st->SetMaximum(2.949184e+07);
   
   TH1F *st_stack_15 = new TH1F("st_stack_15","",40,0,2000);
   st_stack_15->SetMinimum(0.01);
   st_stack_15->SetMaximum(3.096644e+07);
   st_stack_15->SetDirectory(0);
   st_stack_15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_15->SetLineColor(ci);
   st_stack_15->GetXaxis()->SetRange(7,30);
   st_stack_15->GetXaxis()->SetLabelFont(42);
   st_stack_15->GetXaxis()->SetLabelSize(0.035);
   st_stack_15->GetXaxis()->SetTitleSize(0.035);
   st_stack_15->GetXaxis()->SetTitleFont(42);
   st_stack_15->GetYaxis()->SetTitle("Events/50.0");
   st_stack_15->GetYaxis()->SetLabelFont(42);
   st_stack_15->GetYaxis()->SetLabelSize(0.05);
   st_stack_15->GetYaxis()->SetTitleSize(0.057);
   st_stack_15->GetYaxis()->SetTitleOffset(1.2);
   st_stack_15->GetYaxis()->SetTitleFont(42);
   st_stack_15->GetZaxis()->SetLabelFont(42);
   st_stack_15->GetZaxis()->SetLabelSize(0.035);
   st_stack_15->GetZaxis()->SetTitleSize(0.035);
   st_stack_15->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_15);
   
   
   TH1D *VbbHcc_tags_H_pt_stack_1 = new TH1D("VbbHcc_tags_H_pt_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(1,64663.57);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(2,115370.4);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(3,64718.53);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(4,26531.71);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(5,12113.28);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(6,6227.175);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(7,3498.035);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(8,2004.112);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(9,1248.592);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(10,772.7301);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(11,492.1055);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(12,351.0562);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(13,205.5367);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(14,153.3966);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(15,104.4647);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(16,79.16185);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(17,52.33762);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(18,43.66965);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(19,25.04959);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(20,21.25466);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(21,11.63468);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(22,12.40393);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(23,8.41946);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(24,4.35559);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(25,2.444456);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(26,3.285361);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(27,2.843895);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(28,0.43108);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(29,1.778463);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(30,0.4497);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(31,2.059963);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(32,0.9523251);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(33,1.057281);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(34,0.5905913);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(35,0.2287554);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(36,0.3007676);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(37,-0.05673641);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(38,0.3053592);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(39,0.2522055);
   VbbHcc_tags_H_pt_stack_1->SetBinContent(41,0.7459009);
   VbbHcc_tags_H_pt_stack_1->SetBinError(1,115.2614);
   VbbHcc_tags_H_pt_stack_1->SetBinError(2,152.0613);
   VbbHcc_tags_H_pt_stack_1->SetBinError(3,118.2911);
   VbbHcc_tags_H_pt_stack_1->SetBinError(4,76.34465);
   VbbHcc_tags_H_pt_stack_1->SetBinError(5,54.73438);
   VbbHcc_tags_H_pt_stack_1->SetBinError(6,38.28761);
   VbbHcc_tags_H_pt_stack_1->SetBinError(7,29.5449);
   VbbHcc_tags_H_pt_stack_1->SetBinError(8,23.30407);
   VbbHcc_tags_H_pt_stack_1->SetBinError(9,18.2721);
   VbbHcc_tags_H_pt_stack_1->SetBinError(10,14.34474);
   VbbHcc_tags_H_pt_stack_1->SetBinError(11,11.46516);
   VbbHcc_tags_H_pt_stack_1->SetBinError(12,11.15759);
   VbbHcc_tags_H_pt_stack_1->SetBinError(13,7.29772);
   VbbHcc_tags_H_pt_stack_1->SetBinError(14,6.392721);
   VbbHcc_tags_H_pt_stack_1->SetBinError(15,5.738016);
   VbbHcc_tags_H_pt_stack_1->SetBinError(16,5.65342);
   VbbHcc_tags_H_pt_stack_1->SetBinError(17,3.745126);
   VbbHcc_tags_H_pt_stack_1->SetBinError(18,3.522641);
   VbbHcc_tags_H_pt_stack_1->SetBinError(19,2.743022);
   VbbHcc_tags_H_pt_stack_1->SetBinError(20,2.447817);
   VbbHcc_tags_H_pt_stack_1->SetBinError(21,1.675378);
   VbbHcc_tags_H_pt_stack_1->SetBinError(22,1.919532);
   VbbHcc_tags_H_pt_stack_1->SetBinError(23,1.52645);
   VbbHcc_tags_H_pt_stack_1->SetBinError(24,1.083767);
   VbbHcc_tags_H_pt_stack_1->SetBinError(25,0.8957453);
   VbbHcc_tags_H_pt_stack_1->SetBinError(26,0.9661495);
   VbbHcc_tags_H_pt_stack_1->SetBinError(27,0.8892044);
   VbbHcc_tags_H_pt_stack_1->SetBinError(28,0.3762207);
   VbbHcc_tags_H_pt_stack_1->SetBinError(29,0.6733039);
   VbbHcc_tags_H_pt_stack_1->SetBinError(30,0.2723608);
   VbbHcc_tags_H_pt_stack_1->SetBinError(31,0.8718841);
   VbbHcc_tags_H_pt_stack_1->SetBinError(32,0.5218729);
   VbbHcc_tags_H_pt_stack_1->SetBinError(33,0.5351165);
   VbbHcc_tags_H_pt_stack_1->SetBinError(34,0.4176164);
   VbbHcc_tags_H_pt_stack_1->SetBinError(35,0.2287554);
   VbbHcc_tags_H_pt_stack_1->SetBinError(36,0.3007676);
   VbbHcc_tags_H_pt_stack_1->SetBinError(37,0.05673641);
   VbbHcc_tags_H_pt_stack_1->SetBinError(38,0.3053592);
   VbbHcc_tags_H_pt_stack_1->SetBinError(39,0.2522055);
   VbbHcc_tags_H_pt_stack_1->SetBinError(41,0.4868932);
   VbbHcc_tags_H_pt_stack_1->SetEntries(3753295);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_2 = new TH1D("VbbHcc_tags_H_pt_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(1,992674.8);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(2,1755071);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(3,977433.4);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(4,356938.8);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(5,147126.7);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(6,70024.69);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(7,36882.88);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(8,20589.47);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(9,11864.72);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(10,7117.133);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(11,4444.51);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(12,2841.219);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(13,1880.154);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(14,1241.162);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(15,810.9644);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(16,558.752);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(17,391.3776);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(18,276.4212);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(19,201.0791);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(20,138.5179);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(21,99.38432);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(22,74.08389);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(23,51.67518);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(24,37.20442);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(25,27.3388);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(26,19.66001);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(27,15.54176);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(28,11.38834);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(29,11.43007);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(30,4.647731);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(31,4.88081);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(32,2.849242);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(33,2.56082);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(34,1.963788);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(35,1.024719);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(36,1.440007);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(37,0.9850533);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(38,0.5222011);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(39,0.3379965);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(40,0.2604904);
   VbbHcc_tags_H_pt_stack_2->SetBinContent(41,1.705044);
   VbbHcc_tags_H_pt_stack_2->SetBinError(1,288.6082);
   VbbHcc_tags_H_pt_stack_2->SetBinError(2,384.1059);
   VbbHcc_tags_H_pt_stack_2->SetBinError(3,287.0696);
   VbbHcc_tags_H_pt_stack_2->SetBinError(4,172.6804);
   VbbHcc_tags_H_pt_stack_2->SetBinError(5,110.8469);
   VbbHcc_tags_H_pt_stack_2->SetBinError(6,76.62016);
   VbbHcc_tags_H_pt_stack_2->SetBinError(7,55.63654);
   VbbHcc_tags_H_pt_stack_2->SetBinError(8,41.81978);
   VbbHcc_tags_H_pt_stack_2->SetBinError(9,31.27017);
   VbbHcc_tags_H_pt_stack_2->SetBinError(10,23.88877);
   VbbHcc_tags_H_pt_stack_2->SetBinError(11,19.25416);
   VbbHcc_tags_H_pt_stack_2->SetBinError(12,15.1241);
   VbbHcc_tags_H_pt_stack_2->SetBinError(13,12.87984);
   VbbHcc_tags_H_pt_stack_2->SetBinError(14,10.04587);
   VbbHcc_tags_H_pt_stack_2->SetBinError(15,8.668112);
   VbbHcc_tags_H_pt_stack_2->SetBinError(16,6.761395);
   VbbHcc_tags_H_pt_stack_2->SetBinError(17,5.797455);
   VbbHcc_tags_H_pt_stack_2->SetBinError(18,5.140909);
   VbbHcc_tags_H_pt_stack_2->SetBinError(19,4.059259);
   VbbHcc_tags_H_pt_stack_2->SetBinError(20,3.656358);
   VbbHcc_tags_H_pt_stack_2->SetBinError(21,2.889576);
   VbbHcc_tags_H_pt_stack_2->SetBinError(22,2.385917);
   VbbHcc_tags_H_pt_stack_2->SetBinError(23,2.135129);
   VbbHcc_tags_H_pt_stack_2->SetBinError(24,1.921591);
   VbbHcc_tags_H_pt_stack_2->SetBinError(25,1.474766);
   VbbHcc_tags_H_pt_stack_2->SetBinError(26,1.221987);
   VbbHcc_tags_H_pt_stack_2->SetBinError(27,1.097357);
   VbbHcc_tags_H_pt_stack_2->SetBinError(28,0.9525021);
   VbbHcc_tags_H_pt_stack_2->SetBinError(29,1.493266);
   VbbHcc_tags_H_pt_stack_2->SetBinError(30,0.6077738);
   VbbHcc_tags_H_pt_stack_2->SetBinError(31,0.6112998);
   VbbHcc_tags_H_pt_stack_2->SetBinError(32,0.4459693);
   VbbHcc_tags_H_pt_stack_2->SetBinError(33,0.4490358);
   VbbHcc_tags_H_pt_stack_2->SetBinError(34,0.429464);
   VbbHcc_tags_H_pt_stack_2->SetBinError(35,0.30863);
   VbbHcc_tags_H_pt_stack_2->SetBinError(36,0.329328);
   VbbHcc_tags_H_pt_stack_2->SetBinError(37,0.2742121);
   VbbHcc_tags_H_pt_stack_2->SetBinError(38,0.2005559);
   VbbHcc_tags_H_pt_stack_2->SetBinError(39,0.1883161);
   VbbHcc_tags_H_pt_stack_2->SetBinError(40,0.1335006);
   VbbHcc_tags_H_pt_stack_2->SetBinError(41,0.3552567);
   VbbHcc_tags_H_pt_stack_2->SetEntries(6.525334e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_2,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_3 = new TH1D("VbbHcc_tags_H_pt_stack_3","",40,0,2000);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(1,9315.063);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(2,20349.23);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(3,19828.1);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(4,13798.51);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(5,6035.53);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(6,1374.643);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(7,126.1097);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(8,8.518946);
   VbbHcc_tags_H_pt_stack_3->SetBinContent(9,0.4588168);
   VbbHcc_tags_H_pt_stack_3->SetBinError(1,79.60037);
   VbbHcc_tags_H_pt_stack_3->SetBinError(2,117.0697);
   VbbHcc_tags_H_pt_stack_3->SetBinError(3,113.4557);
   VbbHcc_tags_H_pt_stack_3->SetBinError(4,93.06487);
   VbbHcc_tags_H_pt_stack_3->SetBinError(5,61.10655);
   VbbHcc_tags_H_pt_stack_3->SetBinError(6,28.39089);
   VbbHcc_tags_H_pt_stack_3->SetBinError(7,8.366899);
   VbbHcc_tags_H_pt_stack_3->SetBinError(8,2.185329);
   VbbHcc_tags_H_pt_stack_3->SetBinError(9,0.4588168);
   VbbHcc_tags_H_pt_stack_3->SetEntries(129105);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_3,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_4 = new TH1D("VbbHcc_tags_H_pt_stack_4","",40,0,2000);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(1,4787.787);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(2,11184.33);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(3,11185.02);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(4,8609.782);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(5,4138.116);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(6,1169.765);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(7,134.9882);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(8,21.6873);
   VbbHcc_tags_H_pt_stack_4->SetBinContent(9,11.93934);
   VbbHcc_tags_H_pt_stack_4->SetBinError(1,113.4098);
   VbbHcc_tags_H_pt_stack_4->SetBinError(2,170.8033);
   VbbHcc_tags_H_pt_stack_4->SetBinError(3,171.992);
   VbbHcc_tags_H_pt_stack_4->SetBinError(4,154.5438);
   VbbHcc_tags_H_pt_stack_4->SetBinError(5,103.2047);
   VbbHcc_tags_H_pt_stack_4->SetBinError(6,66.08257);
   VbbHcc_tags_H_pt_stack_4->SetBinError(7,18.56657);
   VbbHcc_tags_H_pt_stack_4->SetBinError(8,7.75126);
   VbbHcc_tags_H_pt_stack_4->SetBinError(9,5.364446);
   VbbHcc_tags_H_pt_stack_4->SetEntries(17149);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_4,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_5 = new TH1D("VbbHcc_tags_H_pt_stack_5","",40,0,2000);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(1,339.4871);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(2,492.9197);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(3,238.6848);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(4,105.0729);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(5,50.10465);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(6,31.4769);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(7,19.42363);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(8,10.61962);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(9,10.444);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(10,3.033597);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(11,3.586589);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(12,2.627212);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(13,1.055613);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(15,1.207856);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(16,1.187017);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(18,0.3562396);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(19,0.4808949);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(23,0.3562396);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(30,0.3336772);
   VbbHcc_tags_H_pt_stack_5->SetBinContent(32,0.3617082);
   VbbHcc_tags_H_pt_stack_5->SetBinError(1,11.39325);
   VbbHcc_tags_H_pt_stack_5->SetBinError(2,14.27134);
   VbbHcc_tags_H_pt_stack_5->SetBinError(3,9.52341);
   VbbHcc_tags_H_pt_stack_5->SetBinError(4,6.388458);
   VbbHcc_tags_H_pt_stack_5->SetBinError(5,4.407521);
   VbbHcc_tags_H_pt_stack_5->SetBinError(6,3.417191);
   VbbHcc_tags_H_pt_stack_5->SetBinError(7,2.756226);
   VbbHcc_tags_H_pt_stack_5->SetBinError(8,1.97573);
   VbbHcc_tags_H_pt_stack_5->SetBinError(9,1.996068);
   VbbHcc_tags_H_pt_stack_5->SetBinError(10,1.021849);
   VbbHcc_tags_H_pt_stack_5->SetBinError(11,1.144047);
   VbbHcc_tags_H_pt_stack_5->SetBinError(12,1.012059);
   VbbHcc_tags_H_pt_stack_5->SetBinError(13,0.6095777);
   VbbHcc_tags_H_pt_stack_5->SetBinError(15,0.6981144);
   VbbHcc_tags_H_pt_stack_5->SetBinError(16,0.6931611);
   VbbHcc_tags_H_pt_stack_5->SetBinError(18,0.3562396);
   VbbHcc_tags_H_pt_stack_5->SetBinError(19,0.4808949);
   VbbHcc_tags_H_pt_stack_5->SetBinError(23,0.3562396);
   VbbHcc_tags_H_pt_stack_5->SetBinError(30,0.3336772);
   VbbHcc_tags_H_pt_stack_5->SetBinError(32,0.3617082);
   VbbHcc_tags_H_pt_stack_5->SetEntries(3629);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_5,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_6 = new TH1D("VbbHcc_tags_H_pt_stack_6","",40,0,2000);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(1,604.5804);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(2,890.0612);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(3,482.3904);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(4,222.8272);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(5,118.5608);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(6,67.38313);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(7,45.2039);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(8,26.82312);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(9,12.68894);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(10,9.199014);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(11,2.676728);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(12,2.331085);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(13,1.34875);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(14,0.6390767);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(15,1.877794);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(16,0.4845288);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(17,0.4583707);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(18,0.5002551);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(20,0.4290119);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(21,0.4772037);
   VbbHcc_tags_H_pt_stack_6->SetBinContent(24,0.2352945);
   VbbHcc_tags_H_pt_stack_6->SetBinError(1,12.25404);
   VbbHcc_tags_H_pt_stack_6->SetBinError(2,15.45475);
   VbbHcc_tags_H_pt_stack_6->SetBinError(3,11.04033);
   VbbHcc_tags_H_pt_stack_6->SetBinError(4,7.364364);
   VbbHcc_tags_H_pt_stack_6->SetBinError(5,5.532944);
   VbbHcc_tags_H_pt_stack_6->SetBinError(6,4.11576);
   VbbHcc_tags_H_pt_stack_6->SetBinError(7,3.318963);
   VbbHcc_tags_H_pt_stack_6->SetBinError(8,2.532703);
   VbbHcc_tags_H_pt_stack_6->SetBinError(9,1.769587);
   VbbHcc_tags_H_pt_stack_6->SetBinError(10,1.561256);
   VbbHcc_tags_H_pt_stack_6->SetBinError(11,0.7800276);
   VbbHcc_tags_H_pt_stack_6->SetBinError(12,0.7425972);
   VbbHcc_tags_H_pt_stack_6->SetBinError(13,0.5452646);
   VbbHcc_tags_H_pt_stack_6->SetBinError(14,0.3696898);
   VbbHcc_tags_H_pt_stack_6->SetBinError(15,0.6886938);
   VbbHcc_tags_H_pt_stack_6->SetBinError(16,0.356858);
   VbbHcc_tags_H_pt_stack_6->SetBinError(17,0.324124);
   VbbHcc_tags_H_pt_stack_6->SetBinError(18,0.353947);
   VbbHcc_tags_H_pt_stack_6->SetBinError(20,0.3037721);
   VbbHcc_tags_H_pt_stack_6->SetBinError(21,0.3386425);
   VbbHcc_tags_H_pt_stack_6->SetBinError(24,0.2352945);
   VbbHcc_tags_H_pt_stack_6->SetEntries(10826);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_6,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_7 = new TH1D("VbbHcc_tags_H_pt_stack_7","",40,0,2000);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(1,706.8374);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(2,886.7904);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(3,412.2648);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(4,184.235);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(5,93.04542);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(6,47.21596);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(7,30.17958);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(8,21.13867);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(9,8.67517);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(10,3.906842);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(11,2.024428);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(12,0.8793344);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(13,1.801082);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(14,0.6115908);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(15,0.2020662);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(16,0.7853196);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(17,0.2993306);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(22,0.2263142);
   VbbHcc_tags_H_pt_stack_7->SetBinContent(30,0.1706549);
   VbbHcc_tags_H_pt_stack_7->SetBinError(1,13.53269);
   VbbHcc_tags_H_pt_stack_7->SetBinError(2,18.3376);
   VbbHcc_tags_H_pt_stack_7->SetBinError(3,10.03786);
   VbbHcc_tags_H_pt_stack_7->SetBinError(4,6.872957);
   VbbHcc_tags_H_pt_stack_7->SetBinError(5,5.364652);
   VbbHcc_tags_H_pt_stack_7->SetBinError(6,3.374474);
   VbbHcc_tags_H_pt_stack_7->SetBinError(7,2.81093);
   VbbHcc_tags_H_pt_stack_7->SetBinError(8,2.275571);
   VbbHcc_tags_H_pt_stack_7->SetBinError(9,1.423186);
   VbbHcc_tags_H_pt_stack_7->SetBinError(10,0.9951092);
   VbbHcc_tags_H_pt_stack_7->SetBinError(11,0.685709);
   VbbHcc_tags_H_pt_stack_7->SetBinError(12,0.5225205);
   VbbHcc_tags_H_pt_stack_7->SetBinError(13,0.6922172);
   VbbHcc_tags_H_pt_stack_7->SetBinError(14,0.432522);
   VbbHcc_tags_H_pt_stack_7->SetBinError(15,0.2020662);
   VbbHcc_tags_H_pt_stack_7->SetBinError(16,0.4582727);
   VbbHcc_tags_H_pt_stack_7->SetBinError(17,0.2993306);
   VbbHcc_tags_H_pt_stack_7->SetBinError(22,0.2263142);
   VbbHcc_tags_H_pt_stack_7->SetBinError(30,0.1706549);
   VbbHcc_tags_H_pt_stack_7->SetEntries(10313);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_7,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_8 = new TH1D("VbbHcc_tags_H_pt_stack_8","",40,0,2000);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(1,179.8731);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(2,290.5836);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(3,166.6947);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(4,81.88206);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(5,43.74378);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(6,24.53289);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(7,14.51464);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(8,8.691485);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(9,5.21339);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(10,2.647353);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(11,1.66038);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(12,0.8926759);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(13,0.5826064);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(14,0.3391924);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(15,0.2441525);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(16,0.1421095);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(17,0.09359378);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(18,0.06008638);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(19,0.04013265);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(20,0.05049936);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(21,0.03609519);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(22,0.0213893);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(23,0.01289501);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(24,0.003348055);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(25,0.01221007);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(26,0.01254854);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(27,0.00387905);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(28,0.00571829);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(29,0.00244522);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(31,0.003334215);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(32,0.002455652);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(34,0.002315574);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(35,0.004804363);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(37,0.001892769);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(39,0.002142527);
   VbbHcc_tags_H_pt_stack_8->SetBinContent(41,0.002971343);
   VbbHcc_tags_H_pt_stack_8->SetBinError(1,0.7383959);
   VbbHcc_tags_H_pt_stack_8->SetBinError(2,0.9657928);
   VbbHcc_tags_H_pt_stack_8->SetBinError(3,0.7295342);
   VbbHcc_tags_H_pt_stack_8->SetBinError(4,0.4913944);
   VbbHcc_tags_H_pt_stack_8->SetBinError(5,0.371775);
   VbbHcc_tags_H_pt_stack_8->SetBinError(6,0.3106162);
   VbbHcc_tags_H_pt_stack_8->SetBinError(7,0.2144158);
   VbbHcc_tags_H_pt_stack_8->SetBinError(8,0.1562022);
   VbbHcc_tags_H_pt_stack_8->SetBinError(9,0.1625183);
   VbbHcc_tags_H_pt_stack_8->SetBinError(10,0.09186452);
   VbbHcc_tags_H_pt_stack_8->SetBinError(11,0.07707988);
   VbbHcc_tags_H_pt_stack_8->SetBinError(12,0.05016593);
   VbbHcc_tags_H_pt_stack_8->SetBinError(13,0.04068698);
   VbbHcc_tags_H_pt_stack_8->SetBinError(14,0.0302245);
   VbbHcc_tags_H_pt_stack_8->SetBinError(15,0.02537913);
   VbbHcc_tags_H_pt_stack_8->SetBinError(16,0.01940304);
   VbbHcc_tags_H_pt_stack_8->SetBinError(17,0.01559941);
   VbbHcc_tags_H_pt_stack_8->SetBinError(18,0.01286912);
   VbbHcc_tags_H_pt_stack_8->SetBinError(19,0.01026055);
   VbbHcc_tags_H_pt_stack_8->SetBinError(20,0.01171703);
   VbbHcc_tags_H_pt_stack_8->SetBinError(21,0.009755427);
   VbbHcc_tags_H_pt_stack_8->SetBinError(22,0.007290228);
   VbbHcc_tags_H_pt_stack_8->SetBinError(23,0.005783964);
   VbbHcc_tags_H_pt_stack_8->SetBinError(24,0.003348055);
   VbbHcc_tags_H_pt_stack_8->SetBinError(25,0.005626317);
   VbbHcc_tags_H_pt_stack_8->SetBinError(26,0.006311656);
   VbbHcc_tags_H_pt_stack_8->SetBinError(27,0.00387905);
   VbbHcc_tags_H_pt_stack_8->SetBinError(28,0.00408852);
   VbbHcc_tags_H_pt_stack_8->SetBinError(29,0.00244522);
   VbbHcc_tags_H_pt_stack_8->SetBinError(31,0.003334215);
   VbbHcc_tags_H_pt_stack_8->SetBinError(32,0.002455652);
   VbbHcc_tags_H_pt_stack_8->SetBinError(34,0.002315574);
   VbbHcc_tags_H_pt_stack_8->SetBinError(35,0.003416986);
   VbbHcc_tags_H_pt_stack_8->SetBinError(37,0.001892769);
   VbbHcc_tags_H_pt_stack_8->SetBinError(39,0.002142527);
   VbbHcc_tags_H_pt_stack_8->SetBinError(41,0.002971343);
   VbbHcc_tags_H_pt_stack_8->SetEntries(326928);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_8,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_9 = new TH1D("VbbHcc_tags_H_pt_stack_9","",40,0,2000);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(1,29.19884);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(2,61.33588);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(3,54.7781);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(4,34.27593);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(5,19.10107);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(6,10.82759);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(7,6.302876);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(8,3.985082);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(9,2.426548);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(10,1.557969);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(11,1.011381);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(12,0.7141427);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(13,0.4898879);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(14,0.35506);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(15,0.2521851);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(16,0.1698015);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(17,0.1352436);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(18,0.1010366);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(19,0.07927832);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(20,0.05547617);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(21,0.03545401);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(22,0.03392498);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(23,0.02096968);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(24,0.02314235);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(25,0.01659284);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(26,0.01570763);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(27,0.007221945);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(28,0.008732615);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(29,0.006047136);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(30,0.006354077);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(31,0.002614756);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(32,0.002606344);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(33,0.003229927);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(34,0.001903798);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(35,0.001273433);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(37,0.0006467411);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(38,0.0006089301);
   VbbHcc_tags_H_pt_stack_9->SetBinContent(41,0.001889094);
   VbbHcc_tags_H_pt_stack_9->SetBinError(1,0.1365308);
   VbbHcc_tags_H_pt_stack_9->SetBinError(2,0.1978536);
   VbbHcc_tags_H_pt_stack_9->SetBinError(3,0.1869568);
   VbbHcc_tags_H_pt_stack_9->SetBinError(4,0.1478023);
   VbbHcc_tags_H_pt_stack_9->SetBinError(5,0.1102277);
   VbbHcc_tags_H_pt_stack_9->SetBinError(6,0.08293535);
   VbbHcc_tags_H_pt_stack_9->SetBinError(7,0.06327888);
   VbbHcc_tags_H_pt_stack_9->SetBinError(8,0.05028536);
   VbbHcc_tags_H_pt_stack_9->SetBinError(9,0.03923057);
   VbbHcc_tags_H_pt_stack_9->SetBinError(10,0.03143879);
   VbbHcc_tags_H_pt_stack_9->SetBinError(11,0.02530094);
   VbbHcc_tags_H_pt_stack_9->SetBinError(12,0.02134518);
   VbbHcc_tags_H_pt_stack_9->SetBinError(13,0.01767787);
   VbbHcc_tags_H_pt_stack_9->SetBinError(14,0.01507574);
   VbbHcc_tags_H_pt_stack_9->SetBinError(15,0.01265919);
   VbbHcc_tags_H_pt_stack_9->SetBinError(16,0.01041367);
   VbbHcc_tags_H_pt_stack_9->SetBinError(17,0.009274908);
   VbbHcc_tags_H_pt_stack_9->SetBinError(18,0.00799813);
   VbbHcc_tags_H_pt_stack_9->SetBinError(19,0.007110672);
   VbbHcc_tags_H_pt_stack_9->SetBinError(20,0.005985931);
   VbbHcc_tags_H_pt_stack_9->SetBinError(21,0.004762142);
   VbbHcc_tags_H_pt_stack_9->SetBinError(22,0.004648694);
   VbbHcc_tags_H_pt_stack_9->SetBinError(23,0.003654462);
   VbbHcc_tags_H_pt_stack_9->SetBinError(24,0.003849332);
   VbbHcc_tags_H_pt_stack_9->SetBinError(25,0.003241048);
   VbbHcc_tags_H_pt_stack_9->SetBinError(26,0.003156905);
   VbbHcc_tags_H_pt_stack_9->SetBinError(27,0.002118013);
   VbbHcc_tags_H_pt_stack_9->SetBinError(28,0.00242668);
   VbbHcc_tags_H_pt_stack_9->SetBinError(29,0.001937949);
   VbbHcc_tags_H_pt_stack_9->SetBinError(30,0.002010127);
   VbbHcc_tags_H_pt_stack_9->SetBinError(31,0.001307693);
   VbbHcc_tags_H_pt_stack_9->SetBinError(32,0.001303785);
   VbbHcc_tags_H_pt_stack_9->SetBinError(33,0.001446836);
   VbbHcc_tags_H_pt_stack_9->SetBinError(34,0.001099387);
   VbbHcc_tags_H_pt_stack_9->SetBinError(35,0.0009005672);
   VbbHcc_tags_H_pt_stack_9->SetBinError(37,0.0006467411);
   VbbHcc_tags_H_pt_stack_9->SetBinError(38,0.0006089301);
   VbbHcc_tags_H_pt_stack_9->SetBinError(41,0.001090691);
   VbbHcc_tags_H_pt_stack_9->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_9,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_10 = new TH1D("VbbHcc_tags_H_pt_stack_10","",40,0,2000);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(1,2.755735);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(2,4.735695);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(3,2.971048);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(4,1.421179);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(5,0.6425777);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(6,0.324696);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(7,0.215778);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(8,0.1094951);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(9,0.05460125);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(10,0.03670752);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(11,0.01775486);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(12,0.010959);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(13,0.002353708);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(14,0.008414816);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(17,0.002900369);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(18,0.002496094);
   VbbHcc_tags_H_pt_stack_10->SetBinContent(19,0.005373985);
   VbbHcc_tags_H_pt_stack_10->SetBinError(1,0.08550334);
   VbbHcc_tags_H_pt_stack_10->SetBinError(2,0.1130331);
   VbbHcc_tags_H_pt_stack_10->SetBinError(3,0.08888123);
   VbbHcc_tags_H_pt_stack_10->SetBinError(4,0.0618328);
   VbbHcc_tags_H_pt_stack_10->SetBinError(5,0.04108455);
   VbbHcc_tags_H_pt_stack_10->SetBinError(6,0.02903596);
   VbbHcc_tags_H_pt_stack_10->SetBinError(7,0.02367556);
   VbbHcc_tags_H_pt_stack_10->SetBinError(8,0.01632063);
   VbbHcc_tags_H_pt_stack_10->SetBinError(9,0.0118127);
   VbbHcc_tags_H_pt_stack_10->SetBinError(10,0.009555206);
   VbbHcc_tags_H_pt_stack_10->SetBinError(11,0.006735207);
   VbbHcc_tags_H_pt_stack_10->SetBinError(12,0.004985143);
   VbbHcc_tags_H_pt_stack_10->SetBinError(13,0.002353708);
   VbbHcc_tags_H_pt_stack_10->SetBinError(14,0.004910755);
   VbbHcc_tags_H_pt_stack_10->SetBinError(17,0.002900369);
   VbbHcc_tags_H_pt_stack_10->SetBinError(18,0.002496094);
   VbbHcc_tags_H_pt_stack_10->SetBinError(19,0.003829101);
   VbbHcc_tags_H_pt_stack_10->SetEntries(5951);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_10,"");
   
   TH1D *VbbHcc_tags_H_pt_stack_11 = new TH1D("VbbHcc_tags_H_pt_stack_11","",40,0,2000);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(1,9294.472);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(2,22116.28);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(3,24056.86);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(4,15499.74);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(5,7474.865);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(6,4029.175);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(7,2303.017);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(8,1349.567);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(9,869.418);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(10,478.3269);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(11,356.5404);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(12,261.4849);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(13,125.4817);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(14,103.5773);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(15,93.02199);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(16,48.68128);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(17,17.95067);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(18,17.61512);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(19,21.92834);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(21,6.662534);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(22,8.548381);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(23,13.78601);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(24,6.945887);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(25,11.14182);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(28,6.554211);
   VbbHcc_tags_H_pt_stack_11->SetBinContent(35,6.766361);
   VbbHcc_tags_H_pt_stack_11->SetBinError(1,253.4885);
   VbbHcc_tags_H_pt_stack_11->SetBinError(2,394.327);
   VbbHcc_tags_H_pt_stack_11->SetBinError(3,412.9318);
   VbbHcc_tags_H_pt_stack_11->SetBinError(4,330.7595);
   VbbHcc_tags_H_pt_stack_11->SetBinError(5,226.9462);
   VbbHcc_tags_H_pt_stack_11->SetBinError(6,168.6907);
   VbbHcc_tags_H_pt_stack_11->SetBinError(7,126.6091);
   VbbHcc_tags_H_pt_stack_11->SetBinError(8,97.77164);
   VbbHcc_tags_H_pt_stack_11->SetBinError(9,78.8064);
   VbbHcc_tags_H_pt_stack_11->SetBinError(10,56.94616);
   VbbHcc_tags_H_pt_stack_11->SetBinError(11,50.13554);
   VbbHcc_tags_H_pt_stack_11->SetBinError(12,50.70272);
   VbbHcc_tags_H_pt_stack_11->SetBinError(13,29.0758);
   VbbHcc_tags_H_pt_stack_11->SetBinError(14,26.82204);
   VbbHcc_tags_H_pt_stack_11->SetBinError(15,26.38974);
   VbbHcc_tags_H_pt_stack_11->SetBinError(16,18.56139);
   VbbHcc_tags_H_pt_stack_11->SetBinError(17,10.54795);
   VbbHcc_tags_H_pt_stack_11->SetBinError(18,10.44367);
   VbbHcc_tags_H_pt_stack_11->SetBinError(19,12.76962);
   VbbHcc_tags_H_pt_stack_11->SetBinError(21,6.662534);
   VbbHcc_tags_H_pt_stack_11->SetBinError(22,8.548381);
   VbbHcc_tags_H_pt_stack_11->SetBinError(23,10.02535);
   VbbHcc_tags_H_pt_stack_11->SetBinError(24,6.945887);
   VbbHcc_tags_H_pt_stack_11->SetBinError(25,9.38391);
   VbbHcc_tags_H_pt_stack_11->SetBinError(28,6.554211);
   VbbHcc_tags_H_pt_stack_11->SetBinError(35,6.766361);
   VbbHcc_tags_H_pt_stack_11->SetEntries(14113);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_stack_11,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_pt__29 = new TH1D("VbbHcc_tags_H_pt__29","",40,0,2000);
   VbbHcc_tags_H_pt__29->SetBinContent(1,8480976);
   VbbHcc_tags_H_pt__29->SetBinContent(2,1.327133e+07);
   VbbHcc_tags_H_pt__29->SetBinContent(3,4836712);
   VbbHcc_tags_H_pt__29->SetBinContent(4,341459);
   VbbHcc_tags_H_pt__29->SetBinContent(5,12118.08);
   VbbHcc_tags_H_pt__29->SetBinContent(8,1248.5);
   VbbHcc_tags_H_pt__29->SetBinError(1,124502.2);
   VbbHcc_tags_H_pt__29->SetBinError(2,195843.6);
   VbbHcc_tags_H_pt__29->SetBinError(3,99665.53);
   VbbHcc_tags_H_pt__29->SetBinError(4,24096.8);
   VbbHcc_tags_H_pt__29->SetBinError(5,4429.709);
   VbbHcc_tags_H_pt__29->SetBinError(8,1248.5);
   VbbHcc_tags_H_pt__29->SetEntries(16133);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt__29->SetLineColor(ci);
   VbbHcc_tags_H_pt__29->SetLineWidth(2);
   VbbHcc_tags_H_pt__29->SetMarkerStyle(20);
   VbbHcc_tags_H_pt__29->SetMarkerSize(1.2);
   VbbHcc_tags_H_pt__29->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt__29->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__29->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__29->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__29->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__29->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__29->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__29->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__29->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_pt__29->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__29->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__29->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_pt__29->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_pt__29->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__29->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_pt_fx1029[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_H_pt_fy1029[40] = {
   1082598,
   1926718,
   1098580,
   422008.3,
   177213.7,
   83007.21,
   43060.87,
   24044.72,
   14034.63,
   8388.571,
   5304.133,
   3461.216,
   2216.453,
   1500.089,
   1012.235,
   689.3639,
   462.6553,
   338.726,
   248.6627,
   160.3075,
   118.2303,
   95.31782,
   74.27075,
   48.76769,
   40.95388,
   22.97362,
   18.39675,
   18.38808,
   13.21702,
   5.608117,
   6.946722,
   4.168337,
   3.621331,
   2.558599,
   8.025914,
   1.740775,
   0.9308564,
   0.8281692,
   0.5923446,
   0.2604904};
   Double_t Graph_from_VbbHcc_tags_H_pt_fex1029[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_H_pt_fey1029[40] = {
   424.8506,
   608.1221,
   556.4906,
   421.5879,
   285.0468,
   202.4999,
   142.9667,
   109.2321,
   86.94997,
   63.43336,
   54.93759,
   54.0911,
   32.64505,
   29.35188,
   28.38102,
   20.56748,
   12.61312,
   12.17212,
   13.68563,
   4.410579,
   7.460609,
   9.083134,
   10.36935,
   7.291626,
   9.541232,
   1.557802,
   1.412408,
   6.633741,
   1.638045,
   0.7642231,
   1.064839,
   0.7759384,
   0.6985592,
   0.5990404,
   6.777259,
   0.4460023,
   0.2800274,
   0.3653317,
   0.3147621,
   0.1335006};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_pt_fx1029,Graph_from_VbbHcc_tags_H_pt_fy1029,Graph_from_VbbHcc_tags_H_pt_fex1029,Graph_from_VbbHcc_tags_H_pt_fey1029);
   gre->SetName("Graph_from_VbbHcc_tags_H_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_pt1029 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_pt1029","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->SetMinimum(0.1142909);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->SetMaximum(2120059);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_pt1029->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_pt1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_pt1029);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt","QCD","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_11","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_10","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_9","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_8","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_7","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_6","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_5","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_4","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_3","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_pt","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__30 = new TH1D("data_mc_ratio__30","",40,0,2000);
   data_mc_ratio__30->SetBinContent(1,7.833908);
   data_mc_ratio__30->SetBinContent(2,6.88805);
   data_mc_ratio__30->SetBinContent(3,4.402695);
   data_mc_ratio__30->SetBinContent(4,0.8091288);
   data_mc_ratio__30->SetBinContent(5,0.06838121);
   data_mc_ratio__30->SetBinContent(8,0.05192407);
   data_mc_ratio__30->SetBinError(1,0.1150031);
   data_mc_ratio__30->SetBinError(2,0.1016462);
   data_mc_ratio__30->SetBinError(3,0.09072217);
   data_mc_ratio__30->SetBinError(4,0.0571003);
   data_mc_ratio__30->SetBinError(5,0.02499643);
   data_mc_ratio__30->SetBinError(8,0.05192407);
   data_mc_ratio__30->SetMinimum(0.4);
   data_mc_ratio__30->SetMaximum(1.6);
   data_mc_ratio__30->SetEntries(10475.97);
   data_mc_ratio__30->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__30->SetLineColor(ci);
   data_mc_ratio__30->SetLineWidth(2);
   data_mc_ratio__30->SetMarkerStyle(20);
   data_mc_ratio__30->SetMarkerSize(1.2);
   data_mc_ratio__30->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__30->GetXaxis()->SetRange(7,30);
   data_mc_ratio__30->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__30->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__30->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__30->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__30->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__30->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__30->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__30->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__30->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1030[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1030[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1030[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1030[40] = {
   0.000392436,
   0.0003156259,
   0.0005065546,
   0.0009990037,
   0.001608492,
   0.002439546,
   0.003320106,
   0.004542872,
   0.006195387,
   0.007561879,
   0.01035751,
   0.01562777,
   0.01472851,
   0.01956676,
   0.02803797,
   0.02983544,
   0.02726245,
   0.03593501,
   0.05503692,
   0.02751324,
   0.06310236,
   0.09529313,
   0.1396155,
   0.1495176,
   0.2329751,
   0.06780828,
   0.07677485,
   0.3607631,
   0.1239345,
   0.1362709,
   0.1532866,
   0.1861506,
   0.1929012,
   0.2341283,
   0.8444221,
   0.2562091,
   0.3008276,
   0.4411317,
   0.5313834,
   0.5124969};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1030,Graph_from_mc_statistical_error_fy1030,Graph_from_mc_statistical_error_fex1030,Graph_from_mc_statistical_error_fey1030);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1030 = new TH1F("Graph_Graph_from_mc_statistical_error1030","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1030->SetMinimum(0.1400201);
   Graph_Graph_from_mc_statistical_error1030->SetMaximum(2.013307);
   Graph_Graph_from_mc_statistical_error1030->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1030->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1030);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->Modified();
   H_pt_VbbHcc_18->cd();
   H_pt_VbbHcc_18->SetSelected(H_pt_VbbHcc_18);
}
