#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Feb 16 10:37:40 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.353788,-0.8409551,7.264125,9.147769);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(5.981888e+07);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(2.278725);
   st_stack_149->SetMaximum(1.408955e+08);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,92.24426);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,270093.5);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,278762.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,197570);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,202344.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,208799.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,209104.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,235510);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,235009.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,285315.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,331064.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,352749.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,372221.7);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,483474.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,521709.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,305063.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,231109.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,178953.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,141828.8);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,140404.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,97049);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,61355.26);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,46279.48);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,26158.82);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,10913.3);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,6145.927);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,3577.814);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,11.6734);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,45.86044);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,11326.68);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,11654.46);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,9612.141);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,11171.99);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,11208.95);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,10312.44);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,22999.58);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,10621.99);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,25540.82);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,26389.34);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,14125.83);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,13282.24);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,28187.15);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,29568.16);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,13167.19);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,10832.51);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,9538.846);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,8506.572);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,29718.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,6853.524);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,5494.051);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,4382.348);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,4255.161);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,2302.809);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,1128.108);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,1928.43);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,8.16246);
   VbbHcc_both_H_dR_stack_1->SetEntries(246965);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,18.38804);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,19434.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,33954.47);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,39553.74);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,42141.35);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,40447.14);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,37804.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,37009.51);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,38875.18);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,43349.26);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,49893.28);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,57720.86);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,66532.64);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,74972.45);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,76479.72);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,44108.64);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,28000.27);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,18724.77);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,12610.65);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,8488.777);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,5548.036);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,3509.804);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,2150.703);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,1158.214);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,579.915);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,238.9226);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,63.12975);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,5.394239);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.139487);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,37.40146);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,49.39999);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,53.26221);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,54.90962);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,53.78763);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,52.02667);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,51.50494);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,52.86221);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,55.86966);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,59.99138);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,64.61987);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,69.45123);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,73.81695);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,74.60355);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,56.51712);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,44.90235);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,36.5904);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,29.88673);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,24.40739);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,19.64563);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,15.53509);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,12.08292);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,8.831685);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,6.188676);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,3.951356);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,2.000436);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.5840448);
   VbbHcc_both_H_dR_stack_2->SetEntries(1.151209e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
