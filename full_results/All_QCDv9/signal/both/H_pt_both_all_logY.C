#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_all_logY()
{
//=========Macro generated from canvas: H_pt_both_all/H_pt_both_all
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_pt_both_all = new TCanvas("H_pt_both_all", "H_pt_both_all",0,0,600,600);
   H_pt_both_all->SetHighLightColor(2);
   H_pt_both_all->Range(37.97653,0.2998134,1705.96,3.555441);
   H_pt_both_all->SetFillColor(0);
   H_pt_both_all->SetFillStyle(4000);
   H_pt_both_all->SetBorderMode(0);
   H_pt_both_all->SetBorderSize(2);
   H_pt_both_all->SetLogy();
   H_pt_both_all->SetLeftMargin(0.15709);
   H_pt_both_all->SetRightMargin(0.1234783);
   H_pt_both_all->SetBottomMargin(0.12);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   H_pt_both_all->SetFrameFillStyle(1000);
   H_pt_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1199.177);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",40,0,2000);
   st_stack_128->SetMinimum(4.903303);
   st_stack_128->SetMaximum(1697.767);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_128->GetXaxis()->SetRange(7,30);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Events/50.0");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_both_H_pt_all_stack_1 = new TH1D("VbbHcc_both_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(1,6.910668);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(2,11.99177);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(3,7.374383);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(4,3.687881);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(5,1.60877);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(6,0.8935368);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(7,0.513904);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(8,0.3289163);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(9,0.1750809);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(10,0.09171921);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(11,0.0644597);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(12,0.03745968);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(13,0.01265349);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(14,0.01779763);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(15,0.00428707);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(16,0.004488537);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(17,0.004426489);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(18,0.002496094);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(19,0.006624169);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(21,0.001251058);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_both_H_pt_all_stack_1->SetBinContent(25,0.002551435);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(1,0.1215908);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(2,0.160639);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(3,0.1256074);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(4,0.08858209);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(5,0.0581096);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(6,0.04296875);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(7,0.0331117);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(8,0.02531756);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(9,0.01878148);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(10,0.01342889);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(11,0.01145368);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(12,0.008240056);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(13,0.004874406);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(14,0.006389373);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(15,0.002483259);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(16,0.002612682);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(17,0.003277374);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(18,0.002496094);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(19,0.004028024);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(21,0.001251058);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(22,0.001646926);
   VbbHcc_both_H_pt_all_stack_1->SetBinError(25,0.002551435);
   VbbHcc_both_H_pt_all_stack_1->SetEntries(19696);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_all_stack_2 = new TH1D("VbbHcc_both_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(1,1.200425);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(2,2.731473);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(3,2.868531);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(4,1.875195);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(5,0.9573979);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(6,0.4917582);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(7,0.2954652);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(8,0.1739877);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(9,0.1049132);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(10,0.06057598);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(11,0.04258238);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(12,0.03299249);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(13,0.01789623);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(14,0.01162755);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(15,0.01121363);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(16,0.005473809);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(17,0.002705221);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(18,0.003462798);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(19,0.002151642);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(20,0.001493425);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(21,0.001846957);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(22,0.0009169355);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(23,0.001291084);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(24,0.0005516689);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(25,0.001002765);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(27,0.0007007024);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(34,0.0001480239);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(35,0.0003681385);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(38,0.0001892237);
   VbbHcc_both_H_pt_all_stack_2->SetBinContent(39,0.0001275402);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(1,0.01863069);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(2,0.0282082);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(3,0.0291012);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(4,0.02340864);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(5,0.016511);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(6,0.01199187);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(7,0.009166806);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(8,0.007095624);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(9,0.005439537);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(10,0.004119605);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(11,0.00357794);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(12,0.003481012);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(13,0.002199323);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(14,0.001815405);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(15,0.001877359);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(16,0.001271602);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(17,0.000850491);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(18,0.000925674);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(19,0.0007352912);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(20,0.000671283);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(21,0.0007595057);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(22,0.0005388251);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(23,0.0006573473);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(24,0.0004159405);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(25,0.000582507);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(27,0.0005359924);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(34,0.0001480239);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(35,0.0003681385);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(38,0.0001892237);
   VbbHcc_both_H_pt_all_stack_2->SetBinError(39,0.0001275402);
   VbbHcc_both_H_pt_all_stack_2->SetEntries(45704);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_both_all->Modified();
   H_pt_both_all->cd();
   H_pt_both_all->SetSelected(H_pt_both_all);
}
