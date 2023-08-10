void Z_dR_Bj0_tags_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Thu Aug 10 12:31:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(0,0,1,1);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetFillStyle(4000);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.869589,6.314516,12.36412);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.00278e+10);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",30,0,6);
   st_stack_51->SetMinimum(0.001398442);
   st_stack_51->SetMaximum(6.930275e+10);
   st_stack_51->SetDirectory(0);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->GetXaxis()->SetRange(1,30);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetLabelSize(0.035);
   st_stack_51->GetXaxis()->SetTitleSize(0.035);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/0.2");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.05);
   st_stack_51->GetYaxis()->SetTitleSize(0.057);
   st_stack_51->GetYaxis()->SetTitleOffset(1.2);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetLabelSize(0.035);
   st_stack_51->GetZaxis()->SetTitleSize(0.035);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,5668.461);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,29372.81);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,30758.75);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,20729.88);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,20851.61);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,15815.96);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,14529.71);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,7621.747);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,8391.572);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,9458.008);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,8988.705);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,5918.401);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,6904.631);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5228.501);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,4563.488);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3691.119);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,3159.326);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2146.676);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,3080.713);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,2115.419);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1511.777);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,1344.038);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,989.6549);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,353.7101);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,331.5429);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,541.5033);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,546.3159);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,902.7205);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,40.71863);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,41.71731);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,32.23734);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,496.8981);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,2162.615);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,3208.116);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,1927.409);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,2058.012);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,1756.551);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,2732.565);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1098.839);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,1220.003);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1423.625);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1373.728);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1021.633);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,1204.268);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,947.5443);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,865.3466);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,777.2496);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,766.5412);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,426.8983);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,846.9687);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,659.4791);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,540.0607);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,537.2983);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,389.4389);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,90.28434);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,84.85336);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,374.4219);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,375.6332);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,527.6277);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,32.49478);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,33.39486);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,31.92926);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(10231);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,29.26874);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,127.817);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,171.2643);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,147.078);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,119.6693);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,100.5454);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,84.65331);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,63.24279);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,61.10704);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,56.58631);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,47.00831);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,45.89261);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,35.40609);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,31.44313);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,29.73886);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,28.45895);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,18.22067);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,16.02904);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,15.92338);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,13.01981);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,9.610262);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,6.434061);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,5.848388);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,5.760213);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.631012);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.518095);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,2.329887);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,1.894058);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.8707721);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.4696362);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.2430037);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,2.285157);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,4.566666);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,5.425357);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,4.979294);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,4.471249);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,4.13973);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,3.792467);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,3.144366);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,3.232976);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,3.085826);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.729892);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.837271);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,2.433814);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,2.2251);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,2.258349);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,2.174266);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.641287);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.696816);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.716701);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.535221);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,1.251089);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.9907587);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.9682058);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,1.115916);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.5885404);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.3914162);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.6685883);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.591421);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.3203964);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.2871988);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.1086746);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(14890);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,384.3575);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,2256.054);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,3127.282);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,3005.06);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,2522.179);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,2024.995);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,1658.91);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,1406.641);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,1212.959);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,1070.76);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,966.7766);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,886.5625);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,807.2214);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,695.2065);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,602.7158);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,515.6216);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,423.567);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,352.0942);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,287.2004);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,222.8062);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,179.6326);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,137.852);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,107.3223);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,81.19794);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,57.69211);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,43.45331);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,28.27997);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,18.40043);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,12.82979);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,8.231057);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,15.99189);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,4.859838);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,11.76193);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,13.88018);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,13.6195);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,12.48765);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,11.18205);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,10.12497);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,9.31609);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,8.64909);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,8.13633);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,7.731349);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,7.415422);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,7.076415);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,6.555356);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,6.107283);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,5.653698);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,5.126046);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,4.668463);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,4.215268);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,3.70085);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,3.330618);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.903503);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,2.564597);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,2.228273);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.872307);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.630577);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,1.314601);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,1.048073);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.8819627);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.7018882);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.9884228);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(421807);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,105.7462);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,448.6942);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,505.7183);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,376.1101);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,293.8749);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,223.0503);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,169.1623);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,128.8067);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,141.504);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,133.1467);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,116.2769);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,100.6614);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,88.76473);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,89.78739);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,67.68576);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,61.73034);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,47.76008);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,40.09572);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,31.61599);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,29.69672);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,22.81032);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,18.08033);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,8.474842);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,12.66147);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,9.374267);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,3.810512);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,4.346363);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,2.652344);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,1.025346);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.8401998);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,1.614456);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,4.173031);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,14.2423);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,16.24379);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,12.64983);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,12.2472);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,10.5946);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,8.929018);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.003653);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,9.388762);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,8.457167);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,8.929167);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,9.38062);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,7.436977);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,8.494307);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,4.315179);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,5.616558);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,3.619883);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.435839);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.101322);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,2.970562);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,2.639452);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,2.225676);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,1.216626);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.846494);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,1.524433);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.8849273);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.806809);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.8041428);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.3277939);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.3005151);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.6072927);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(18660);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,20.12332);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,48.82688);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,56.33901);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,36.55671);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,28.25714);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,18.26973);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,12.38632);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,11.09518);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,11.46798);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,9.254659);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,5.121482);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,10.59575);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,8.012701);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,4.95492);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,10.27629);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,2.517823);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,4.999382);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,2.920331);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,3.439779);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,5.416885);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,2.838015);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,3.211123);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,0.06944348);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.4267172);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.772093);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,1.417581);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.3350496);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,2.651502);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.310333);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0009154413);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(31,0.2531327);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,4.390113);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,4.156149);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,11.95404);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,5.874544);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,4.604063);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,3.360057);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,2.11288);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,2.456576);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,2.519476);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,2.366442);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,0.9350253);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,3.726883);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,2.383727);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.9061342);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,3.135966);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,0.6212949);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.9715297);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,0.7452032);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.9214921);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,2.972779);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,2.110235);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,2.109524);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,0.04817603);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2117264);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.436397);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.5938591);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.1710469);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,2.10592);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.1849571);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0009154413);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(31,0.1789919);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(2359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(3,0.9040853);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(3,0.6392849);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,2.479394);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.9371228);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(22,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,8.382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,4.47063);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,3.632387);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.235315);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,2.514729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.676486);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.530415);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,1.117657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,1.007443);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.7903031);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.8382431);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.6844226);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.5588287);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(25,0.2794144);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,1.71662);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,8.487096);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,9.95228);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,7.693931);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,5.408152);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,4.130402);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,3.145231);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,2.80465);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,2.553215);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,2.505213);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,2.450355);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,2.541786);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,2.054915);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.684619);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,1.275464);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,1.060601);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.7680216);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.5211575);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.3565815);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.2811508);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1988627);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.1851481);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.1394325);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.1211463);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.1120032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.07085914);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.02971512);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.02514357);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.009143115);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.009143115);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.06264034);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.1392825);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.1508268);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.1326146);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.1111838);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.09716576);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.08478976);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.08006753);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.07639427);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.07567274);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.07483962);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.07622309);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.06853525);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.06205373);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.05399472);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.04923718);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.04189901);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.0345145);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.02854937);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.02535051);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.02132032);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.02057201);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.0178525);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.01664072);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.01600045);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.01272668);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.008241492);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.00758107);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(30,0.003232579);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.004571557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.6486054);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,3.608464);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,4.760215);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,3.960785);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,2.924089);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,2.087699);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,1.573822);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,1.32523);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,1.149963);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,1.139232);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,1.033715);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.9496584);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.8435447);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.6855663);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.5675297);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.4560506);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.3642444);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.2903224);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.2110352);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1669205);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.1389017);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.111479);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.09419085);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.05961446);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.04053784);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.02980723);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.02503807);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.00894217);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.005961446);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.001192289);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.002384579);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01966374);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.04638067);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.05327079);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.04859219);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.04175141);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.03527847);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.03063047);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.02810745);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.0261829);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.02606045);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.02482425);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.02379357);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.02242487);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.02021625);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.01839374);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.01648855);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.01473575);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.01315577);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.01121639);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.009975408);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.009099753);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.008152155);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.007493422);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.005961446);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.004915935);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.004215379);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.003863459);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.002308858);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001885175);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.0008430758);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.001192289);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.01593033);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.04323948);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.03413643);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.02503338);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.009103048);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.006827286);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.0060211);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.009919816);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.008813988);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.007547848);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.004551524);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.003941735);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(18,0.003218413);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.02547083);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.009589018);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.006292793);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002397254);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.003296225);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.002696911);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.001797941);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(24,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.002762699);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001695115);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.0013732);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.000947598);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0008475574);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.0009938492);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0008989704);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0007340063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(23,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(24,0.0005190208);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__139 = new TH1D("VbbHcc_tags_Z_dR_Bj0__139","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(1,9404);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(2,42899);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(3,43225);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(4,34612);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(5,27613);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(6,22067);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(7,18120);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(8,15091);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(9,13288);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(10,11871);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(11,10759);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(12,10043);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(13,8971);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(14,8011);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(15,7046);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(16,6057);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(17,4924);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(18,4134);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(19,3492);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(20,2782);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(21,2359);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(22,1889);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(23,1559);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(24,1185);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(25,942);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(26,706);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(27,459);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(28,251);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(29,196);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(30,102);
   VbbHcc_tags_Z_dR_Bj0__139->SetBinContent(31,178);
   VbbHcc_tags_Z_dR_Bj0__139->SetEntries(314264);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__139->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__139->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__139->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__139->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__139->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__139->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101[30] = {
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
   5.9};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101[30] = {
   6213.941,
   32278.7,
   34645.88,
   24316.93,
   23829.47,
   18191.85,
   16463.53,
   9239.066,
   9825.751,
   10734,
   10130.24,
   6968.758,
   7849.805,
   6055.338,
   5277.427,
   4302.086,
   3655.014,
   2559.191,
   3420.019,
   2387.087,
   1727.006,
   1510.266,
   1111.883,
   454.2923,
   402.4447,
   591.8035,
   581.6622,
   928.3529,
   55.76998,
   51.26488};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101[30] = {
   496.9652,
   2162.704,
   3208.215,
   1927.514,
   2058.097,
   1756.627,
   2732.602,
   1098.916,
   1220.077,
   1423.679,
   1373.782,
   1021.715,
   1204.317,
   947.6086,
   865.3878,
   777.294,
   766.5693,
   426.9418,
   846.9872,
   659.5048,
   540.083,
   537.3159,
   389.4506,
   90.33855,
   84.89132,
   374.4272,
   375.637,
   527.6339,
   32.51051,
   33.40482};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1101,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1101);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMinimum(16.07405);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetMaximum(41637.72);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01101);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__140 = new TH1D("data_mc_ratio__140","",30,0,6);
   data_mc_ratio__140->SetBinContent(1,1.513371);
   data_mc_ratio__140->SetBinContent(2,1.329019);
   data_mc_ratio__140->SetBinContent(3,1.247623);
   data_mc_ratio__140->SetBinContent(4,1.42337);
   data_mc_ratio__140->SetBinContent(5,1.158775);
   data_mc_ratio__140->SetBinContent(6,1.213016);
   data_mc_ratio__140->SetBinContent(7,1.100614);
   data_mc_ratio__140->SetBinContent(8,1.63339);
   data_mc_ratio__140->SetBinContent(9,1.352365);
   data_mc_ratio__140->SetBinContent(10,1.105925);
   data_mc_ratio__140->SetBinContent(11,1.062067);
   data_mc_ratio__140->SetBinContent(12,1.441146);
   data_mc_ratio__140->SetBinContent(13,1.142831);
   data_mc_ratio__140->SetBinContent(14,1.322965);
   data_mc_ratio__140->SetBinContent(15,1.33512);
   data_mc_ratio__140->SetBinContent(16,1.407922);
   data_mc_ratio__140->SetBinContent(17,1.34719);
   data_mc_ratio__140->SetBinContent(18,1.615354);
   data_mc_ratio__140->SetBinContent(19,1.021047);
   data_mc_ratio__140->SetBinContent(20,1.165437);
   data_mc_ratio__140->SetBinContent(21,1.365948);
   data_mc_ratio__140->SetBinContent(22,1.250773);
   data_mc_ratio__140->SetBinContent(23,1.402126);
   data_mc_ratio__140->SetBinContent(24,2.608453);
   data_mc_ratio__140->SetBinContent(25,2.340694);
   data_mc_ratio__140->SetBinContent(26,1.192964);
   data_mc_ratio__140->SetBinContent(27,0.7891178);
   data_mc_ratio__140->SetBinContent(28,0.2703713);
   data_mc_ratio__140->SetBinContent(29,3.514435);
   data_mc_ratio__140->SetBinContent(30,1.989666);
   data_mc_ratio__140->SetBinContent(31,3.535158);
   data_mc_ratio__140->SetBinError(1,0.01560591);
   data_mc_ratio__140->SetBinError(2,0.006416639);
   data_mc_ratio__140->SetBinError(3,0.006000893);
   data_mc_ratio__140->SetBinError(4,0.00765076);
   data_mc_ratio__140->SetBinError(5,0.006973365);
   data_mc_ratio__140->SetBinError(6,0.008165727);
   data_mc_ratio__140->SetBinError(7,0.008176286);
   data_mc_ratio__140->SetBinError(8,0.0132963);
   data_mc_ratio__140->SetBinError(9,0.01173178);
   data_mc_ratio__140->SetBinError(10,0.01015038);
   data_mc_ratio__140->SetBinError(11,0.0102392);
   data_mc_ratio__140->SetBinError(12,0.01438058);
   data_mc_ratio__140->SetBinError(13,0.01206595);
   data_mc_ratio__140->SetBinError(14,0.01478104);
   data_mc_ratio__140->SetBinError(15,0.01590557);
   data_mc_ratio__140->SetBinError(16,0.01809046);
   data_mc_ratio__140->SetBinError(17,0.01919862);
   data_mc_ratio__140->SetBinError(18,0.02512364);
   data_mc_ratio__140->SetBinError(19,0.0172786);
   data_mc_ratio__140->SetBinError(20,0.02209583);
   data_mc_ratio__140->SetBinError(21,0.02812354);
   data_mc_ratio__140->SetBinError(22,0.02877812);
   data_mc_ratio__140->SetBinError(23,0.03551108);
   data_mc_ratio__140->SetBinError(24,0.07577463);
   data_mc_ratio__140->SetBinError(25,0.07626394);
   data_mc_ratio__140->SetBinError(26,0.04489778);
   data_mc_ratio__140->SetBinError(27,0.03683286);
   data_mc_ratio__140->SetBinError(28,0.01706569);
   data_mc_ratio__140->SetBinError(29,0.2510311);
   data_mc_ratio__140->SetBinError(30,0.1970063);
   data_mc_ratio__140->SetBinError(31,2.258869);
   data_mc_ratio__140->SetMinimum(0.4);
   data_mc_ratio__140->SetMaximum(1.6);
   data_mc_ratio__140->SetEntries(207.9097);
   data_mc_ratio__140->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__140->SetLineColor(ci);
   data_mc_ratio__140->SetLineWidth(2);
   data_mc_ratio__140->SetMarkerStyle(20);
   data_mc_ratio__140->SetMarkerSize(1.2);
   data_mc_ratio__140->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__140->GetXaxis()->SetRange(1,30);
   data_mc_ratio__140->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__140->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__140->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__140->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__140->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__140->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__140->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__140->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__140->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1102[30] = {
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
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1102[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1102[30] = {
   0.07997584,
   0.06700097,
   0.09260017,
   0.07926634,
   0.08636772,
   0.09656123,
   0.165979,
   0.1189423,
   0.1241714,
   0.1326327,
   0.135612,
   0.1466136,
   0.15342,
   0.1564914,
   0.1639791,
   0.1806784,
   0.2097309,
   0.1668269,
   0.2476557,
   0.2762801,
   0.3127279,
   0.3557756,
   0.3502621,
   0.1988556,
   0.2109391,
   0.6326885,
   0.6457993,
   0.5683548,
   0.5829391,
   0.6516123};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1102,Graph_from_mc_statistical_error_fy1102,Graph_from_mc_statistical_error_fex1102,Graph_from_mc_statistical_error_fey1102);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1102 = new TH1F("Graph_Graph_from_mc_statistical_error1102","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1102->SetMinimum(0.2180653);
   Graph_Graph_from_mc_statistical_error1102->SetMaximum(1.781935);
   Graph_Graph_from_mc_statistical_error1102->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1102->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1102);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
