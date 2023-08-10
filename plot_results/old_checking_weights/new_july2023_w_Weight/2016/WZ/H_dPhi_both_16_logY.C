void H_dPhi_both_16_logY()
{
//=========Macro generated from canvas: H_dPhi_both_16/H_dPhi_both_16
//=========  (Thu Aug 10 10:43:07 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_16 = new TCanvas("H_dPhi_both_16", "H_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_16->SetHighLightColor(2);
   H_dPhi_both_16->Range(-0.8,-1.528053,4.533333,-0.2144493);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLogy();
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_7 = new TH1D("VbbHcc_both_H_dPhi_stack_7","",120,0,4);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(0,3.252948);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(7,0.11202);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(9,0.1105411);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(13,0.1245709);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(14,0.09773476);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(15,0.130595);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(22,0.11362);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(32,0.1272975);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(33,0.1133473);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(38,0.1142288);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(40,0.1148755);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(42,0.1162857);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(55,0.1297903);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(69,0.1181973);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(74,0.08023004);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(77,0.1283426);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(80,0.2268178);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(81,0.1156937);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(86,0.1252568);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(88,0.1259498);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(89,0.1143439);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(90,0.2380353);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(94,0.08719582);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(0,0.6189307);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(7,0.11202);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(9,0.1105411);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(13,0.1245709);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(14,0.09773476);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(15,0.130595);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(22,0.11362);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(32,0.1272975);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(33,0.1133473);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(38,0.1142288);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(40,0.1148755);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(42,0.1162857);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(55,0.1297903);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(69,0.1181973);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(74,0.08023004);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(77,0.1283426);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(80,0.1603924);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(81,0.1156937);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(86,0.1252568);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(88,0.1259498);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(89,0.1143439);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(90,0.1683433);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(94,0.08719582);
   VbbHcc_both_H_dPhi_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_16->Modified();
   H_dPhi_both_16->cd();
   H_dPhi_both_16->SetSelected(H_dPhi_both_16);
}
