void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Thu Aug 10 12:20:01 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(0,0,1,1);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.835776,6.314516,11.18158);
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
   st->SetMaximum(1.851366e+09);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(0.001507444);
   st_stack_17->SetMaximum(6.023417e+09);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetLabelSize(0.035);
   st_stack_17->GetXaxis()->SetTitleSize(0.035);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetLabelSize(0.05);
   st_stack_17->GetYaxis()->SetTitleSize(0.057);
   st_stack_17->GetYaxis()->SetTitleOffset(1.2);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetLabelSize(0.035);
   st_stack_17->GetZaxis()->SetTitleSize(0.035);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,11309.28);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,10945.93);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,7299.205);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,6658.756);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,7099.438);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,9267.141);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,5072.291);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,4445.521);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,7305.167);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,5647.675);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,8447.966);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,7697.851);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,12992.04);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,13731.31);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,10210.88);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,11430.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,6887.555);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,8156.576);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,5430.692);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,4188.523);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,5949.239);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,903.2153);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2836.779);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,3137.518);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,2311.997);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1573.33);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,752.6717);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,1008.19);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,448.7913);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,1420.212);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,2052.791);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,1115.078);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,1099.456);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1926.422);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,2503.996);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,955.9345);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,769.1523);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1786.709);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,950.1401);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1890.802);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1177.526);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,3051.955);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,2721.783);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1404.982);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,2589.235);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1089.549);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,1281.933);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,1652.278);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,890.1674);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,1807.024);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,117.6542);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,1545.707);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,851.8636);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,678.0763);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,520.7766);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,303.1668);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,367.3037);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,197.9862);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,19.82895);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,24.91787);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,23.60439);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,25.91849);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,28.226);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,27.92703);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,33.76624);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,31.33359);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,40.51527);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,38.32759);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,40.72999);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,40.02639);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,40.53816);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,42.94819);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,36.08925);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,38.67986);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,31.84306);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,27.96184);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,23.53178);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,19.79213);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,16.84175);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,12.63785);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,10.37062);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,8.639854);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,4.993181);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,5.419284);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,3.502404);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,3.559565);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,2.603027);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,1.938017);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.118508);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.104446);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,2.077859);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.241232);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,2.134305);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,2.498569);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,2.417325);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,2.832395);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,2.644297);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,2.741058);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,2.725263);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,2.676807);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,2.731376);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,2.503504);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,2.72935);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,2.460518);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.254694);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.083594);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,1.970902);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,1.662718);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.501118);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.413483);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.193132);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.9102622);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.9638488);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.681755);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.8316214);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.7396161);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.1490953);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,295.8905);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,450.2332);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,485.4611);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,538.1489);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,573.8842);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,595.553);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,631.3829);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,658.9629);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,697.6263);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,760.4452);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,815.6862);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,849.1685);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,886.5133);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,898.3795);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,843.64);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,780.3418);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,693.527);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,589.963);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,491.1601);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,409.0468);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,321.2563);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,260.3499);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,206.3901);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,169.1479);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,133.1139);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,101.658);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,75.97386);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,53.09723);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,41.95247);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1054367);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,4.511393);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,5.586087);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,5.78782);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,6.108684);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,6.308025);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,6.419209);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,6.597766);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,6.748341);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,6.953398);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,7.261813);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,7.546285);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,7.695976);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,7.864234);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,7.944334);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,7.715036);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,7.408518);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,6.97728);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,6.434904);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,5.877872);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,5.334019);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,4.723073);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,4.254664);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,3.778314);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,3.422915);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.023471);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.655829);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,2.271865);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,1.911792);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,1.682697);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,78.703);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,131.5569);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,138.1513);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,115.113);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,119.8921);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,91.07711);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,75.18782);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,78.67712);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,85.23699);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,91.56913);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,96.77494);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,115.0066);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,114.4434);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,117.7558);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,127.2347);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,93.91253);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,82.05216);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,73.96711);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,60.87054);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,48.01217);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,42.60188);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,32.65892);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,28.88965);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,20.69454);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,23.11617);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,20.28778);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,12.84197);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,12.6723);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,5.272826);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,2.919093);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,7.771763);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,7.417219);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,8.366197);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,11.11565);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,8.466745);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,6.272535);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,7.404873);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,8.060119);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,7.152728);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,7.847086);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,9.123824);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,8.16868);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,8.570275);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,10.42314);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,7.527261);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,6.90634);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,7.315044);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,7.052332);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,5.987821);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,6.672068);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,5.006136);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,4.474494);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,3.097279);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,3.310705);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,3.086947);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.460692);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,2.974346);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,0.9828908);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,24.48713);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,17.59633);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,12.97577);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,7.470474);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,5.595022);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,9.196592);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,6.245374);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,7.717139);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,4.758863);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,8.381519);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,8.526175);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,8.954453);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,7.877987);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,5.813414);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,10.60243);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,7.939635);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,6.455447);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,5.055636);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,4.296827);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,3.64944);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,2.480004);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,11.45955);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,1.794517);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,2.563895);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.886286);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,1.375326);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,1.474061);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,0.7016786);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.3318957);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,7.537509);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,2.607458);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,2.517753);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,1.367492);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,0.711854);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,2.107145);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,1.310012);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,1.887697);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,1.375692);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,1.941393);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.745769);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,2.034563);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,1.77434);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,1.309605);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,2.078108);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,1.865828);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,1.466415);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,1.287772);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,1.296911);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,1.177073);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,0.6032146);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,7.402413);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.4301515);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,1.270388);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.5627502);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,0.4171151);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.3810004);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.2246991);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.1578392);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.08576627);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(7,0.139529);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(11,0.2956484);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(12,0.2678449);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(13,0.1440206);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(14,0.1552273);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(21,0.1535887);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(22,0.1445668);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(25,0.1622891);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.08576627);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(7,0.139529);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(11,0.2096251);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(12,0.1893967);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(13,0.1440206);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(14,0.1552273);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(21,0.1535887);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(22,0.1445668);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(25,0.1622891);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.8189019);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.8052531);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.4860304);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.3513551);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.1075422);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(9,0.1145399);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2359643);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.3188021);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.1994566);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.1305552);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.3898338);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.4727954);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.3658773);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(18,0.1159231);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.2293137);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(21,0.2357897);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(24,0.1151045);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(29,0.1182308);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.3105891);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.3047794);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.2433556);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.2029008);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.1075422);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(9,0.1145399);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.1669119);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.1856077);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.1437075);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.1305552);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.2250722);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.2365145);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.2115831);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(18,0.1159231);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.1621559);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(21,0.1667291);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(24,0.1151045);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(29,0.1182308);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.209161);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,2.07496);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.133866);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,0.9028362);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,1.054778);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,2.26084);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.549817);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,1.815082);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,3.217088);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,3.02536);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.751339);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,3.013609);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,2.874867);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,4.105506);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,3.620452);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.160077);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,1.257405);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,0.2912355);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,1.082268);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.2519368);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.5146524);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(26,0.5338328);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2576367);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.2779925);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(29,0.5655104);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(30,0.2458286);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(31,0.2916673);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.057096);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,0.7337764);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.7556411);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.4602094);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.5274784);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.7561388);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.3891762);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.6870812);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.9293259);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.9137482);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.8712865);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.9095801);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.8671059);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.048861);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.9738149);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.7388562);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.5686786);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.2912355);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.5422556);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.2519368);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3639485);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(26,0.3778017);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2576367);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.2779925);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(29,0.4000749);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(30,0.2458286);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(31,0.2916673);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.387737);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,2.608458);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,2.84652);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,2.413778);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,1.878234);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.426498);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,1.093723);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,1.070626);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.170156);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.440728);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,1.845538);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.337272);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,2.779757);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,3.060941);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,3.040437);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.562846);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,1.846491);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.426687);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.9797625);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.6772081);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.4920208);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.3311029);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.3094229);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.3507136);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.2826534);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.3024672);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.274429);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.1305899);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.08002816);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.04617546);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.06375748);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.06684071);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.06080039);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.05407916);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.04683406);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.04062429);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.04060035);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.04263937);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.04686488);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.0539278);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.06024423);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.06638733);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.06936313);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.06888414);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.06308853);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.05354236);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.04687688);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.03877216);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03225264);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.02733138);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.0226783);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.02167462);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.02313356);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.02130767);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.02165841);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.02082914);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01425613);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01101144);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.5421256);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.162145);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.383877);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.321623);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,1.068419);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.7824666);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.6353774);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.6028154);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.6267012);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.7852235);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,0.8931082);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,0.9911732);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,1.048049);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,1.124365);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,1.050433);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,0.9350992);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.7767782);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.6263245);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.4887943);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.3627168);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.2773238);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.2249427);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.191617);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.1923569);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.1980352);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1621394);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.1199112);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.07842321);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.04428142);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.01446241);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.02117763);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.02312732);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.02262927);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.02032487);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.01740963);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.01566031);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01529966);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.0155691);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.01744251);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.01863787);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.01959245);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.02016082);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.02088722);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.02018704);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.01905275);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01738021);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01557365);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01376625);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01189428);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.01035691);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.009298318);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.00860629);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.008614024);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.008741286);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.007915632);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.006792117);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.005488158);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.004143656);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.009391793);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01135557);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.008358961);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01436873);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.005797888);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(9,0.005853528);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.002933425);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.005825031);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.002942707);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.003079495);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.008246923);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002909221);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.006080649);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.002756475);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.002959173);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.002873204);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(29,0.008963392);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.005427499);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.005681372);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.004840267);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.006470409);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.004100013);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(9,0.004139432);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002933425);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.004120938);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.002942707);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.003079495);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.004767444);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.002909221);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.004307006);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.002756475);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.002959173);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.002873204);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(29,0.005177788);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.003387295);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.00530169);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.006297051);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.006839584);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.000822758);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.001509824);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.0007736844);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001516706);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.0002937382);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.001891516);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.001098444);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.00108552);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.002245948);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001921);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.003704403);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001599951);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.001573301);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.0007883951);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.001112791);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.0004022653);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.0003840654);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(24,0.0004202124);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0007285792);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0003876622);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.0004272492);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.000406932);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0003800201);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0003906034);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0003714147);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.00113019);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001422906);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.00155118);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.00161969);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0005824733);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.000755027);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0005470783);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0007584144);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0002937382);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0008470955);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.000635195);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0006287468);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0009191936);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0008596679);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.00118181);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0008015102);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0007876211);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0005578398);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0006429717);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0004022653);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0003840654);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(24,0.0004202124);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0005165931);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0003876622);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0004272492);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.000406932);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0003800201);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003906034);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0003714147);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__45 = new TH1D("VbbHcc_tags_Z_dR__45","",30,0,6);
   VbbHcc_tags_Z_dR__45->SetBinContent(2,1);
   VbbHcc_tags_Z_dR__45->SetBinContent(3,5628);
   VbbHcc_tags_Z_dR__45->SetBinContent(4,6443);
   VbbHcc_tags_Z_dR__45->SetBinContent(5,4821);
   VbbHcc_tags_Z_dR__45->SetBinContent(6,4382);
   VbbHcc_tags_Z_dR__45->SetBinContent(7,3916);
   VbbHcc_tags_Z_dR__45->SetBinContent(8,3862);
   VbbHcc_tags_Z_dR__45->SetBinContent(9,3792);
   VbbHcc_tags_Z_dR__45->SetBinContent(10,3899);
   VbbHcc_tags_Z_dR__45->SetBinContent(11,3953);
   VbbHcc_tags_Z_dR__45->SetBinContent(12,4139);
   VbbHcc_tags_Z_dR__45->SetBinContent(13,4519);
   VbbHcc_tags_Z_dR__45->SetBinContent(14,4747);
   VbbHcc_tags_Z_dR__45->SetBinContent(15,5266);
   VbbHcc_tags_Z_dR__45->SetBinContent(16,5173);
   VbbHcc_tags_Z_dR__45->SetBinContent(17,5043);
   VbbHcc_tags_Z_dR__45->SetBinContent(18,4588);
   VbbHcc_tags_Z_dR__45->SetBinContent(19,4193);
   VbbHcc_tags_Z_dR__45->SetBinContent(20,3678);
   VbbHcc_tags_Z_dR__45->SetBinContent(21,3041);
   VbbHcc_tags_Z_dR__45->SetBinContent(22,2428);
   VbbHcc_tags_Z_dR__45->SetBinContent(23,2032);
   VbbHcc_tags_Z_dR__45->SetBinContent(24,1555);
   VbbHcc_tags_Z_dR__45->SetBinContent(25,1291);
   VbbHcc_tags_Z_dR__45->SetBinContent(26,1118);
   VbbHcc_tags_Z_dR__45->SetBinContent(27,1043);
   VbbHcc_tags_Z_dR__45->SetBinContent(28,868);
   VbbHcc_tags_Z_dR__45->SetBinContent(29,824);
   VbbHcc_tags_Z_dR__45->SetBinContent(30,529);
   VbbHcc_tags_Z_dR__45->SetBinContent(31,413);
   VbbHcc_tags_Z_dR__45->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__45->SetLineColor(ci);
   VbbHcc_tags_Z_dR__45->SetLineWidth(2);
   VbbHcc_tags_Z_dR__45->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__45->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__45->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__45->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__45->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1033[30] = {
   0,
   0.1490953,
   11731.04,
   11579.04,
   7966.204,
   7351.649,
   7831.031,
   9994.268,
   5822.985,
   5224.675,
   8137.537,
   6552.114,
   9415.792,
   8717.376,
   14048.65,
   14803.74,
   11237.02,
   12358.44,
   7706.45,
   8856.835,
   6012.702,
   4671.29,
   6333.443,
   1220.993,
   3085.403,
   3339.641,
   2475.846,
   1702.814,
   847.5514,
   1078.676};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1033[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1033[30] = {
   0,
   0.1054367,
   1420.243,
   2052.816,
   1115.123,
   1099.508,
   1926.466,
   2504.021,
   955.9823,
   769.2238,
   1786.744,
   950.2009,
   1890.836,
   1177.592,
   3051.977,
   2721.81,
   1405.046,
   2589.259,
   1089.597,
   1281.972,
   1652.305,
   890.2066,
   1807.043,
   118.0794,
   1545.719,
   851.878,
   678.092,
   520.7936,
   303.1801,
   367.3218};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1033,Graph_from_VbbHcc_tags_Z_dR_fy1033,Graph_from_VbbHcc_tags_Z_dR_fex1033,Graph_from_VbbHcc_tags_Z_dR_fey1033);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1033 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1033","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMinimum(19.27811);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetMaximum(19278.11);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1033);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",30,0,6);
   data_mc_ratio__46->SetBinContent(2,6.707117);
   data_mc_ratio__46->SetBinContent(3,0.4797528);
   data_mc_ratio__46->SetBinContent(4,0.5564367);
   data_mc_ratio__46->SetBinContent(5,0.6051816);
   data_mc_ratio__46->SetBinContent(6,0.5960567);
   data_mc_ratio__46->SetBinContent(7,0.5000619);
   data_mc_ratio__46->SetBinContent(8,0.3864215);
   data_mc_ratio__46->SetBinContent(9,0.6512124);
   data_mc_ratio__46->SetBinContent(10,0.7462665);
   data_mc_ratio__46->SetBinContent(11,0.4857735);
   data_mc_ratio__46->SetBinContent(12,0.6317045);
   data_mc_ratio__46->SetBinContent(13,0.4799384);
   data_mc_ratio__46->SetBinContent(14,0.5445446);
   data_mc_ratio__46->SetBinContent(15,0.3748403);
   data_mc_ratio__46->SetBinContent(16,0.3494386);
   data_mc_ratio__46->SetBinContent(17,0.4487846);
   data_mc_ratio__46->SetBinContent(18,0.3712442);
   data_mc_ratio__46->SetBinContent(19,0.5440897);
   data_mc_ratio__46->SetBinContent(20,0.4152725);
   data_mc_ratio__46->SetBinContent(21,0.5057626);
   data_mc_ratio__46->SetBinContent(22,0.5197707);
   data_mc_ratio__46->SetBinContent(23,0.3208365);
   data_mc_ratio__46->SetBinContent(24,1.273553);
   data_mc_ratio__46->SetBinContent(25,0.4184219);
   data_mc_ratio__46->SetBinContent(26,0.3347665);
   data_mc_ratio__46->SetBinContent(27,0.4212702);
   data_mc_ratio__46->SetBinContent(28,0.5097446);
   data_mc_ratio__46->SetBinContent(29,0.9722124);
   data_mc_ratio__46->SetBinContent(30,0.4904161);
   data_mc_ratio__46->SetBinContent(31,0.8270456);
   data_mc_ratio__46->SetBinError(2,6.707117);
   data_mc_ratio__46->SetBinError(3,0.006394999);
   data_mc_ratio__46->SetBinError(4,0.00693221);
   data_mc_ratio__46->SetBinError(5,0.008715999);
   data_mc_ratio__46->SetBinError(6,0.00900433);
   data_mc_ratio__46->SetBinError(7,0.007991023);
   data_mc_ratio__46->SetBinError(8,0.006218063);
   data_mc_ratio__46->SetBinError(9,0.0105752);
   data_mc_ratio__46->SetBinError(10,0.01195136);
   data_mc_ratio__46->SetBinError(11,0.00772628);
   data_mc_ratio__46->SetBinError(12,0.009818978);
   data_mc_ratio__46->SetBinError(13,0.007139443);
   data_mc_ratio__46->SetBinError(14,0.007903579);
   data_mc_ratio__46->SetBinError(15,0.005165422);
   data_mc_ratio__46->SetBinError(16,0.004858472);
   data_mc_ratio__46->SetBinError(17,0.006319656);
   data_mc_ratio__46->SetBinError(18,0.00548085);
   data_mc_ratio__46->SetBinError(19,0.008402491);
   data_mc_ratio__46->SetBinError(20,0.006847425);
   data_mc_ratio__46->SetBinError(21,0.009171461);
   data_mc_ratio__46->SetBinError(22,0.01054842);
   data_mc_ratio__46->SetBinError(23,0.00711741);
   data_mc_ratio__46->SetBinError(24,0.03229624);
   data_mc_ratio__46->SetBinError(25,0.01164532);
   data_mc_ratio__46->SetBinError(26,0.010012);
   data_mc_ratio__46->SetBinError(27,0.01304423);
   data_mc_ratio__46->SetBinError(28,0.01730186);
   data_mc_ratio__46->SetBinError(29,0.03386862);
   data_mc_ratio__46->SetBinError(30,0.02132244);
   data_mc_ratio__46->SetBinError(31,0.3304361);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(6.895515);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__46->GetXaxis()->SetRange(1,30);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1034[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1034[30] = {
   0,
   0.7071761,
   0.1210671,
   0.1772873,
   0.1399817,
   0.1495594,
   0.2460042,
   0.2505457,
   0.1641739,
   0.147229,
   0.2195681,
   0.145022,
   0.2008154,
   0.1350856,
   0.2172435,
   0.1838596,
   0.1250373,
   0.2095134,
   0.1413877,
   0.1447438,
   0.2748024,
   0.1905697,
   0.2853176,
   0.09670768,
   0.500978,
   0.2550807,
   0.273883,
   0.305843,
   0.357713,
   0.3405303};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1034,Graph_from_mc_statistical_error_fy1034,Graph_from_mc_statistical_error_fex1034,Graph_from_mc_statistical_error_fey1034);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1034 = new TH1F("Graph_Graph_from_mc_statistical_error1034","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1034->SetMinimum(0.1513887);
   Graph_Graph_from_mc_statistical_error1034->SetMaximum(1.848611);
   Graph_Graph_from_mc_statistical_error1034->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1034->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1034);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
