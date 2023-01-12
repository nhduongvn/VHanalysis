#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Mon Dec 19 11:10:36 2022) by ROOT version 6.26/06
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.310117,-0.1235532,7.029799,0.9060571);
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
   st->SetMaximum(76.48534);
   
   TH1F *st_stack_21 = new TH1F("st_stack_21","",30,0,6);
   st_stack_21->SetMinimum(-3.269886e+09);
   st_stack_21->SetMaximum(-47.67212);
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
   st_stack_21->GetYaxis()->SetTitle("Events/0.2");
   st_stack_21->GetYaxis()->SetLabelFont(42);
   st_stack_21->GetYaxis()->SetTitleSize(0.037);
   st_stack_21->GetYaxis()->SetTitleFont(42);
   st_stack_21->GetZaxis()->SetLabelFont(42);
   st_stack_21->GetZaxis()->SetTitleOffset(1);
   st_stack_21->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_21);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1287488);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.2604693);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.2869);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.3560762);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.4710153);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.4123396);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.4471798);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.4758383);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.4703578);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.4745467);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.4947788);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.491886);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.5837374);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.5307261);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.2370381);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.1221872);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.06403832);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.05780486);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.02497722);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.01215988);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.01559169);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.006821571);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.001561075);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,0.004394304);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,0.001436258);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.0140722);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.02000291);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.02134878);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.02362821);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.0274548);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.0257194);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.02608304);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.02721705);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.02711016);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.02754421);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.02765637);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.02779072);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.03000896);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.02877712);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.01914214);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01355671);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.009833841);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.009209854);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.006029205);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.004268317);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.004830753);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.003077097);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.001455521);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,0.002537925);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,0.001436258);
   VbbHcc_tags_H_dR_stack_1->SetEntries(4703);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.0001892188);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.06504979);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.109481);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1221582);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.1663876);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.1776811);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.1877243);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.1713019);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.1475839);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1405375);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1460961);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1412884);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1588287);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.181116);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1781915);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.08784797);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.05557416);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.03701927);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.02024156);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01127039);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.008293785);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.008184834);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.003688489);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.003197193);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.0009366713);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.0005639987);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,0.000533292);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.0001892188);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003507012);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.004562462);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.004809997);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.005619545);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.00580436);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.00597846);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.005711622);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.00529376);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.005160854);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.005251139);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.00518232);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.005463891);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.005861079);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.005813218);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.004073033);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003239101);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.002623399);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.001953908);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001429371);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001231956);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.001235431);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0008282027);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0007748748);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0003870023);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.0003257778);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,0.0003083126);
   VbbHcc_tags_H_dR_stack_2->SetEntries(13340);

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
