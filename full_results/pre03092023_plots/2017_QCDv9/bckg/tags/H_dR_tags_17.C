#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_17()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Thu Feb 16 10:35:32 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(-1.353788,-188059.3,7.264125,1379101);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
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
   st->SetMaximum(1222385);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0);
   st_stack_22->SetMaximum(1222385);
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
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,775.6256);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,348306.8);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,351589.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,327264.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,301872.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,296913.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,309356.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,349738.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,380050.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,461706.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,401627.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,456330.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,574976.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,622903.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,706466.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,436711.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,347771.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,257298.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,190359.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,157723.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,105712.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,89432.94);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,75710.61);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,39468);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,15343.63);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,5170.963);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1562.327);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,13.13458);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,472.1094);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,11543.31);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,12983.77);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,22279.53);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,23280.86);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,26034.72);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,22589.62);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,32419.39);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,30912.43);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,38724.45);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,22625.14);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,16813.06);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,39672.63);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,29004.49);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,39042.94);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,24293.08);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,28904.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,18712.92);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,9462.849);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,18188.75);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,7039.263);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,13350.39);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,22923);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,18151.8);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,2021.116);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1356.396);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,540.9363);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,8.998376);
   VbbHcc_tags_H_dR_stack_1->SetEntries(261984);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,21.83512);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,26328.82);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,46912.62);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,55268.65);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,59508.54);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,57344.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,53755.55);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,52739.16);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,55510.6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,61870.74);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,71038.72);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,82082.48);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,94249.53);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,106401.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,108456.7);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,61695.01);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,38577.1);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,25398.67);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,16795.07);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,11047.94);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,7028.829);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,4392.263);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,2572.707);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1359.057);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,636.4463);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,253.0743);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,62.59484);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,4.727457);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,1.276555);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,44.81384);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,59.78287);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,64.82185);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,67.22362);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,65.99719);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,63.9502);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,63.40762);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,65.14273);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,68.87739);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,73.88128);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,79.52072);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,85.33828);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,90.7658);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,91.6903);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,68.9444);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,54.31531);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,43.87302);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,35.48126);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,28.61113);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,22.68364);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,17.80693);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,13.53056);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,9.745305);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,6.633745);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,4.113071);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,2.008125);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.5315137);
   VbbHcc_tags_H_dR_stack_2->SetEntries(1.581007e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
