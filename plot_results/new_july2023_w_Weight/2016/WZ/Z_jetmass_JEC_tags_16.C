void Z_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:23:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-0.1802527,340,1.622274);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(4,0.345528);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(5,1.373354);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(6,0.9678823);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(7,0.5990701);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(8,0.802924);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(9,0.4803251);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(10,0.1162857);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(12,0.1139767);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(14,0.1168895);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(15,0.1283426);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(16,0.19385);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(18,0.3728414);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(4,0.1995371);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(5,0.3978117);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(6,0.3427532);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(7,0.2682577);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(8,0.3045428);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(9,0.2403979);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(10,0.1162857);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(12,0.1139767);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(14,0.1168895);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(15,0.1283426);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(16,0.1390912);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(18,0.2156795);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
