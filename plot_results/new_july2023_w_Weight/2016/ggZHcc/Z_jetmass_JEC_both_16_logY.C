void Z_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:22:09 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-4.007358,340,-1.414353);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLogy();
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0003800229);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.003129119);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.00822721);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01118915);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.007063241);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.006587755);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.005718837);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.002485848);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.0027556);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.00146099);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0003912579);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.001063915);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0003816148);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(18,0.000375922);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0003861515);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0003572505);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(3,0.0003800229);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.00110777);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.001797314);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.002082878);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.001634883);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.001574255);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.001477703);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.0009449689);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.001042856);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.0007372082);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0003912579);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.000616959);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0003816148);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(18,0.000375922);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0003861515);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(23,0.0003572505);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
