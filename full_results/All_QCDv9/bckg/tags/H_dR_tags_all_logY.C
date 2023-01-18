#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_all_logY()
{
//=========Macro generated from canvas: H_dR_tags_all/H_dR_tags_all
//=========  (Wed Jan 18 11:42:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_all = new TCanvas("H_dR_tags_all", "H_dR_tags_all",0,0,600,600);
   H_dR_tags_all->SetHighLightColor(2);
   H_dR_tags_all->Range(-1.353788,-1.469248,7.264125,10.9792);
   H_dR_tags_all->SetFillColor(0);
   H_dR_tags_all->SetFillStyle(4000);
   H_dR_tags_all->SetBorderMode(0);
   H_dR_tags_all->SetBorderSize(2);
   H_dR_tags_all->SetLogy();
   H_dR_tags_all->SetLeftMargin(0.15709);
   H_dR_tags_all->SetRightMargin(0.1234783);
   H_dR_tags_all->SetBottomMargin(0.12);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   H_dR_tags_all->SetFrameFillStyle(1000);
   H_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(5.584246);
   st->SetMaximum(2.001018e+09);
   
   TH1F *st_stack_24 = new TH1F("st_stack_24","",30,0,6);
   st_stack_24->SetMinimum(1.058195);
   st_stack_24->SetMaximum(5.424473e+09);
   st_stack_24->SetDirectory(0);
   st_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_24->SetLineColor(ci);
   st_stack_24->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_24->GetXaxis()->SetRange(1,31);
   st_stack_24->GetXaxis()->SetLabelFont(42);
   st_stack_24->GetXaxis()->SetTitleOffset(1);
   st_stack_24->GetXaxis()->SetTitleFont(42);
   st_stack_24->GetYaxis()->SetTitle("Events/0.2");
   st_stack_24->GetYaxis()->SetLabelFont(42);
   st_stack_24->GetYaxis()->SetTitleSize(0.037);
   st_stack_24->GetYaxis()->SetTitleFont(42);
   st_stack_24->GetZaxis()->SetLabelFont(42);
   st_stack_24->GetZaxis()->SetTitleOffset(1);
   st_stack_24->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_24);
   
   
   TH1D *VbbHcc_tags_H_dR_all_stack_1 = new TH1D("VbbHcc_tags_H_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(2,23151.31);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(3,7151991);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(4,9394424);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(5,7612409);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(6,7693934);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(7,7794152);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(8,8378368);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(9,8762972);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(10,9239042);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(11,1.060904e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(12,1.178823e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(13,1.334564e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(14,1.578619e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(15,1.716931e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(16,1.917596e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(17,1.288425e+07);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(18,9277428);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(19,7811796);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(20,6496914);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(21,4455141);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(22,3576155);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(23,2536662);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(24,1639956);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(25,1182921);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(26,739129.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(27,321422.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(28,74829.18);
   VbbHcc_tags_H_dR_all_stack_1->SetBinContent(29,5529.82);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(2,18833.14);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(3,189089.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(4,269707.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(5,230279.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(6,245470.8);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(7,247309.7);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(8,253755.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(9,264305.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(10,258071.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(11,294254.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(12,308798.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(13,333868.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(14,363436.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(15,369726.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(16,411854.1);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(17,332269.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(18,272560.5);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(19,282620.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(20,246952.3);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(21,190001);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(22,178662.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(23,145662.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(24,113379.9);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(25,106822.2);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(26,110384.4);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(27,60940.09);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(28,18939.53);
   VbbHcc_tags_H_dR_all_stack_1->SetBinError(29,2133.113);
   VbbHcc_tags_H_dR_all_stack_1->SetEntries(1500103);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_all_stack_2 = new TH1D("VbbHcc_tags_H_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(2,168.0523);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(3,199313.2);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(4,356615.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(5,434192.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(6,521589.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(7,569844.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(8,587116.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(9,593678.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(10,606189.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(11,632795.8);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(12,674150.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(13,726458.3);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(14,785545.1);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(15,842930.4);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(16,834217);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(17,479577.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(18,308458);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(19,208869.5);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(20,142925.7);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(21,96792.42);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(22,64189.16);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(23,41219.29);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(24,25026.49);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(25,13595.6);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(26,6716.383);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(27,2813.022);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(28,779.7347);
   VbbHcc_tags_H_dR_all_stack_2->SetBinContent(29,54.42624);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(2,5.407275);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(3,131.2396);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(4,174.7074);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(5,193.0944);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(6,211.0851);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(7,220.4494);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(8,225.0454);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(9,225.4185);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(10,228.7479);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(11,233.5195);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(12,240.882);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(13,250.391);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(14,260.7596);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(15,270.3295);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(16,268.8705);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(17,203.6311);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(18,163.0392);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(19,133.2667);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(20,109.5545);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(21,89.18824);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(22,73.04968);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(23,57.85962);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(24,44.93736);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(25,32.5733);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(26,23.07601);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(27,14.69817);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(28,8.125259);
   VbbHcc_tags_H_dR_all_stack_2->SetBinError(29,1.989642);
   VbbHcc_tags_H_dR_all_stack_2->SetEntries(1.337714e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_all_stack_2","t#bar{t}","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_all->Modified();
   H_dR_tags_all->cd();
   H_dR_tags_all->SetSelected(H_dR_tags_all);
}
