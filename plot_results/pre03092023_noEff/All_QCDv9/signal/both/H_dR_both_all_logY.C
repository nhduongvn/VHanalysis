#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-3.259115,7.264125,0.5870385);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLogy();
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(15.73717);
   st_stack_152->SetMaximum(1.593761);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_152->GetXaxis()->SetRange(1,31);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Event/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,0.3578498);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,0.7842242);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,1.032418);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,1.311267);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,1.218369);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,1.032609);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,0.8861724);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,0.6938633);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,0.6645123);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,0.6494713);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,0.6700533);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,0.8204765);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,0.8459436);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,0.884941);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,0.3487978);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,0.1885284);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,0.1219817);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,0.06553827);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,0.03321942);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,0.03407577);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,0.02343865);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,0.01070275);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,0.008621904);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,0.002024325);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,0.0252896);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,0.03953431);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,0.04299016);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,0.05748927);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,0.04659576);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,0.04655323);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,0.03954837);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,0.03490606);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,0.03362815);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,0.03399206);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,0.03435408);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,0.03974717);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,0.03884339);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,0.04040694);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,0.02436779);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,0.01809426);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,0.0145872);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,0.0104016);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,0.007123826);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,0.007481305);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,0.006561945);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,0.003920769);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,0.003785021);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,0.002024325);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(8153);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,0.1285646);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,0.2674704);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,0.4130829);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,0.5545809);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,0.5905736);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,0.5144159);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,0.3857267);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,0.3083142);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,0.2620007);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,0.2769135);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,0.2865615);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,0.3076721);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,0.3463882);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,0.3455786);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,0.1688777);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,0.1017791);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,0.06731192);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,0.03938413);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,0.03266717);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,0.01481996);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,0.009236079);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,0.005595443);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,0.005832661);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,0.00269163);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.001139727);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.0003062578);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,0.005357835);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,0.007842172);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,0.009630438);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,0.01219626);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,0.0120658);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,0.01074254);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,0.009352002);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,0.008516159);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,0.007698721);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,0.00792386);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,0.008041825);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,0.008348312);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,0.008988917);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,0.0091318);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,0.006636828);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,0.005145568);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,0.003892639);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,0.002957326);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,0.002765048);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,0.001824111);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,0.001465833);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.001075773);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.001171339);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.0007963319);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.0005219864);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.0003062578);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(26049);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
