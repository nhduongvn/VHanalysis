#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Wed Jan 18 11:40:24 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-0.8473462,7.264125,6.213872);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
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
   st->SetMaximum(5.50775);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(5.50775);
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
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,0.6215709);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1.204685);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,1.493776);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,1.82499);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,2.20397);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,2.337514);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,2.51069);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,2.547639);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,2.533926);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,2.447645);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,2.605252);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,2.745306);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,2.884572);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,2.895457);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1.155365);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,0.6478695);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,0.3272852);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,0.221429);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,0.1496373);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,0.1030926);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,0.05650437);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,0.0314544);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,0.007195303);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,0.01452384);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,0.005209758);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,0.03534657);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,0.05031214);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,0.05677885);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,0.06212842);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,0.06867748);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,0.07134528);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,0.0748672);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,0.07373955);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,0.07434945);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,0.07274021);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,0.0741787);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,0.07607851);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,0.07676065);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,0.07948709);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,0.05104307);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,0.03634472);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,0.02623758);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,0.02057857);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,0.01742898);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,0.01462022);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,0.01024217);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,0.007272519);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,0.003690872);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,0.004868925);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,0.003058091);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(19568);

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
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,0.2580326);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,0.4669092);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,0.5704771);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,0.7915567);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,0.8963963);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,0.9318939);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,0.8321252);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,0.7425433);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,0.6906191);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,0.6683196);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,0.6829292);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,0.7322704);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,0.7872612);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,0.7525309);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,0.3953875);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,0.2353839);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,0.1497539);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,0.08931931);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,0.06562379);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,0.0435772);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,0.02605467);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,0.01855071);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,0.00938576);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,0.00331382);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.002407137);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,0.008766125);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,0.01160989);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,0.01296362);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,0.01526912);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,0.01634956);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,0.01677782);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,0.01559418);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,0.01482194);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,0.0142057);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,0.01395038);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,0.01409662);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,0.01449554);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,0.01507952);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,0.0146569);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,0.01054382);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,0.008129141);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,0.006515418);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,0.00500261);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,0.004374581);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,0.003431857);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,0.002694896);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.002365062);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.001538128);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.0009469007);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.001025813);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(45428);

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
