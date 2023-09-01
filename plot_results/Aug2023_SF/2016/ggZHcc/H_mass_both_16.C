#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.0005156877,453.3333,0.004641189);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__750 = new TH1D("VbbHcc_both_H_mass__750","",40,0,400);
   VbbHcc_both_H_mass__750->SetBinContent(4,0.000264668);
   VbbHcc_both_H_mass__750->SetBinContent(7,0.0005391681);
   VbbHcc_both_H_mass__750->SetBinContent(8,0.0003814909);
   VbbHcc_both_H_mass__750->SetBinContent(9,0.001509881);
   VbbHcc_both_H_mass__750->SetBinContent(10,0.002253619);
   VbbHcc_both_H_mass__750->SetBinContent(11,0.0009897836);
   VbbHcc_both_H_mass__750->SetBinContent(12,0.003608753);
   VbbHcc_both_H_mass__750->SetBinContent(13,0.003929049);
   VbbHcc_both_H_mass__750->SetBinContent(14,0.003223759);
   VbbHcc_both_H_mass__750->SetBinContent(15,0.00144171);
   VbbHcc_both_H_mass__750->SetBinContent(16,0.001105332);
   VbbHcc_both_H_mass__750->SetBinContent(17,0.00143828);
   VbbHcc_both_H_mass__750->SetBinContent(18,0.0008795413);
   VbbHcc_both_H_mass__750->SetBinContent(19,0.001769072);
   VbbHcc_both_H_mass__750->SetBinContent(20,0.00145218);
   VbbHcc_both_H_mass__750->SetBinContent(21,0.001404845);
   VbbHcc_both_H_mass__750->SetBinContent(22,0.001101517);
   VbbHcc_both_H_mass__750->SetBinContent(23,0.001069005);
   VbbHcc_both_H_mass__750->SetBinContent(24,0.001223182);
   VbbHcc_both_H_mass__750->SetBinContent(25,0.0005695596);
   VbbHcc_both_H_mass__750->SetBinContent(27,0.001851835);
   VbbHcc_both_H_mass__750->SetBinContent(28,0.0007770412);
   VbbHcc_both_H_mass__750->SetBinContent(30,0.0003487364);
   VbbHcc_both_H_mass__750->SetBinContent(31,0.0002841322);
   VbbHcc_both_H_mass__750->SetBinContent(33,0.0003428076);
   VbbHcc_both_H_mass__750->SetBinContent(34,0.0002871494);
   VbbHcc_both_H_mass__750->SetBinContent(36,0.0005930403);
   VbbHcc_both_H_mass__750->SetBinContent(37,0.0005238348);
   VbbHcc_both_H_mass__750->SetBinContent(38,0.0002321584);
   VbbHcc_both_H_mass__750->SetBinContent(39,0.0002789308);
   VbbHcc_both_H_mass__750->SetBinContent(40,0.0005716499);
   VbbHcc_both_H_mass__750->SetBinContent(41,0.002818932);
   VbbHcc_both_H_mass__750->SetBinError(4,0.000264668);
   VbbHcc_both_H_mass__750->SetBinError(7,0.0003819648);
   VbbHcc_both_H_mass__750->SetBinError(8,0.0003814909);
   VbbHcc_both_H_mass__750->SetBinError(9,0.0006974644);
   VbbHcc_both_H_mass__750->SetBinError(10,0.0008027968);
   VbbHcc_both_H_mass__750->SetBinError(11,0.0005745487);
   VbbHcc_both_H_mass__750->SetBinError(12,0.0009795067);
   VbbHcc_both_H_mass__750->SetBinError(13,0.001060659);
   VbbHcc_both_H_mass__750->SetBinError(14,0.0009587786);
   VbbHcc_both_H_mass__750->SetBinError(15,0.0006520785);
   VbbHcc_both_H_mass__750->SetBinError(16,0.0005545674);
   VbbHcc_both_H_mass__750->SetBinError(17,0.0006432688);
   VbbHcc_both_H_mass__750->SetBinError(18,0.0005114822);
   VbbHcc_both_H_mass__750->SetBinError(19,0.0007309743);
   VbbHcc_both_H_mass__750->SetBinError(20,0.0006560885);
   VbbHcc_both_H_mass__750->SetBinError(21,0.0006361369);
   VbbHcc_both_H_mass__750->SetBinError(22,0.000551564);
   VbbHcc_both_H_mass__750->SetBinError(23,0.0005445137);
   VbbHcc_both_H_mass__750->SetBinError(24,0.0006249783);
   VbbHcc_both_H_mass__750->SetBinError(25,0.0004035418);
   VbbHcc_both_H_mass__750->SetBinError(27,0.0007590483);
   VbbHcc_both_H_mass__750->SetBinError(28,0.0004566542);
   VbbHcc_both_H_mass__750->SetBinError(30,0.0003487364);
   VbbHcc_both_H_mass__750->SetBinError(31,0.0002841322);
   VbbHcc_both_H_mass__750->SetBinError(33,0.0003428076);
   VbbHcc_both_H_mass__750->SetBinError(34,0.0002871494);
   VbbHcc_both_H_mass__750->SetBinError(36,0.0004193476);
   VbbHcc_both_H_mass__750->SetBinError(37,0.0003704079);
   VbbHcc_both_H_mass__750->SetBinError(38,0.0002321584);
   VbbHcc_both_H_mass__750->SetBinError(39,0.0002789308);
   VbbHcc_both_H_mass__750->SetBinError(40,0.0004042654);
   VbbHcc_both_H_mass__750->SetBinError(41,0.0009457831);
   VbbHcc_both_H_mass__750->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_mass__750->SetFillColor(ci);
   VbbHcc_both_H_mass__750->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__750->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__750->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__750->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__750->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__750->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__750->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__750->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__750->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__750->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__750->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
