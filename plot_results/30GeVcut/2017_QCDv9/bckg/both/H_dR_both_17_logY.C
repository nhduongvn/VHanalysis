#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Feb 14 16:02:03 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.353788,-1.7292,7.264125,10.3047);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetFillStyle(4000);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15709);
   H_dR_both_17->SetRightMargin(0.1234783);
   H_dR_both_17->SetBottomMargin(0.12);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameFillStyle(1000);
   H_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(2.658892);
   st->SetMaximum(4.763881e+08);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.5186433);
   st_stack_150->SetMaximum(1.262739e+09);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_150->GetXaxis()->SetRange(1,31);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetTitleOffset(1);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetTitleSize(0.037);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetTitleOffset(1);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(2,21618.11);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,2047603);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,2471767);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,1993537);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,2147535);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,2017760);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,2007604);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,2388998);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,2327126);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,2559694);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,2875462);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,3343934);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,3754817);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,3976730);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,4494895);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,2963097);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,2130212);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,1811282);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,1415556);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,977957.1);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,768607.9);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,551808.4);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,329576.6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,248255.2);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,89014.57);
   VbbHcc_both_H_dR_stack_1->SetBinContent(27,41442.17);
   VbbHcc_both_H_dR_stack_1->SetBinContent(28,33303.78);
   VbbHcc_both_H_dR_stack_1->SetBinContent(29,2646.737);
   VbbHcc_both_H_dR_stack_1->SetBinError(2,19634.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,91779.58);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,101009.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,92499.97);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,110266);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,99844.02);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,101708.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,124737.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,103628.7);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,110400.9);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,119401.5);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,137613.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,141735.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,132546.3);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,160262.2);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,122296);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,103385.4);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,106289.6);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,92690.55);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,65784.78);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,62218.28);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,55654.32);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,39126.73);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,39851.07);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,8263.377);
   VbbHcc_both_H_dR_stack_1->SetBinError(27,5658.915);
   VbbHcc_both_H_dR_stack_1->SetBinError(28,18465.45);
   VbbHcc_both_H_dR_stack_1->SetBinError(29,1921.68);
   VbbHcc_both_H_dR_stack_1->SetEntries(539612);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_stack_2 = new TH1D("VbbHcc_both_H_dR_stack_2","",30,0,6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(2,45.03434);
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,64536.65);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,116408.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,141001.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,169223.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,184576.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,189770.7);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,192100.5);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,196002.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,204797.4);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,218062);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,235117.1);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,253931);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,272670.8);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,268985.6);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,154048.9);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,98366.55);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,66421.17);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,45134.06);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,30227.36);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,19761.86);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,12553.89);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,7460.052);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,4020.299);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,1924.42);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,778.5136);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,201.6667);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,12.15502);
   VbbHcc_both_H_dR_stack_2->SetBinError(2,1.80114);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,68.77308);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,92.52184);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,101.8405);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,111.5312);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,116.4919);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,118.1916);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,119.0075);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,120.3365);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,123.1446);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,127.1972);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,132.2179);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,137.5759);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,142.6635);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,141.7466);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,106.9806);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,85.16066);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,69.69161);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,57.1803);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,46.57095);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,37.4645);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,29.70084);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,22.75668);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,16.58579);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,11.41621);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,7.190188);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,3.611903);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.8506974);
   VbbHcc_both_H_dR_stack_2->SetEntries(4.685053e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
