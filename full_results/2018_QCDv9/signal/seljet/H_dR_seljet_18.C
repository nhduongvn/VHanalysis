#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_18()
{
//=========Macro generated from canvas: H_dR_seljet_18/H_dR_seljet_18
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_18 = new TCanvas("H_dR_seljet_18", "H_dR_seljet_18",0,0,600,600);
   H_dR_seljet_18->SetHighLightColor(2);
   H_dR_seljet_18->Range(-1.353788,-21.66577,7.264125,158.8823);
   H_dR_seljet_18->SetFillColor(0);
   H_dR_seljet_18->SetFillStyle(4000);
   H_dR_seljet_18->SetBorderMode(0);
   H_dR_seljet_18->SetBorderSize(2);
   H_dR_seljet_18->SetLeftMargin(0.15709);
   H_dR_seljet_18->SetRightMargin(0.1234783);
   H_dR_seljet_18->SetBottomMargin(0.12);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   H_dR_seljet_18->SetFrameFillStyle(1000);
   H_dR_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(140.8275);
   
   TH1F *st_stack_279 = new TH1F("st_stack_279","",30,0,6);
   st_stack_279->SetMinimum(0);
   st_stack_279->SetMaximum(140.8275);
   st_stack_279->SetDirectory(0);
   st_stack_279->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_279->SetLineColor(ci);
   st_stack_279->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_279->GetXaxis()->SetRange(1,31);
   st_stack_279->GetXaxis()->SetLabelFont(42);
   st_stack_279->GetXaxis()->SetTitleOffset(1);
   st_stack_279->GetXaxis()->SetTitleFont(42);
   st_stack_279->GetYaxis()->SetTitle("Events/0.2");
   st_stack_279->GetYaxis()->SetLabelFont(42);
   st_stack_279->GetYaxis()->SetTitleSize(0.037);
   st_stack_279->GetYaxis()->SetTitleFont(42);
   st_stack_279->GetZaxis()->SetLabelFont(42);
   st_stack_279->GetZaxis()->SetTitleOffset(1);
   st_stack_279->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_279);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(2,0.002305427);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.655027);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,3.293923);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,4.279117);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,5.656347);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,7.205083);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,9.526581);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,12.26798);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,16.22062);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,21.93669);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,30.00246);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,39.65743);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,52.3509);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,68.3469);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,73.59152);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,26.16352);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,11.50424);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,5.581055);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,3.446941);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.953966);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,1.168441);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.7076521);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.4076393);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.2430787);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.1152007);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.04399356);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.007770225);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(2,0.002305427);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.06739063);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.09499122);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.1130048);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.1355105);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.1463255);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.1749591);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.2205868);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.2246992);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.2551444);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.3000699);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.3472531);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.4000503);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.4584737);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.4808128);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.2782564);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1876375);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.1249791);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.1759714);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.07329848);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.05580079);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.045245);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.03333891);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.02591316);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.01910861);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.01111969);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.004497659);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(157735);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.4873724);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,1.106782);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,1.510881);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,1.642382);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,1.741957);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1.772771);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,2.024736);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,2.710367);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,4.110886);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,6.502423);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,9.928601);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,14.04141);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,18.50806);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,20.29348);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,8.672885);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,4.266185);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,2.358771);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,1.441085);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.8755308);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.5403076);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.3187501);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.1842344);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.09630774);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.04090596);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.02335072);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.006605601);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(29,0.0004727325);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.01460949);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.0200778);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.02357399);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.02542087);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.02880276);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.02581712);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.02868615);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.03161802);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.04204942);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.05067638);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.06258727);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.07685162);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.08518184);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.0887259);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.05807901);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.04064603);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.02927745);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.02327925);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01814883);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.0146653);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.01092911);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.008314058);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.006238898);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.003860972);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.0029938);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.001544424);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(29,0.0004727325);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(308688);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_18->Modified();
   H_dR_seljet_18->cd();
   H_dR_seljet_18->SetSelected(H_dR_seljet_18);
}
