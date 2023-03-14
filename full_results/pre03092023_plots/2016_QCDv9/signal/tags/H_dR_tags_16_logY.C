#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.310117,-0.05976278,7.029799,0.4382604);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetFillStyle(4000);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLogy();
   H_dR_tags_16->SetLeftMargin(0.15709);
   H_dR_tags_16->SetRightMargin(0.1234783);
   H_dR_tags_16->SetBottomMargin(0.12);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameFillStyle(1000);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(-2.37196e+09);
   st_stack_21->SetMaximum(-0.4019131);
   st_stack_21->SetDirectory(0);
   st_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_21->SetLineColor(ci);
   st_stack_21->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_21->GetXaxis()->SetRange(1,31);
   st_stack_21->GetXaxis()->SetLabelFont(42);
   st_stack_21->GetXaxis()->SetTitleOffset(1);
   st_stack_21->GetXaxis()->SetTitleFont(42);
   st_stack_21->GetYaxis()->SetTitle("Event/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.07360342);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.1507851);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.2176504);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.2597665);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.2362069);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.2181536);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.2119088);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.1430334);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.1249474);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.1371649);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.1490049);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.1598978);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.1985756);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.1999014);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.09057972);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.05040824);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.02811394);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.0148835);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.004060529);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.006087321);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01260999);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.00225717);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.002032761);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01245773);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.01791281);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02114522);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.02328677);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.02224926);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.02142004);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.02132477);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.01756717);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.01581774);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.01683223);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.01747077);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.0179462);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.02082959);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.02039498);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.01367613);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.0101691);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.007313042);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.005444952);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.002871561);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.003525477);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.005171503);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.00225717);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.002032761);
   VbbHcc_tags_H_dR_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.02300346);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.04924818);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.08645788);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.1101936);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.1263503);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.1088022);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.07013721);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.06972456);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.05535811);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.06336577);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.06533384);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.06254456);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.07440414);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.07407975);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.03572391);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.01985264);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.01667949);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.007080521);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.008310683);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.003767884);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.002079684);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.001473767);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.001684029);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.001299129);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0004959972);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.002446174);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.003619647);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.0048106);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.005452884);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.005842314);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.005398109);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.004349423);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.004323927);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.003854076);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.004122821);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.00419534);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.00409408);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.004479983);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.004435982);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.003102773);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.002303911);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.00211072);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.001350393);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001478521);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.0009802635);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.0007393724);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0006032491);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0006427373);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0005819342);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0003507529);
   VbbHcc_tags_H_dR_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","ZHcc","F");

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
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
