#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.353788,0.5057942,7.264125,2.715989);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetFillStyle(4000);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15709);
   H_dR_both_18->SetRightMargin(0.1234783);
   H_dR_both_18->SetBottomMargin(0.12);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameFillStyle(1000);
   H_dR_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(244.6461);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(5.90225);
   st_stack_151->SetMaximum(312.5861);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_151->GetXaxis()->SetRange(1,31);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetTitleOffset(1);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetTitleSize(0.037);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetTitleOffset(1);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_both_H_dR_stack_1 = new TH1D("VbbHcc_both_H_dR_stack_1","",30,0,6);
   VbbHcc_both_H_dR_stack_1->SetBinContent(3,0.4548303);
   VbbHcc_both_H_dR_stack_1->SetBinContent(4,0.8598982);
   VbbHcc_both_H_dR_stack_1->SetBinContent(5,1.069908);
   VbbHcc_both_H_dR_stack_1->SetBinContent(6,1.554007);
   VbbHcc_both_H_dR_stack_1->SetBinContent(7,1.716972);
   VbbHcc_both_H_dR_stack_1->SetBinContent(8,1.711602);
   VbbHcc_both_H_dR_stack_1->SetBinContent(9,1.755686);
   VbbHcc_both_H_dR_stack_1->SetBinContent(10,1.805);
   VbbHcc_both_H_dR_stack_1->SetBinContent(11,1.735408);
   VbbHcc_both_H_dR_stack_1->SetBinContent(12,1.871329);
   VbbHcc_both_H_dR_stack_1->SetBinContent(13,1.797956);
   VbbHcc_both_H_dR_stack_1->SetBinContent(14,1.887204);
   VbbHcc_both_H_dR_stack_1->SetBinContent(15,1.825067);
   VbbHcc_both_H_dR_stack_1->SetBinContent(16,1.904519);
   VbbHcc_both_H_dR_stack_1->SetBinContent(17,0.7532614);
   VbbHcc_both_H_dR_stack_1->SetBinContent(18,0.3160388);
   VbbHcc_both_H_dR_stack_1->SetBinContent(19,0.2215759);
   VbbHcc_both_H_dR_stack_1->SetBinContent(20,0.1184074);
   VbbHcc_both_H_dR_stack_1->SetBinContent(21,0.08081728);
   VbbHcc_both_H_dR_stack_1->SetBinContent(22,0.05748649);
   VbbHcc_both_H_dR_stack_1->SetBinContent(23,0.03768693);
   VbbHcc_both_H_dR_stack_1->SetBinContent(24,0.0337293);
   VbbHcc_both_H_dR_stack_1->SetBinContent(25,0.008224937);
   VbbHcc_both_H_dR_stack_1->SetBinError(3,0.03667849);
   VbbHcc_both_H_dR_stack_1->SetBinError(4,0.05205425);
   VbbHcc_both_H_dR_stack_1->SetBinError(5,0.055146);
   VbbHcc_both_H_dR_stack_1->SetBinError(6,0.07756171);
   VbbHcc_both_H_dR_stack_1->SetBinError(7,0.0693089);
   VbbHcc_both_H_dR_stack_1->SetBinError(8,0.0731141);
   VbbHcc_both_H_dR_stack_1->SetBinError(9,0.06960778);
   VbbHcc_both_H_dR_stack_1->SetBinError(10,0.07151352);
   VbbHcc_both_H_dR_stack_1->SetBinError(11,0.07334273);
   VbbHcc_both_H_dR_stack_1->SetBinError(12,0.07300883);
   VbbHcc_both_H_dR_stack_1->SetBinError(13,0.0730463);
   VbbHcc_both_H_dR_stack_1->SetBinError(14,0.07528468);
   VbbHcc_both_H_dR_stack_1->SetBinError(15,0.07141632);
   VbbHcc_both_H_dR_stack_1->SetBinError(16,0.07493457);
   VbbHcc_both_H_dR_stack_1->SetBinError(17,0.04563058);
   VbbHcc_both_H_dR_stack_1->SetBinError(18,0.02980792);
   VbbHcc_both_H_dR_stack_1->SetBinError(19,0.02434551);
   VbbHcc_both_H_dR_stack_1->SetBinError(20,0.01758175);
   VbbHcc_both_H_dR_stack_1->SetBinError(21,0.01386778);
   VbbHcc_both_H_dR_stack_1->SetBinError(22,0.01241026);
   VbbHcc_both_H_dR_stack_1->SetBinError(23,0.01114773);
   VbbHcc_both_H_dR_stack_1->SetBinError(24,0.009156712);
   VbbHcc_both_H_dR_stack_1->SetBinError(25,0.004767455);
   VbbHcc_both_H_dR_stack_1->SetEntries(9410);

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
   VbbHcc_both_H_dR_stack_2->SetBinContent(3,0.1534375);
   VbbHcc_both_H_dR_stack_2->SetBinContent(4,0.3084547);
   VbbHcc_both_H_dR_stack_2->SetBinContent(5,0.4216374);
   VbbHcc_both_H_dR_stack_2->SetBinContent(6,0.6003092);
   VbbHcc_both_H_dR_stack_2->SetBinContent(7,0.7294883);
   VbbHcc_both_H_dR_stack_2->SetBinContent(8,0.6969499);
   VbbHcc_both_H_dR_stack_2->SetBinContent(9,0.639888);
   VbbHcc_both_H_dR_stack_2->SetBinContent(10,0.5461719);
   VbbHcc_both_H_dR_stack_2->SetBinContent(11,0.4222438);
   VbbHcc_both_H_dR_stack_2->SetBinContent(12,0.4331522);
   VbbHcc_both_H_dR_stack_2->SetBinContent(13,0.4366063);
   VbbHcc_both_H_dR_stack_2->SetBinContent(14,0.4478925);
   VbbHcc_both_H_dR_stack_2->SetBinContent(15,0.4979397);
   VbbHcc_both_H_dR_stack_2->SetBinContent(16,0.4991317);
   VbbHcc_both_H_dR_stack_2->SetBinContent(17,0.2336804);
   VbbHcc_both_H_dR_stack_2->SetBinContent(18,0.1501683);
   VbbHcc_both_H_dR_stack_2->SetBinContent(19,0.08787436);
   VbbHcc_both_H_dR_stack_2->SetBinContent(20,0.05242357);
   VbbHcc_both_H_dR_stack_2->SetBinContent(21,0.03836587);
   VbbHcc_both_H_dR_stack_2->SetBinContent(22,0.02461866);
   VbbHcc_both_H_dR_stack_2->SetBinContent(23,0.01718801);
   VbbHcc_both_H_dR_stack_2->SetBinContent(24,0.01074904);
   VbbHcc_both_H_dR_stack_2->SetBinContent(25,0.008511977);
   VbbHcc_both_H_dR_stack_2->SetBinContent(26,0.003517985);
   VbbHcc_both_H_dR_stack_2->SetBinContent(27,0.001930728);
   VbbHcc_both_H_dR_stack_2->SetBinContent(28,0.001437833);
   VbbHcc_both_H_dR_stack_2->SetBinContent(29,0.0002658739);
   VbbHcc_both_H_dR_stack_2->SetBinError(3,0.008140303);
   VbbHcc_both_H_dR_stack_2->SetBinError(4,0.01737321);
   VbbHcc_both_H_dR_stack_2->SetBinError(5,0.01236543);
   VbbHcc_both_H_dR_stack_2->SetBinError(6,0.01616629);
   VbbHcc_both_H_dR_stack_2->SetBinError(7,0.01686939);
   VbbHcc_both_H_dR_stack_2->SetBinError(8,0.01575609);
   VbbHcc_both_H_dR_stack_2->SetBinError(9,0.01519144);
   VbbHcc_both_H_dR_stack_2->SetBinError(10,0.01422813);
   VbbHcc_both_H_dR_stack_2->SetBinError(11,0.01225804);
   VbbHcc_both_H_dR_stack_2->SetBinError(12,0.01245894);
   VbbHcc_both_H_dR_stack_2->SetBinError(13,0.01847122);
   VbbHcc_both_H_dR_stack_2->SetBinError(14,0.01258505);
   VbbHcc_both_H_dR_stack_2->SetBinError(15,0.01359926);
   VbbHcc_both_H_dR_stack_2->SetBinError(16,0.01426996);
   VbbHcc_both_H_dR_stack_2->SetBinError(17,0.009735183);
   VbbHcc_both_H_dR_stack_2->SetBinError(18,0.007755037);
   VbbHcc_both_H_dR_stack_2->SetBinError(19,0.005525607);
   VbbHcc_both_H_dR_stack_2->SetBinError(20,0.00437184);
   VbbHcc_both_H_dR_stack_2->SetBinError(21,0.003922022);
   VbbHcc_both_H_dR_stack_2->SetBinError(22,0.003006339);
   VbbHcc_both_H_dR_stack_2->SetBinError(23,0.002415072);
   VbbHcc_both_H_dR_stack_2->SetBinError(24,0.002304822);
   VbbHcc_both_H_dR_stack_2->SetBinError(25,0.001751592);
   VbbHcc_both_H_dR_stack_2->SetBinError(26,0.001128733);
   VbbHcc_both_H_dR_stack_2->SetBinError(27,0.0008661442);
   VbbHcc_both_H_dR_stack_2->SetBinError(28,0.0007397321);
   VbbHcc_both_H_dR_stack_2->SetBinError(29,0.0002658739);
   VbbHcc_both_H_dR_stack_2->SetEntries(21941);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
