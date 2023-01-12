#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_seljet_17()
{
//=========Macro generated from canvas: H_dR_seljet_17/H_dR_seljet_17
//=========  (Mon Dec 19 11:11:24 2022) by ROOT version 6.26/06
   TCanvas *H_dR_seljet_17 = new TCanvas("H_dR_seljet_17", "H_dR_seljet_17",0,0,600,600);
   H_dR_seljet_17->SetHighLightColor(2);
   H_dR_seljet_17->Range(-1.353788,-13.8293,7.264125,101.4148);
   H_dR_seljet_17->SetFillColor(0);
   H_dR_seljet_17->SetFillStyle(4000);
   H_dR_seljet_17->SetBorderMode(0);
   H_dR_seljet_17->SetBorderSize(2);
   H_dR_seljet_17->SetLeftMargin(0.15709);
   H_dR_seljet_17->SetRightMargin(0.1234783);
   H_dR_seljet_17->SetBottomMargin(0.12);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   H_dR_seljet_17->SetFrameFillStyle(1000);
   H_dR_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(89.89043);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",30,0,6);
   st_stack_246->SetMinimum(0);
   st_stack_246->SetMaximum(89.89043);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_246->GetXaxis()->SetRange(1,31);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetTitleOffset(1);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetTitleSize(0.037);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetTitleOffset(1);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *VbbHcc_seljet_H_dR_stack_1 = new TH1D("VbbHcc_seljet_H_dR_stack_1","",30,0,6);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(3,1.033911);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(4,2.025863);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(5,2.779263);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(6,3.450053);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(7,4.554939);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(8,5.932681);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(9,7.795068);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(10,10.21558);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(11,14.60132);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(12,19.49368);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(13,25.28152);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(14,33.29778);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(15,43.55292);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(16,47.4523);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(17,16.7268);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(18,6.981691);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(19,3.416591);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(20,1.984709);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(21,1.012938);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(22,0.7450798);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(23,0.428916);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(24,0.2488377);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(25,0.1001807);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(26,0.0619592);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(27,0.02262024);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(28,0.008668829);
   VbbHcc_seljet_H_dR_stack_1->SetBinContent(29,0.001542942);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(3,0.04303248);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(4,0.05988859);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(5,0.07015425);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(6,0.07889147);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(7,0.09044569);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(8,0.102951);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(9,0.1187825);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(10,0.1357823);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(11,0.1628297);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(12,0.1881735);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(13,0.2136581);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(14,0.2459627);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(15,0.2815696);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(16,0.2937553);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(17,0.1735585);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(18,0.1115075);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(19,0.07728781);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(20,0.0584774);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(21,0.04179969);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(22,0.03590429);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(23,0.02700462);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(24,0.02022299);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(25,0.01262749);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(26,0.009911924);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(27,0.006018568);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(28,0.004044426);
   VbbHcc_seljet_H_dR_stack_1->SetBinError(29,0.001542942);
   VbbHcc_seljet_H_dR_stack_1->SetEntries(167881);

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
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(2,0.0002496327);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(3,0.2655576);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(4,0.6306707);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(5,0.8593286);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(6,0.964875);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(7,1.009456);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(8,1.075619);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(9,1.20005);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(10,1.626297);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(11,2.516291);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(12,3.910539);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(13,6.073367);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(14,8.709809);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(15,11.34281);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(16,12.47465);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(17,5.38865);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(18,2.65458);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(19,1.456658);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(20,0.8613773);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(21,0.5030322);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(22,0.2814485);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(23,0.1772431);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(24,0.09242299);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(25,0.0468196);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(26,0.02185256);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(27,0.008789031);
   VbbHcc_seljet_H_dR_stack_2->SetBinContent(28,0.001163329);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(2,0.0002386704);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(3,0.007878263);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(4,0.01214329);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(5,0.01429692);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(6,0.01523413);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(7,0.01564054);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(8,0.01615261);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(9,0.01705099);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(10,0.01986129);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(11,0.02475563);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(12,0.03086733);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(13,0.03856068);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(14,0.04624476);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(15,0.05274525);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(16,0.05535844);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(17,0.03634258);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(18,0.02537935);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(19,0.01873851);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(20,0.01436302);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(21,0.01095811);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(22,0.008155603);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(23,0.006405275);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(24,0.004574233);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(25,0.003203739);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(26,0.002169962);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(27,0.001343386);
   VbbHcc_seljet_H_dR_stack_2->SetBinError(28,0.0004766254);
   VbbHcc_seljet_H_dR_stack_2->SetEntries(299433);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_seljet_17->Modified();
   H_dR_seljet_17->cd();
   H_dR_seljet_17->SetSelected(H_dR_seljet_17);
}
