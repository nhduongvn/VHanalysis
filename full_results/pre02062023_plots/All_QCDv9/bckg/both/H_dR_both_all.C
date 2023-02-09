#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Wed Jan 18 11:43:12 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,-4754335,7.264125,3.486512e+07);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.090318e+07);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(0);
   st_stack_152->SetMaximum(3.090318e+07);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_152->GetXaxis()->SetRange(1,31);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(2,23178.24);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,7335176);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,9590326);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,7834323);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,7838198);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,8021650);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,8548610);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,8965344);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,9432151);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,1.095044e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,1.209367e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,1.369761e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,1.615025e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,1.769219e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,1.97341e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1.328396e+07);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,9554571);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,8064793);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,6642475);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,4508647);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,3646355);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,2586281);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,1696121);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,1221695);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,747339.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,326340.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(28,75137.11);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(29,5553.123);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(2,18833.16);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,191773.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,270357.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,233824.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,245706.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,249477.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,254087.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,266550.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,258991.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,300154.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,311382);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,337715.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,366166.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,376422.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,417391);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,337156.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,277750.8);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,287027.4);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,249896.7);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,189489.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,179575.3);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,145853.9);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,115621.5);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,108817.1);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,110421.6);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,60966.86);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(28,18939.71);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(29,2133.24);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(1578555);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(2,176.0305);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,209577.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,374024.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,454522.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,545305.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,595435.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,613391.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,620444);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,633429.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,660994.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,703638.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,757518.9);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,818477.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,877548.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,868020.6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,499617.2);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,321695.3);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,218017.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,149223.1);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,101172.8);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,67111.73);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,43106.18);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,26182.7);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,14221.66);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,7026.729);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,2939.799);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,816.2215);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,57.44714);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(2,5.462092);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,134.621);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,178.9204);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,197.567);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,215.8402);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,225.3074);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,229.8981);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,230.5524);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,233.7735);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,238.6702);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,246.1286);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,255.5652);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,266.1496);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,275.8732);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,274.0821);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,207.8654);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,166.4572);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,136.1713);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,111.8701);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,91.37966);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,74.72594);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,59.14811);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,45.92487);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,33.32034);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,23.5824);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,15.0204);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,8.288104);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,2.042581);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(1.396506e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
