void H_dR_tags_all()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Thu Aug 10 12:23:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(0,0,1,1);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-175.4549,6.525,175579.5);
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
   st->SetMaximum(150480);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(0.3);
   st_stack_24->SetMaximum(158004);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetLabelSize(0.035);
   st_stack_24->GetXaxis()->SetTitleSize(0.035);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetLabelSize(0.05);
   st_stack_24->GetYaxis()->SetTitleSize(0.057);
   st_stack_24->GetYaxis()->SetTitleOffset(1.2);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetLabelSize(0.035);
   st_stack_24->GetZaxis()->SetTitleSize(0.035);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,38513.34);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,32211.64);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,22400.26);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,20553.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,17455.43);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,19335.69);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,17274.84);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,23788.44);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,22448);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,26798.07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,33210.24);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,36905.07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,36494.14);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,62994.52);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,38474.26);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,40436.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,31338.04);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,28546.26);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,18290.49);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,12552.27);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,12943.53);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,23943.33);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,7945.685);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,7000.216);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,5888.287);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,3719.557);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,6382.03);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(30,3863.642);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(31,4015.155);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,3508.116);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,2499.51);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,2111.58);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,1987.821);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,1882.268);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,2013.126);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,1785.205);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,2680.159);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,2604.305);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,2415.683);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,3576.22);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,3430.159);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,3340.624);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,21945.24);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,3185.317);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,2943.302);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,2389.809);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,3258.368);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,2189.712);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,1290.894);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,2661.427);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,15305.76);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,1253.942);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,2327.239);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,1141.446);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,738.526);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,2093.631);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(30,943.8754);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(31,972.0149);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(29294);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,0.01814927);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,105.2754);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,126.059);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,112.2996);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,117.3978);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,115.5102);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,105.0925);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,121.6447);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,125.8458);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,127.3407);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,149.5997);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,143.8768);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,165.1596);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,185.6752);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,201.5731);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,172.4142);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,153.3175);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,134.4951);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,120.5253);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,103.1887);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,85.49731);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,70.0802);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,55.66305);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,51.407);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,39.43658);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,30.47);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,26.47891);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,20.46049);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(30,16.35844);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(31,14.38932);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,0.1027755);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,4.65226);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,5.077452);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,4.740338);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,4.933072);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,4.868902);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,4.537101);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,4.970909);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,5.248742);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,5.058377);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,5.546204);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,5.394644);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,5.811055);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,6.042384);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,6.406615);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,5.969029);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,5.438303);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,5.049083);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,4.826049);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,4.433055);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,4.159021);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,3.66302);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,3.208458);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,3.144962);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,2.801543);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,2.405688);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,2.420765);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,2.081588);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(30,1.712049);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(31,1.692382);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(34591);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_3 = new TH1D("VbbHcc_tags_H_dR_all_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(2,1.985021);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(3,1806.844);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(4,2536.67);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(5,2568.362);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(6,2663.227);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(7,2618.762);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(8,2572.052);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(9,2537.289);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(10,2637.638);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(11,2787.313);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(12,2993.923);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(13,3247.951);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(14,3486.199);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(15,3733.051);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(16,3876.137);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(17,3661.928);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(18,3356.873);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(19,2969.629);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(20,2574.286);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(21,2173.633);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(22,1784.347);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(23,1453.522);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(24,1188.834);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(25,957.0578);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(26,777.6764);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(27,642.505);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(28,529.0625);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(29,423.7282);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(30,282.839);
   VbbHcc_tags_H_dR_all_stack_3->SetBinContent(31,237.3109);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(2,0.392776);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(3,12.74457);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(4,14.49673);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(5,14.37292);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(6,15.05715);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(7,14.78041);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(8,14.4713);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(9,14.32064);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(10,15.24008);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(11,14.97887);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(12,15.95286);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(13,16.24576);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(14,16.86484);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(15,17.64032);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(16,18.28717);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(17,18.14159);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(18,16.51177);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(19,15.95137);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(20,14.91481);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(21,13.7402);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(22,12.21478);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(23,10.97594);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(24,10.47002);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(25,9.434489);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(26,7.975442);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(27,8.018384);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(28,6.553299);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(29,5.824344);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(30,4.677531);
   VbbHcc_tags_H_dR_all_stack_3->SetBinError(31,4.282095);
   VbbHcc_tags_H_dR_all_stack_3->SetEntries(880955);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_4 = new TH1D("VbbHcc_tags_H_dR_all_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(2,0.03310702);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(3,359.0658);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(4,458.2926);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(5,399.1154);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(6,376.1469);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(7,317.9464);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(8,279.6218);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(9,296.3805);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(10,286.5949);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(11,327.5644);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(12,389.4388);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(13,428.1438);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(14,454.9185);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(15,514.1894);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(16,568.8547);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(17,532.3205);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(18,500.6462);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(19,415.0396);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(20,351.8496);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(21,286.6386);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(22,214.91);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(23,173.3516);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(24,131.6837);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(25,115.9555);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(26,109.1173);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(27,75.4646);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(28,69.37752);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(29,56.69009);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(30,39.3715);
   VbbHcc_tags_H_dR_all_stack_4->SetBinContent(31,27.91495);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(2,0.03310702);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(3,13.76737);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(4,12.71769);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(5,14.01945);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(6,16.06941);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(7,14.46698);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(8,11.12187);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(9,13.46848);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(10,13.64185);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(11,13.19693);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(12,17.71445);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(13,15.74794);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(14,16.47353);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(15,16.97156);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(16,22.50517);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(17,17.62187);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(18,19.36105);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(19,16.39182);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(20,14.84324);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(21,14.42959);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(22,13.7286);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(23,10.85151);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(24,8.37666);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(25,9.790206);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(26,8.617488);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(27,5.722943);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(28,5.472991);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(29,4.605143);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(30,4.652526);
   VbbHcc_tags_H_dR_all_stack_4->SetBinError(31,2.68804);
   VbbHcc_tags_H_dR_all_stack_4->SetEntries(50972);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_5 = new TH1D("VbbHcc_tags_H_dR_all_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(3,44.4512);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(4,39.5592);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(5,33.73211);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(6,29.61126);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(7,27.43878);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(8,32.97395);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(9,35.00446);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(10,25.68092);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(11,36.6624);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(12,40.5462);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(13,37.9592);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(14,46.23831);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(15,45.22746);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(16,39.51156);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(17,48.97429);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(18,44.85496);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(19,49.33501);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(20,37.25182);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(21,20.25715);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(22,19.18403);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(23,18.04089);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(24,10.45414);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(25,15.10941);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(26,5.327084);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(27,10.90413);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(28,17.30075);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(29,5.3291);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(30,4.474363);
   VbbHcc_tags_H_dR_all_stack_5->SetBinContent(31,2.195951);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(3,8.357603);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(4,5.267708);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(5,4.363844);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(6,9.818114);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(7,3.232101);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(8,8.788774);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(9,6.890132);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(10,3.345006);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(11,5.333958);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(12,5.340568);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(13,4.280838);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(14,6.177968);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(15,4.554815);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(16,4.50744);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(17,5.592931);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(18,5.846635);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(19,5.93563);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(20,5.170791);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(21,2.147211);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(22,3.441458);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(23,3.071698);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(24,1.527891);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(25,3.773712);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(26,0.9780303);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(27,3.021366);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(28,7.679048);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(29,1.635562);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(30,0.9042875);
   VbbHcc_tags_H_dR_all_stack_5->SetBinError(31,0.5314435);
   VbbHcc_tags_H_dR_all_stack_5->SetEntries(7669);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_6 = new TH1D("VbbHcc_tags_H_dR_all_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(3,0.7592397);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(4,0.843279);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(5,1.046187);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(6,0.1552273);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(9,0.1445668);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(12,0.1344897);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(13,0.625511);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(15,0.2480554);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(16,0.2956484);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(18,0.5183405);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(20,0.1535887);
   VbbHcc_tags_H_dR_all_stack_6->SetBinContent(24,0.268632);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(3,0.5375181);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(4,0.6072828);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(5,0.7182536);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(6,0.1552273);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(9,0.1445668);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(12,0.1344897);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(13,0.5099028);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(15,0.1835582);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(16,0.2096251);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(18,0.4010702);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(20,0.1535887);
   VbbHcc_tags_H_dR_all_stack_6->SetBinError(24,0.268632);
   VbbHcc_tags_H_dR_all_stack_6->SetEntries(20);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_7 = new TH1D("VbbHcc_tags_H_dR_all_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(3,1.472022);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(4,1.315734);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(5,1.370932);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(7,0.3568839);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(9,0.11362);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(10,0.1142288);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(12,0.3672142);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(13,0.6104092);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(14,0.1156937);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(15,0.2400818);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(16,0.2418729);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(17,0.4715772);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(18,0.6102047);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(19,0.5882925);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(20,0.2096786);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(21,0.2256252);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(24,0.3984223);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(26,0.1194362);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(27,0.1148755);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(28,0.1115529);
   VbbHcc_tags_H_dR_all_stack_7->SetBinContent(30,0.08719582);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(3,0.6118713);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(4,0.6517304);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(5,0.7418367);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(7,0.2063106);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(9,0.11362);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(10,0.1142288);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(12,0.21221);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(13,0.5061632);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(14,0.1156937);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(15,0.1697674);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(16,0.1711769);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(17,0.2362922);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(18,0.410064);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(19,0.2632849);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(20,0.152295);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(21,0.1595429);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(24,0.2983433);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(26,0.1194362);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(27,0.1148755);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(28,0.1115529);
   VbbHcc_tags_H_dR_all_stack_7->SetBinError(30,0.08719582);
   VbbHcc_tags_H_dR_all_stack_7->SetEntries(57);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_8 = new TH1D("VbbHcc_tags_H_dR_all_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(3,10.6813);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(4,9.581569);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(5,11.81529);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(6,6.153754);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(7,4.119175);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(8,3.002042);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(9,2.049897);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(10,3.523008);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(11,3.519816);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(12,4.551451);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(13,4.043135);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(14,8.54905);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(15,12.45028);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(16,17.17528);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(17,11.07597);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(18,15.12699);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(19,10.60894);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(20,6.18717);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(21,6.529852);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(22,3.503475);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(23,1.678588);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(24,2.37418);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(25,0.8801375);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(26,1.880904);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(27,1.214701);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(28,3.078466);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(29,0.5915045);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(30,1.077162);
   VbbHcc_tags_H_dR_all_stack_8->SetBinContent(31,0.2223047);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(3,1.813951);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(4,1.707278);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(5,1.901035);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(6,1.33505);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(7,1.074867);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(8,0.9407666);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(9,0.7995911);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(10,1.0261);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(11,1.030079);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(12,1.159861);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(13,1.086958);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(14,1.617704);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(15,1.913614);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(16,2.31379);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(17,1.769085);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(18,2.128691);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(19,1.818267);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(20,1.364338);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(21,1.410289);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(22,1.025808);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(23,0.7578415);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(24,0.8525906);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(25,0.508235);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(26,0.7941861);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(27,0.5607234);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(28,0.9849313);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(29,0.4249311);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(30,0.546111);
   VbbHcc_tags_H_dR_all_stack_8->SetBinError(31,0.2223047);
   VbbHcc_tags_H_dR_all_stack_8->SetEntries(581);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_9 = new TH1D("VbbHcc_tags_H_dR_all_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(2,0.004022038);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(3,6.44524);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(4,11.68422);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(5,11.23998);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(6,8.91393);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(7,6.104635);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(8,4.023168);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(9,3.295965);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(10,3.395297);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(11,4.093058);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(12,5.541497);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(13,7.636171);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(14,9.686381);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(15,11.87874);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(16,13.0449);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(17,12.79553);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(18,10.69336);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(19,8.052682);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(20,5.651885);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(21,3.99165);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(22,2.714995);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(23,1.768372);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(24,1.240966);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(25,1.153853);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(26,1.162278);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(27,1.208375);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(28,1.367889);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(29,1.014304);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(30,0.6436614);
   VbbHcc_tags_H_dR_all_stack_9->SetBinContent(31,0.3263271);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(2,0.002888608);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(3,0.1237841);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(4,0.16546);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(5,0.1622557);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(6,0.14106);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(7,0.1298325);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(8,0.1012399);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(9,0.08517998);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(10,0.08724574);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(11,0.09418145);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(12,0.1107507);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(13,0.1348618);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(14,0.1519003);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(15,0.1709351);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(16,0.1784722);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(17,0.1745021);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(18,0.188003);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(19,0.1434103);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(20,0.1161419);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(21,0.09380268);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(22,0.07914801);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(23,0.06236234);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(24,0.05098698);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(25,0.04934939);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(26,0.05060972);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(27,0.05211797);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(28,0.0553393);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(29,0.05543234);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(30,0.03760143);
   VbbHcc_tags_H_dR_all_stack_9->SetBinError(31,0.02636349);
   VbbHcc_tags_H_dR_all_stack_9->SetEntries(83441);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_10 = new TH1D("VbbHcc_tags_H_dR_all_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(3,2.1498);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(4,4.168592);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(5,4.79053);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(6,4.540574);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(7,3.524105);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(8,2.734629);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(9,2.259016);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(10,2.148914);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(11,2.351425);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(12,2.853976);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(13,3.486032);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(14,3.977845);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(15,4.389995);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(16,4.609197);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(17,4.513836);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(18,4.100863);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(19,3.158323);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(20,2.665804);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(21,1.987013);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(22,1.440425);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(23,1.026517);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(24,0.9386437);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(25,0.7588931);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(26,0.7673278);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(27,0.7040327);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(28,0.5507248);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(29,0.427819);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(30,0.2864391);
   VbbHcc_tags_H_dR_all_stack_10->SetBinContent(31,0.1662864);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(3,0.03331285);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(4,0.04641046);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(5,0.04979207);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(6,0.048489);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(7,0.04276938);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(8,0.03763446);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(9,0.03420793);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(10,0.03331274);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(11,0.03489154);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(12,0.03846251);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(13,0.04252617);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(14,0.04542986);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(15,0.04773807);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(16,0.04891425);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(17,0.04834368);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(18,0.04610573);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(19,0.04050346);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(20,0.03710428);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(21,0.03209103);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(22,0.02735913);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(23,0.02295358);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(24,0.02202691);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(25,0.01986729);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(26,0.01997077);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(27,0.01905284);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(28,0.01686109);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(29,0.0148902);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(30,0.01216846);
   VbbHcc_tags_H_dR_all_stack_10->SetBinError(31,0.009227244);
   VbbHcc_tags_H_dR_all_stack_10->SetEntries(146904);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_11 = new TH1D("VbbHcc_tags_H_dR_all_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(3,0.0179931);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(4,0.04467638);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(5,0.02434723);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(6,0.04545503);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(7,0.03495865);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(8,0.01352499);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(9,0.02571573);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(10,0.01860093);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(11,0.01542642);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(12,0.01283644);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(13,0.008512564);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(14,0.01225752);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(15,0.009470787);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(16,0.01505335);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(17,0.02217326);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(18,0.01573321);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(19,0.02161792);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(20,0.004918564);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(21,0.007753615);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(22,0.01271794);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(23,0.009081444);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(24,0.01650786);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(25,0.009712852);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(26,0.006506019);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(27,0.001696335);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(28,0.00224468);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(29,0.009485806);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(30,0.002794763);
   VbbHcc_tags_H_dR_all_stack_11->SetBinContent(31,0.001358122);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(3,0.007029145);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(4,0.01059345);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(5,0.007647547);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(6,0.01143002);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(7,0.00939958);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(8,0.005841669);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(9,0.008054501);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(10,0.00715599);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(11,0.006345386);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(12,0.005463504);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(13,0.004786997);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(14,0.005599612);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(15,0.004929231);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(16,0.006342371);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(17,0.007314514);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(18,0.006525954);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(19,0.007395106);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(20,0.003514723);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(21,0.00454573);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(22,0.005337657);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(23,0.004458489);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(24,0.006907319);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(25,0.004886698);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(26,0.004064876);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(27,0.001696335);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(28,0.00224468);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(29,0.004805289);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(30,0.002794763);
   VbbHcc_tags_H_dR_all_stack_11->SetBinError(31,0.001358122);
   VbbHcc_tags_H_dR_all_stack_11->SetEntries(187);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_12 = new TH1D("VbbHcc_tags_H_dR_all_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(3,0.00533522);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(4,0.01131714);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(5,0.02078732);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(6,0.01881756);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(7,0.01889057);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(8,0.01086654);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(9,0.009992627);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(10,0.007883718);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(11,0.01131774);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(12,0.0076214);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(13,0.009752552);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(14,0.006413385);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(15,0.008712397);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(16,0.007883223);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(17,0.004452659);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(18,0.01122101);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(19,0.006151843);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(20,0.004768707);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(21,0.003624354);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(22,0.003957414);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(23,0.004239388);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(24,0.00284264);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(25,0.002950216);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(26,0.002243496);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(27,0.005462906);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(28,0.001954632);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(29,0.001564586);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(30,0.000661696);
   VbbHcc_tags_H_dR_all_stack_12->SetBinContent(31,0.001045294);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(3,0.001354583);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(4,0.001962748);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(5,0.002613031);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(6,0.002550378);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(7,0.002498325);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(8,0.001863737);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(9,0.001852947);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(10,0.001562964);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(11,0.001933201);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(12,0.00152331);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(13,0.00179295);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(14,0.001407481);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(15,0.001640015);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(16,0.001573164);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(17,0.001199757);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(18,0.001897658);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(19,0.001382707);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(20,0.00128796);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(21,0.001108229);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(22,0.001119962);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(23,0.001170625);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(24,0.0008854101);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(25,0.0009340834);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(26,0.0008415997);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(27,0.001313829);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(28,0.0007751085);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(29,0.0007302586);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(30,0.0003855539);
   VbbHcc_tags_H_dR_all_stack_12->SetBinError(31,0.0005472266);
   VbbHcc_tags_H_dR_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_all__65 = new TH1D("VbbHcc_tags_H_dR_all__65","",30,0,6);
   VbbHcc_tags_H_dR_all__65->SetBinContent(2,22);
   VbbHcc_tags_H_dR_all__65->SetBinContent(3,22690);
   VbbHcc_tags_H_dR_all__65->SetBinContent(4,23945);
   VbbHcc_tags_H_dR_all__65->SetBinContent(5,18202);
   VbbHcc_tags_H_dR_all__65->SetBinContent(6,17071);
   VbbHcc_tags_H_dR_all__65->SetBinContent(7,16430);
   VbbHcc_tags_H_dR_all__65->SetBinContent(8,16321);
   VbbHcc_tags_H_dR_all__65->SetBinContent(9,16735);
   VbbHcc_tags_H_dR_all__65->SetBinContent(10,17435);
   VbbHcc_tags_H_dR_all__65->SetBinContent(11,18973);
   VbbHcc_tags_H_dR_all__65->SetBinContent(12,20642);
   VbbHcc_tags_H_dR_all__65->SetBinContent(13,22812);
   VbbHcc_tags_H_dR_all__65->SetBinContent(14,25738);
   VbbHcc_tags_H_dR_all__65->SetBinContent(15,27795);
   VbbHcc_tags_H_dR_all__65->SetBinContent(16,29880);
   VbbHcc_tags_H_dR_all__65->SetBinContent(17,28507);
   VbbHcc_tags_H_dR_all__65->SetBinContent(18,26396);
   VbbHcc_tags_H_dR_all__65->SetBinContent(19,24010);
   VbbHcc_tags_H_dR_all__65->SetBinContent(20,20613);
   VbbHcc_tags_H_dR_all__65->SetBinContent(21,17372);
   VbbHcc_tags_H_dR_all__65->SetBinContent(22,13754);
   VbbHcc_tags_H_dR_all__65->SetBinContent(23,11129);
   VbbHcc_tags_H_dR_all__65->SetBinContent(24,8804);
   VbbHcc_tags_H_dR_all__65->SetBinContent(25,7038);
   VbbHcc_tags_H_dR_all__65->SetBinContent(26,5555);
   VbbHcc_tags_H_dR_all__65->SetBinContent(27,4677);
   VbbHcc_tags_H_dR_all__65->SetBinContent(28,3874);
   VbbHcc_tags_H_dR_all__65->SetBinContent(29,3558);
   VbbHcc_tags_H_dR_all__65->SetBinContent(30,2514);
   VbbHcc_tags_H_dR_all__65->SetBinContent(31,2081);
   VbbHcc_tags_H_dR_all__65->SetEntries(474602);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all__65->SetLineColor(ci);
   VbbHcc_tags_H_dR_all__65->SetLineWidth(2);
   VbbHcc_tags_H_dR_all__65->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_all__65->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_all__65->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_all__65->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all__65->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fx1047[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fy1047[30] = {
   0,
   2.0403,
   40850.51,
   35399.87,
   25544.08,
   23759.61,
   20549.25,
   22335.22,
   20273.06,
   26873.41,
   25736.87,
   30385.05,
   37084.59,
   41079.93,
   41001.51,
   67715.99,
   42918.78,
   44523.57,
   34928.97,
   31645.05,
   20886.96,
   14663.89,
   14663.02,
   25335.21,
   9088.02,
   7935.712,
   6650.88,
   4366.889,
   6890.282,
   4208.783};
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fex1047[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_all_fey1047[30] = {
   0,
   0.4073576,
   3508.179,
   2499.596,
   2111.687,
   1987.974,
   1882.391,
   2013.233,
   1785.333,
   2680.245,
   2604.392,
   2415.813,
   3576.299,
   3430.25,
   3340.723,
   21945.27,
   3185.428,
   2943.424,
   2389.932,
   3258.444,
   2189.809,
   1291.037,
   2661.476,
   15305.77,
   1254.026,
   2327.27,
   1141.495,
   738.6199,
   2093.646,
   943.9006};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_all_fx1047,Graph_from_VbbHcc_tags_H_dR_all_fy1047,Graph_from_VbbHcc_tags_H_dR_all_fex1047,Graph_from_VbbHcc_tags_H_dR_all_fey1047);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_all1047 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_all1047","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetMaximum(98627.38);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_all1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_all1047);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__66 = new TH1D("data_mc_ratio__66","",30,0,6);
   data_mc_ratio__66->SetBinContent(2,10.78273);
   data_mc_ratio__66->SetBinContent(3,0.5554398);
   data_mc_ratio__66->SetBinContent(4,0.676415);
   data_mc_ratio__66->SetBinContent(5,0.7125721);
   data_mc_ratio__66->SetBinContent(6,0.7184881);
   data_mc_ratio__66->SetBinContent(7,0.7995427);
   data_mc_ratio__66->SetBinContent(8,0.7307294);
   data_mc_ratio__66->SetBinContent(9,0.8254797);
   data_mc_ratio__66->SetBinContent(10,0.6487826);
   data_mc_ratio__66->SetBinContent(11,0.7371915);
   data_mc_ratio__66->SetBinContent(12,0.6793473);
   data_mc_ratio__66->SetBinContent(13,0.6151342);
   data_mc_ratio__66->SetBinContent(14,0.6265346);
   data_mc_ratio__66->SetBinContent(15,0.6779019);
   data_mc_ratio__66->SetBinContent(16,0.4412547);
   data_mc_ratio__66->SetBinContent(17,0.664208);
   data_mc_ratio__66->SetBinContent(18,0.5928545);
   data_mc_ratio__66->SetBinContent(19,0.687395);
   data_mc_ratio__66->SetBinContent(20,0.6513816);
   data_mc_ratio__66->SetBinContent(21,0.8317153);
   data_mc_ratio__66->SetBinContent(22,0.9379504);
   data_mc_ratio__66->SetBinContent(23,0.7589844);
   data_mc_ratio__66->SetBinContent(24,0.3475006);
   data_mc_ratio__66->SetBinContent(25,0.7744261);
   data_mc_ratio__66->SetBinContent(26,0.7000002);
   data_mc_ratio__66->SetBinContent(27,0.7032152);
   data_mc_ratio__66->SetBinContent(28,0.8871303);
   data_mc_ratio__66->SetBinContent(29,0.5163794);
   data_mc_ratio__66->SetBinContent(30,0.5973223);
   data_mc_ratio__66->SetBinContent(31,0.4842144);
   data_mc_ratio__66->SetBinError(2,2.298886);
   data_mc_ratio__66->SetBinError(3,0.003687396);
   data_mc_ratio__66->SetBinError(4,0.004371252);
   data_mc_ratio__66->SetBinError(5,0.005281646);
   data_mc_ratio__66->SetBinError(6,0.005499081);
   data_mc_ratio__66->SetBinError(7,0.006237677);
   data_mc_ratio__66->SetBinError(8,0.005719831);
   data_mc_ratio__66->SetBinError(9,0.00638107);
   data_mc_ratio__66->SetBinError(10,0.004913469);
   data_mc_ratio__66->SetBinError(11,0.005351953);
   data_mc_ratio__66->SetBinError(12,0.004728419);
   data_mc_ratio__66->SetBinError(13,0.004072754);
   data_mc_ratio__66->SetBinError(14,0.003905329);
   data_mc_ratio__66->SetBinError(15,0.004066151);
   data_mc_ratio__66->SetBinError(16,0.002552696);
   data_mc_ratio__66->SetBinError(17,0.003933946);
   data_mc_ratio__66->SetBinError(18,0.003649044);
   data_mc_ratio__66->SetBinError(19,0.004436192);
   data_mc_ratio__66->SetBinError(20,0.004536959);
   data_mc_ratio__66->SetBinError(21,0.006310297);
   data_mc_ratio__66->SetBinError(22,0.007997705);
   data_mc_ratio__66->SetBinError(23,0.007194569);
   data_mc_ratio__66->SetBinError(24,0.003703528);
   data_mc_ratio__66->SetBinError(25,0.00923114);
   data_mc_ratio__66->SetBinError(26,0.009391958);
   data_mc_ratio__66->SetBinError(27,0.01028264);
   data_mc_ratio__66->SetBinError(28,0.01425304);
   data_mc_ratio__66->SetBinError(29,0.008656971);
   data_mc_ratio__66->SetBinError(30,0.01191314);
   data_mc_ratio__66->SetBinError(31,0.1100305);
   data_mc_ratio__66->SetMinimum(0.4);
   data_mc_ratio__66->SetMaximum(1.6);
   data_mc_ratio__66->SetEntries(87.42269);
   data_mc_ratio__66->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__66->SetLineColor(ci);
   data_mc_ratio__66->SetLineWidth(2);
   data_mc_ratio__66->SetMarkerStyle(20);
   data_mc_ratio__66->SetMarkerSize(1.2);
   data_mc_ratio__66->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__66->GetXaxis()->SetRange(1,31);
   data_mc_ratio__66->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__66->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__66->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__66->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__66->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__66->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1048[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1048[30] = {
   0,
   0.1996558,
   0.08587848,
   0.07061032,
   0.08266834,
   0.08367031,
   0.09160387,
   0.09013715,
   0.08806431,
   0.09973595,
   0.101193,
   0.07950664,
   0.09643625,
   0.08350185,
   0.08147806,
   0.324078,
   0.07421991,
   0.06610934,
   0.06842263,
   0.1029685,
   0.104841,
   0.0880419,
   0.1815095,
   0.6041303,
   0.1379867,
   0.2932655,
   0.1716306,
   0.169141,
   0.3038549,
   0.2242692};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1048,Graph_from_mc_statistical_error_fy1048,Graph_from_mc_statistical_error_fex1048,Graph_from_mc_statistical_error_fey1048);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1048 = new TH1F("Graph_Graph_from_mc_statistical_error1048","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1048->SetMinimum(0.2750437);
   Graph_Graph_from_mc_statistical_error1048->SetMaximum(1.724956);
   Graph_Graph_from_mc_statistical_error1048->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1048->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1048->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1048);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
