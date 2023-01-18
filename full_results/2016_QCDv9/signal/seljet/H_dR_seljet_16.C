#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_16()
{
//=========Macro generated from canvas: H_dR_seljet_16/H_dR_seljet_16
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_16 = new TCanvas("H_dR_seljet_16", "H_dR_seljet_16",0,0,600,600);
   H_dR_seljet_16->SetHighLightColor(2);
   H_dR_seljet_16->Range(-1.353788,-12.03147,7.264125,88.2308);
   H_dR_seljet_16->SetFillColor(0);
   H_dR_seljet_16->SetFillStyle(4000);
   H_dR_seljet_16->SetBorderMode(0);
   H_dR_seljet_16->SetBorderSize(2);
   H_dR_seljet_16->SetLeftMargin(0.15709);
   H_dR_seljet_16->SetRightMargin(0.1234783);
   H_dR_seljet_16->SetBottomMargin(0.12);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   H_dR_seljet_16->SetFrameFillStyle(1000);
   H_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(78.20457);
   
   TH1F *st_stack_277 = new TH1F("st_stack_277","",30,0,6);
   st_stack_277->SetMinimum(0);
   st_stack_277->SetMaximum(78.20457);
   st_stack_277->SetDirectory(0);
   st_stack_277->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_277->SetLineColor(ci);
   st_stack_277->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_277->GetXaxis()->SetRange(1,31);
   st_stack_277->GetXaxis()->SetLabelFont(42);
   st_stack_277->GetXaxis()->SetTitleOffset(1);
   st_stack_277->GetXaxis()->SetTitleFont(42);
   st_stack_277->GetYaxis()->SetTitle("Events/0.2");
   st_stack_277->GetYaxis()->SetLabelFont(42);
   st_stack_277->GetYaxis()->SetTitleSize(0.037);
   st_stack_277->GetYaxis()->SetTitleFont(42);
   st_stack_277->GetZaxis()->SetLabelFont(42);
   st_stack_277->GetZaxis()->SetTitleOffset(1);
   st_stack_277->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_277);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.002711948);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.046199);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,1.897241);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.541738);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,3.04109);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,3.980568);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,5.068235);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,6.515758);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,8.782142);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,12.27001);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,16.32571);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,21.45579);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,29.0015);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,37.41003);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,40.89423);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,14.26662);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,5.946518);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,3.156545);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.775122);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,0.962477);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.6558503);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.3848111);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.2154137);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1102938);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.07814639);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.01882115);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.007183428);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.001932912);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.0397198);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.05413913);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.0626424);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.06845934);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.07867483);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.08871162);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.1008598);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.1169001);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.138635);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.1596814);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.1833548);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.2130645);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.2419758);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.2537308);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.1491931);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.09611781);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.06958866);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.05178837);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.03807035);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.03122929);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.02422696);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.01778724);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01267293);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.01066373);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.005020099);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.003226732);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(157244);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_dR_stack_2 = new TH1D("VbbHcc_seljet_H_dR_stack_2","",30,0,6);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,0.000723208);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.2960373);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.6627003);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.8149406);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,0.8700647);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,0.9005924);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,0.9436153);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.106864);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.511272);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,2.282333);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,3.529419);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,5.391262);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,7.702288);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,10.15168);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,11.24215);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,4.811554);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,2.474375);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,1.359583);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.8165098);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.5132211);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.2924967);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.1711868);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.09773654);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.05020762);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.0272677);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.01136791);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.001618297);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,0.0003623829);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.007348354);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01108642);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.01233183);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01277853);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01302355);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.0133348);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.0144367);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.01689608);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.02080257);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.02589231);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.03203805);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.03829853);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.04398807);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.04630144);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.03024621);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.02166467);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.01599492);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01239058);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.009800013);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.007377973);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.005613563);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.004257515);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.003015247);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.002210026);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.001395955);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.0004976111);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(328438);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_dR_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_16->Modified();
   H_dR_seljet_16->cd();
   H_dR_seljet_16->SetSelected(H_dR_seljet_16);
}
