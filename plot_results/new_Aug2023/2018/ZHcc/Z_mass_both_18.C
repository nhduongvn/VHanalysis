void Z_mass_both_18()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Tue Aug 22 09:22:26 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(-80,-0.005541354,453.3333,0.04987218);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetLeftMargin(0.15);
   Z_mass_both_18->SetFrameBorderMode(0);
   Z_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.00221053);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002360595);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004794448);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.004238681);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03478134);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04221984);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02569631);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.007923762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002190433);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.00225108);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004590214);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.00201936);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002294171);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002284175);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.002390853);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.002884364);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.002212627);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002141222);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.00210716);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.004697646);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.002640973);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02693845);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.00221053);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002360595);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003400452);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003000102);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.009096566);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.01014432);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.007954476);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004039688);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002190433);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.00225108);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003249145);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.00201936);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002294171);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002284175);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002390853);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.002884364);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.002212627);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002141222);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002203227);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.00210716);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.003322477);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.002640973);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.00797015);
   VbbHcc_both_Z_mass_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
