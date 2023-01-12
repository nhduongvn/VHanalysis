#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Mon Dec 19 11:11:47 2022) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-541325.3,7.029799,3969719);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3518614);
   
   TH1F *st_stack_106 = new TH1F("st_stack_106","",30,0,6);
   st_stack_106->SetMinimum(0);
   st_stack_106->SetMaximum(3518614);
   st_stack_106->SetDirectory(0);
   st_stack_106->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_106->SetLineColor(ci);
   st_stack_106->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_106->GetXaxis()->SetRange(1,30);
   st_stack_106->GetXaxis()->SetLabelFont(42);
   st_stack_106->GetXaxis()->SetTitleOffset(1);
   st_stack_106->GetXaxis()->SetTitleFont(42);
   st_stack_106->GetYaxis()->SetTitle("Events/0.2");
   st_stack_106->GetYaxis()->SetLabelFont(42);
   st_stack_106->GetYaxis()->SetTitleSize(0.037);
   st_stack_106->GetYaxis()->SetTitleFont(42);
   st_stack_106->GetZaxis()->SetLabelFont(42);
   st_stack_106->GetZaxis()->SetTitleOffset(1);
   st_stack_106->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_106);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,430570.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,2322615);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,1647730);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,1461079);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,831767.1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,565961.5);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,536555.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,220761.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,217547.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,122254.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,83330.06);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,84125.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,78096.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,44135.94);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,39879.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,4458.839);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,18854.26);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,2727.037);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,3987.829);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,2622.599);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,17147.61);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,287.0504);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,1470.461);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,2909.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,22.8497);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,24519.95);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,109611.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,92982.42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,109635.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,78783.34);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,66435.82);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,74538.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,39612.19);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,46376.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,33002.03);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,29220.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,29282.2);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,29200.21);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,20771.63);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,20639.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,2098.158);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,14585.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1694.065);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,2067.196);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1693.509);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,14532.69);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,256.075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,1211.229);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,0.4389415);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,1712.76);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,22.8497);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(44389);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,3239.605);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,23128.28);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,31791.84);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,26318);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,17797.41);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,11033.2);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,6804.445);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,4342.919);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,2849.153);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,1925.159);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,1301.768);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,889.8004);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,609.8779);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,426.6568);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,285.4048);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,201.0022);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,139.8978);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,98.23236);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,63.95784);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,47.935);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,30.73171);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,22.77912);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,14.1581);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,10.23608);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,6.985751);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,4.466623);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,3.221263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.923911);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.142651);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.9321226);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.587191);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,13.77459);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,36.961);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,43.4121);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,39.5088);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,32.4665);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,25.52104);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,20.00263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,15.95314);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,12.89953);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,10.59503);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,8.69106);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,7.171416);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.925892);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.959982);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.047221);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.415462);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,2.837581);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,2.382735);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,1.905741);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,1.658823);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.344686);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.150137);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,0.9004781);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.7673507);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.6359);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.5132277);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.430482);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.3285733);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.2558981);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.2251882);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.2963228);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(2378377);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
