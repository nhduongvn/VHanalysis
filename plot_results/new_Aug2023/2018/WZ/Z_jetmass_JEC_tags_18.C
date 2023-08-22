void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Tue Aug 22 09:21:09 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-0.3735653,340,3.362088);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(3,0.4346562);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(4,0.4671207);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(5,2.694852);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(6,1.362913);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(7,2.846212);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(8,2.037433);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(9,0.8324832);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(10,0.3453961);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(11,1.206468);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(13,0.3478356);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(14,0.3690103);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(15,0.3443727);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(3,0.4346562);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(4,0.4671207);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(5,1.299399);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(6,0.7966391);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(7,1.114623);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(8,0.9217849);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(9,0.5939625);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(10,0.3453961);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(11,0.6645111);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(13,0.3478356);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(14,0.3690103);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(15,0.3443727);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetEntries(32);

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
