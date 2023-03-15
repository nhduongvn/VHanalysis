#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_both_17/Z_dR_both_17
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_both_17 = new TCanvas("Z_dR_both_17", "Z_dR_both_17",0,0,600,600);
   Z_dR_both_17->SetHighLightColor(2);
   Z_dR_both_17->Range(-1.310117,0.5052837,7.029799,2.717987);
   Z_dR_both_17->SetFillColor(0);
   Z_dR_both_17->SetFillStyle(4000);
   Z_dR_both_17->SetBorderMode(0);
   Z_dR_both_17->SetBorderSize(2);
   Z_dR_both_17->SetLogy();
   Z_dR_both_17->SetLeftMargin(0.15709);
   Z_dR_both_17->SetRightMargin(0.1234783);
   Z_dR_both_17->SetBottomMargin(0.12);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   Z_dR_both_17->SetFrameFillStyle(1000);
   Z_dR_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(245.569);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(5.899403);
   st_stack_146->SetMaximum(313.8458);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,0.7573132);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,1.29139);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,1.543285);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,1.715439);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,1.587245);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,1.384862);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,1.348536);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,1.149844);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,1.020015);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,1.052731);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,0.9696239);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,0.8863019);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,1.09158);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,0.9282214);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,0.3589525);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,0.1550803);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,0.08821691);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,0.05089438);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,0.03503382);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,0.02154703);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,0.01513338);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,0.007580478);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,0.001893401);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,0.03780562);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,0.04917346);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,0.05418041);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,0.05693553);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,0.05485484);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,0.05178641);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,0.05018582);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,0.04715683);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,0.04391778);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,0.04461846);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,0.04292407);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,0.04116487);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,0.04570432);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,0.04131636);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,0.0263034);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,0.01685385);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,0.01258587);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,0.009794797);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,0.008130932);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,0.006279927);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,0.005015533);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,0.003480909);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,0.001893401);
   VbbHcc_both_Z_dR_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.0001524791);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,0.2628788);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,0.565563);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,0.7383365);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,0.7402513);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,0.6166346);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,0.4100889);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,0.2825871);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,0.2283995);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,0.1957466);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,0.2255279);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,0.2161007);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,0.240173);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,0.252447);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,0.2569463);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,0.1085894);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,0.06456747);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,0.03758756);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,0.02117349);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,0.01363299);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,0.007787197);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,0.004726778);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,0.003702576);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,0.000466356);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,0.0003373836);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,0.0002003603);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.0001524791);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,0.007919825);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,0.01165);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,0.01338203);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,0.01337293);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,0.01220503);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,0.009965875);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,0.00828049);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,0.007426308);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,0.006849923);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,0.007383273);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,0.00721984);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,0.00760108);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,0.007773163);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,0.007846784);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,0.005092034);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,0.003957583);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,0.003032618);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,0.00224008);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,0.001783785);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,0.001340059);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,0.001070989);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,0.0009323625);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,0.0002722696);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,0.0002395385);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,0.0002003603);
   VbbHcc_both_Z_dR_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_both_17->Modified();
   Z_dR_both_17->cd();
   Z_dR_both_17->SetSelected(Z_dR_both_17);
}
