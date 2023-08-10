void H_jetmass_noJEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Thu Aug 10 12:21:59 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-1.569588,340,0.52095);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLogy();
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(4,1.021583);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(5,0.947312);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(6,0.5311415);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(7,1.082299);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(8,0.2257817);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(9,0.2452321);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(10,0.5868554);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(11,0.4619077);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(13,0.08719582);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(14,0.2289943);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(15,0.1238666);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(16,0.1159231);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(17,0.2464783);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(18,0.1133473);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(4,0.3427127);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(5,0.3359483);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(6,0.244961);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(7,0.3615591);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(8,0.159663);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(9,0.1735943);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(10,0.2628843);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(11,0.2310536);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(13,0.08719582);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(14,0.1619323);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(15,0.1238666);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(16,0.1159231);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(17,0.1745933);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(18,0.1133473);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
