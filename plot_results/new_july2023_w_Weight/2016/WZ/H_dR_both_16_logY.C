void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:21:34 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-1.556194,6.8,0.4004023);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_7 = new TH1D("VbbHcc_both_H_dR_stack_7","",30,0,6);
   VbbHcc_both_H_dR_stack_7->SetBinContent(3,0.845656);
   VbbHcc_both_H_dR_stack_7->SetBinContent(4,0.3584787);
   VbbHcc_both_H_dR_stack_7->SetBinContent(5,0.4600077);
   VbbHcc_both_H_dR_stack_7->SetBinContent(6,0.2331017);
   VbbHcc_both_H_dR_stack_7->SetBinContent(7,0.2295864);
   VbbHcc_both_H_dR_stack_7->SetBinContent(8,0.2406448);
   VbbHcc_both_H_dR_stack_7->SetBinContent(10,0.2287687);
   VbbHcc_both_H_dR_stack_7->SetBinContent(11,0.3722059);
   VbbHcc_both_H_dR_stack_7->SetBinContent(12,0.239674);
   VbbHcc_both_H_dR_stack_7->SetBinContent(13,0.5476697);
   VbbHcc_both_H_dR_stack_7->SetBinContent(14,0.4578169);
   VbbHcc_both_H_dR_stack_7->SetBinContent(15,0.3476239);
   VbbHcc_both_H_dR_stack_7->SetBinContent(16,0.7148507);
   VbbHcc_both_H_dR_stack_7->SetBinContent(17,0.2996727);
   VbbHcc_both_H_dR_stack_7->SetBinContent(18,0.2426865);
   VbbHcc_both_H_dR_stack_7->SetBinContent(22,0.1122779);
   VbbHcc_both_H_dR_stack_7->SetBinContent(25,0.08719582);
   VbbHcc_both_H_dR_stack_7->SetBinError(3,0.3210284);
   VbbHcc_both_H_dR_stack_7->SetBinError(4,0.2072906);
   VbbHcc_both_H_dR_stack_7->SetBinError(5,0.2300249);
   VbbHcc_both_H_dR_stack_7->SetBinError(6,0.1648783);
   VbbHcc_both_H_dR_stack_7->SetBinError(7,0.1623558);
   VbbHcc_both_H_dR_stack_7->SetBinError(8,0.1704472);
   VbbHcc_both_H_dR_stack_7->SetBinError(10,0.1617641);
   VbbHcc_both_H_dR_stack_7->SetBinError(11,0.2151938);
   VbbHcc_both_H_dR_stack_7->SetBinError(12,0.1696072);
   VbbHcc_both_H_dR_stack_7->SetBinError(13,0.2471849);
   VbbHcc_both_H_dR_stack_7->SetBinError(14,0.2289252);
   VbbHcc_both_H_dR_stack_7->SetBinError(15,0.2009634);
   VbbHcc_both_H_dR_stack_7->SetBinError(16,0.2921664);
   VbbHcc_both_H_dR_stack_7->SetBinError(17,0.182517);
   VbbHcc_both_H_dR_stack_7->SetBinError(18,0.1718905);
   VbbHcc_both_H_dR_stack_7->SetBinError(22,0.1122779);
   VbbHcc_both_H_dR_stack_7->SetBinError(25,0.08719582);
   VbbHcc_both_H_dR_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_7->Draw("HIST");
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
