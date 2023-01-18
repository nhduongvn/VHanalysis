#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all_logY()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,0.4425686,7.029799,2.966589);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLogy();
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(392.6518);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(5.564819);
   st_stack_20->SetMaximum(517.8297);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,0.9299245);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,1.619332);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,2.359343);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,2.661558);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,2.628336);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,2.521189);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,2.288426);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,1.976653);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,1.781879);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,1.768387);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,1.7421);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,1.756731);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,1.923063);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,1.793107);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,0.6637951);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,0.3029132);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,0.1421942);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,0.105629);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,0.04578335);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,0.04415962);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,0.01418838);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,0.02113839);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,0.01022278);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,0.04481245);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,0.05858243);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,0.07204522);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,0.07643343);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,0.07645412);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,0.07361665);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,0.07044391);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,0.06582726);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,0.06150814);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,0.06115846);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,0.06107099);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,0.06028187);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,0.0637426);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,0.06236674);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,0.03832989);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,0.0251956);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,0.01689573);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,0.01450395);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,0.009518783);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,0.009087918);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,0.005014141);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,0.006826993);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,0.004217166);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,0.001493284);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(16887);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,0.3746247);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,0.7745664);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,1.151959);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,1.26496);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,1.032166);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,0.7170564);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,0.5166613);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,0.4311212);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,0.3857623);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,0.3758105);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,0.3896478);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,0.4059289);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,0.4314598);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,0.4379912);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,0.2041441);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,0.1128547);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,0.06516244);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,0.0358168);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,0.0264288);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,0.01249268);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,0.008344383);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,0.004426222);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,0.00205381);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,0.0004785323);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,0.0003904085);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,0.01058185);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,0.01514573);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,0.01843141);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,0.01948266);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,0.01755163);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,0.01452496);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,0.01232569);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,0.01120659);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,0.01064876);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,0.01038707);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,0.01068114);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,0.010819);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,0.01114499);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,0.01127448);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,0.007716522);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,0.005682588);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,0.00426644);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,0.003117601);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,0.002718781);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,0.001875325);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,0.001502635);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,0.001140156);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,0.000803685);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,0.0004045106);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,0.0002903729);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(29,0.00018361);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(38012);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
