void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:21:09 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-1.93499,340,17.41491);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,1.917296);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,9.462432);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,14.74278);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,10.04943);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,9.227832);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,7.273321);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,5.178708);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,2.256228);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,2.128479);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,0.9032828);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,1.549958);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(15,1.124498);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.06718464);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(18,0.3107587);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(19,0.7505006);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.5363915);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(23,0.1572536);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(33,0.264633);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.792058);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.702511);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,2.172544);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.811679);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.707353);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,1.516282);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,1.205081);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.8086467);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.8132016);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.524298);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.7004458);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(15,0.5653265);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.06718464);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(18,0.3107587);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(19,0.4389822);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.3793864);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(23,0.1572536);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(33,0.264633);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(230);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
