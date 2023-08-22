void Z_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_18/Z_jetmass_noJEC_both_18
//=========  (Tue Aug 22 09:19:13 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_18 = new TCanvas("Z_jetmass_noJEC_both_18", "Z_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_18->SetHighLightColor(2);
   Z_jetmass_noJEC_both_18->Range(-60,-1.42297,340,1.762438);
   Z_jetmass_noJEC_both_18->SetFillColor(0);
   Z_jetmass_noJEC_both_18->SetBorderMode(0);
   Z_jetmass_noJEC_both_18->SetBorderSize(2);
   Z_jetmass_noJEC_both_18->SetLogy();
   Z_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.5679598);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,5.274389);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,8.890748);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,14.66722);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,9.332329);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,7.83369);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,6.496738);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,4.397581);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,2.822608);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,1.977083);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.191777);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,1.475035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,1.083439);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(16,0.5069527);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.28983);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.3107587);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.1943129);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(20,0.2663578);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(21,0.2743643);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.1572536);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(23,0.2751797);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(32,0.264633);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.4018823);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,1.299008);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.661775);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,2.158658);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,1.761968);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,1.580923);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,1.403277);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,1.121337);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.8997541);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.8129837);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.5997971);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.6652708);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.5493772);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(16,0.3606328);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.28983);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(18,0.3107587);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(19,0.1943129);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(20,0.2663578);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(21,0.2743643);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(22,0.1572536);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(23,0.2751797);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(32,0.264633);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_18->Modified();
   Z_jetmass_noJEC_both_18->cd();
   Z_jetmass_noJEC_both_18->SetSelected(Z_jetmass_noJEC_both_18);
}
