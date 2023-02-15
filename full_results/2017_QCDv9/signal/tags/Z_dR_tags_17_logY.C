#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Tue Feb 14 16:07:55 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,0.5087227,7.029799,2.704539);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(239.4219);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(5.918624);
   st_stack_18->SetMaximum(305.4623);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.7242625);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,1.261718);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,1.484528);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,1.670271);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,1.533472);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,1.347325);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,1.343562);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,1.105287);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,1.003801);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,1.023778);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.9528287);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.8865242);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,1.081742);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.9292464);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.339241);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.158223);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.08389074);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.05220013);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.03503382);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.02154703);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.01410547);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.007580478);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.001893401);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.0369122);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.04860718);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.05314846);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.05615198);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.05392645);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.05105276);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.05011768);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.04630749);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.04356899);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.0439908);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.04254515);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.04127868);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.04555689);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.0414394);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.02555019);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.01700616);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.01232607);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.009862349);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.008130932);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.006279927);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.004909072);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.003480909);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.001893401);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9885);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.0001524791);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.2506479);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.5456875);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.7158105);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.7239485);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.6005455);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.3987476);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.2720053);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.223393);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.1893589);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.2167958);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.2108618);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.2345685);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.2444391);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.2480713);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.1064053);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.06320585);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.03629861);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.0196932);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.01327271);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.008049748);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.004478973);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.003702576);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.000466356);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,0.0003373836);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,0.0002003603);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.0001524791);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.007728063);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.01144582);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01317793);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.01323504);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.01204352);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.009831746);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.008120698);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.007347515);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.006724172);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.007240857);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.007128879);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.007510266);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.007641499);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.007715624);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.005051205);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.00391202);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.002973444);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.002158681);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001752098);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.001365537);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.001041926);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0009323625);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0002722696);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,0.0002395385);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.0002003603);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(23096);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
