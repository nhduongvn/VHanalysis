void H_jetmass_noJEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Tue Aug 22 09:18:58 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-1.672306,340,0.4094035);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLogy();
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(4,0.541099);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(5,0.6855611);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(6,0.4005405);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(7,0.8388488);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(8,0.1830398);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(9,0.1831183);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(10,0.4518859);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(11,0.3533061);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(13,0.0686903);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(14,0.1768874);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(15,0.0975785);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(16,0.09096269);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(17,0.2000838);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(18,0.09442741);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(4,0.2218479);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(5,0.2432554);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(6,0.185082);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(7,0.2807828);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(8,0.1295312);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(9,0.1297598);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(10,0.2031199);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(11,0.1771287);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(13,0.0686903);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(14,0.125122);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(15,0.0975785);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(16,0.09096269);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(17,0.1420172);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(18,0.09442741);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetEntries(49);

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
