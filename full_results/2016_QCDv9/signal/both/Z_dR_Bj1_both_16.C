#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Thu Mar  9 13:09:07 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.310117,-0.2303462,7.029799,1.689206);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_both_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_both_16->SetBottomMargin(0.12);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.497251);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",30,0,6);
   st_stack_181->SetMinimum(0);
   st_stack_181->SetMaximum(1.497251);
   st_stack_181->SetDirectory(0);
   st_stack_181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_181->SetLineColor(ci);
   st_stack_181->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_181->GetXaxis()->SetRange(1,30);
   st_stack_181->GetXaxis()->SetLabelFont(42);
   st_stack_181->GetXaxis()->SetTitleOffset(1);
   st_stack_181->GetXaxis()->SetTitleFont(42);
   st_stack_181->GetYaxis()->SetTitle("Event/0.2");
   st_stack_181->GetYaxis()->SetLabelFont(42);
   st_stack_181->GetYaxis()->SetTitleSize(0.037);
   st_stack_181->GetYaxis()->SetTitleFont(42);
   st_stack_181->GetZaxis()->SetLabelFont(42);
   st_stack_181->GetZaxis()->SetTitleOffset(1);
   st_stack_181->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_181);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,0.1832455);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,0.7767421);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,0.8697324);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,0.6017016);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,0.3391409);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,0.1859805);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,0.1367504);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,0.1394854);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,0.06837519);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,0.08205022);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,0.0738452);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,0.06837519);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,0.05196514);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,0.05196514);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,0.04376012);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,0.03282009);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,0.02188006);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,0.01914505);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,0.022387);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,0.04609116);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,0.04877217);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,0.04056672);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,0.03045575);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,0.02255345);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,0.01933942);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,0.01953186);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,0.01498025);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,0.01421152);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,0.01192162);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,0.01192162);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,0.01094003);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,0.009474344);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,0.007735769);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,0.00723615);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,0.08645834);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,0.3708419);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,0.3729855);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,0.2400826);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,0.1189695);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,0.07359676);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,0.04858816);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,0.04251464);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,0.03286846);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,0.02858127);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,0.02608041);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,0.03215393);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,0.02286501);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,0.02143595);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,0.01893509);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,0.01643423);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,0.009288912);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,0.006073519);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,0.002500861);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,0.002500861);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,0.005557752);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,0.01151039);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,0.01154361);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,0.009261389);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,0.00651949);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,0.00512773);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,0.0041664);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,0.00389731);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,0.003426774);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,0.003195483);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,0.003052481);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,0.003389321);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,0.002767369);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,0.002600935);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,0.002423095);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,0.001821706);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,0.001473045);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,0.0009452366);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.0009452366);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
