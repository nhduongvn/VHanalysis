#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.310117,-0.06046563,7.029799,0.4434146);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetFillStyle(4000);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15709);
   H_dR_both_16->SetRightMargin(0.1234783);
   H_dR_both_16->SetBottomMargin(0.12);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameFillStyle(1000);
   H_dR_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(-2.373389e+09);
   st_stack_149->SetMaximum(-0.4062598);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_149->GetXaxis()->SetRange(1,31);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetTitleOffset(1);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Event/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetTitleSize(0.037);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetTitleOffset(1);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.07759459);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.1506693);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,0.2261916);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,0.2616045);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,0.2383215);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,0.2220439);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,0.2163202);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,0.1527781);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,0.1232812);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,0.1370596);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,0.1509915);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,0.1597088);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,0.1984231);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,0.1976991);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.09250627);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.05796347);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.03035176);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.01706476);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.004057411);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.006082647);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.01260031);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.002255437);
   VbbHcc_both_H_dR_stack_1->SetBinContent(26,0.002031201);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.01277297);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.01789906);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.02157435);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.02335801);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.02235041);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.02159518);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.0215525);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.01811214);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.01572099);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.01681931);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.01758393);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.01792467);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.0208136);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.02027604);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.01381065);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.01087278);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.007648752);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.005864645);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.002869356);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.00352277);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.005167532);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.002255437);
   VbbHcc_both_H_dR_stack_1->SetBinError(26,0.002031201);
   VbbHcc_both_H_dR_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.02377449);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.05006022);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.08833024);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.1127065);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.1294418);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.1103225);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.07217238);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.07042604);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.05721393);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.06454344);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.06457006);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.06470248);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.07638787);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.07421558);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.03671691);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.02061824);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.01639753);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.007341556);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.008841159);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.003802681);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.002078087);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.001728514);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.001682736);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.001298132);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.0004956164);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.002486377);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.003649996);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.004862543);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.005512316);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.005910596);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.005433628);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.004409938);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.004342709);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.003912257);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.004156539);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.004171407);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.004164894);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.004536872);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.004436336);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.003142154);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.002345923);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.002091855);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.001375415);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.001525827);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.0009903064);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.0007388047);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.000654847);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.0006422438);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.0005814874);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0003504836);
   VbbHcc_both_H_dR_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_stack_1","ZHcc","F");

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
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
