void Z_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:23:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-2.086872,340,18.78184);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,3.117168);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,8.193246);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,15.89997);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,10.18213);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,8.950256);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,7.185646);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,4.708898);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,2.373558);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.607253);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,1.172221);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,1.746198);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,1.155411);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2255884);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(18,0.3107587);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(19,0.7505006);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2743643);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(23,0.1572536);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(24,0.2751797);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(33,0.264633);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.9961445);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.579409);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,2.272705);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.800134);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.683373);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,1.489513);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,1.161616);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.8504676);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.7246914);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.5892503);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.7262258);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.5806342);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2255884);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(18,0.3107587);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(19,0.4389822);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(20,0.2743643);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(23,0.1572536);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(24,0.2751797);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(33,0.264633);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
