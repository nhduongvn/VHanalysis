#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Feb 16 10:37:18 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.310117,-0.1388422,7.029799,1.018176);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetLogy();
   H_dR_tags_17->SetLeftMargin(0.15709);
   H_dR_tags_17->SetRightMargin(0.1234783);
   H_dR_tags_17->SetBottomMargin(0.12);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(85.94995);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(-3.297199e+09);
   st_stack_22->SetMaximum(-52.70029);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetTitleOffset(1);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetTitleSize(0.037);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetTitleOffset(1);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,0.1739818);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,0.4007053);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,0.5047245);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,0.5875358);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,0.5924179);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,0.4853666);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,0.3879734);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,0.3463765);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,0.3251579);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,0.2809729);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,0.2951514);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,0.4263456);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,0.3702841);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,0.4231655);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,0.1648605);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,0.08567806);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,0.06346058);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,0.03112015);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,0.02454997);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,0.01740158);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,0.007827769);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,0.002870836);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,0.003956239);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,0.01839646);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,0.02773053);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,0.03089105);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,0.03386775);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,0.0332963);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,0.03046851);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,0.02679399);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,0.02572037);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,0.02447207);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,0.02311812);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,0.02337838);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,0.0282647);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,0.0267936);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,0.02812437);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,0.01732095);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,0.01281568);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,0.01101129);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,0.007632586);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,0.006681395);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,0.005569322);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,0.003696623);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,0.002120775);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,0.002378171);
   VbbHcc_tags_H_dR_stack_1->SetEntries(3477);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,0.05966132);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,0.125355);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,0.1982844);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,0.2562909);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,0.2670816);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,0.246387);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,0.1863564);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,0.135358);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,0.1253786);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,0.1270479);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,0.1371799);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,0.1445518);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,0.1564961);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,0.1667279);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,0.07918985);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,0.04642122);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,0.02840325);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,0.02167831);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,0.01244043);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,0.006448264);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,0.002808079);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,0.002807186);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,0.001084257);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,0.001205605);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,0.000191289);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,0.003799344);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,0.005460633);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,0.006875928);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,0.007840554);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,0.008076308);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,0.00771807);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,0.0067317);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,0.005710058);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,0.005514333);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,0.00553806);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,0.005734664);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,0.005884209);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,0.006155546);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,0.006317805);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,0.00435321);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,0.003328108);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,0.002616465);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,0.002292197);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,0.001684307);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,0.001228126);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,0.000773524);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,0.0007993243);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,0.0004488924);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,0.0005414402);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,0.000191289);
   VbbHcc_tags_H_dR_stack_2->SetEntries(11007);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
