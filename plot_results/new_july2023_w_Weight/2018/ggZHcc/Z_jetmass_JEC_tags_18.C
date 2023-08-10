void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Thu Aug 10 12:23:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-0.002356097,340,0.02120487);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0004371028);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.002659641);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01230381);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01795121);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01679724);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.01464048);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.01049279);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.01001016);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.00462896);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.002517751);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001807281);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0007576618);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(15,0.001078858);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0003105083);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0006438532);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(19,0.0007571959);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002279979);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0007082291);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(24,0.0003400733);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(30,0.0002938073);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(31,0.0003219266);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(43,0.0001447381);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(3,0.0004371028);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.001015865);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.002100076);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.002528861);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.002401434);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.002224275);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.001932701);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.00188156);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.001273988);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0009572646);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(13,0.0007411113);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0005420488);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(15,0.0006350301);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.0003105083);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(18,0.000455273);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(19,0.0005405127);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002279979);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0005032921);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(24,0.0003400733);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(30,0.0002938073);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(31,0.0003219266);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(43,0.0001447381);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->Draw("HIST");
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
