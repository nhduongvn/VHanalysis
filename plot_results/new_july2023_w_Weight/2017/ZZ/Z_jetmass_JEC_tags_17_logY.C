void Z_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Thu Aug 10 10:41:33 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-1.30687,340,1.584602);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLogy();
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,0.911015);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,4.808889);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,7.590383);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,10.42093);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,8.040935);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,5.180549);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,4.054358);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,3.077771);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,0.5368392);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,1.561422);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,0.3217996);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2660549);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.5597886);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(17,0.1920028);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(18,0.2854158);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.262766);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(21,0.2174277);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(22,0.295262);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(25,0.2111933);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(29,0.2188144);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(44,0.3669504);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.513448);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.176962);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,1.482567);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.732014);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.538143);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,1.26291);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,1.128587);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.9460522);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.3863376);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.6474594);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.3217996);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(15,0.2660549);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.3996888);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(17,0.1920028);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(18,0.2854158);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.262766);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(21,0.2174277);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(22,0.295262);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(25,0.2111933);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(29,0.2188144);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(44,0.3669504);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_17->Modified();
   Z_jetmass_JEC_tags_17->cd();
   Z_jetmass_JEC_tags_17->SetSelected(Z_jetmass_JEC_tags_17);
}
