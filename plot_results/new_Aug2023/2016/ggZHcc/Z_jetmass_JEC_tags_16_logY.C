void Z_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Tue Aug 22 09:16:49 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-4.076413,340,-1.618394);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLogy();
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(4,0.001975929);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(5,0.006351482);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(6,0.007215307);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(7,0.006008469);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(8,0.004028543);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(9,0.003031392);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(10,0.001378143);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(11,0.001467504);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001409459);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0002993123);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0005785762);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(20,0.0002995277);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002954059);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(22,0.0003136188);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0003572505);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(25,0.0003034595);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinContent(33,0.0003153252);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(4,0.0007480428);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(5,0.001358854);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(6,0.001418518);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(7,0.001291557);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(8,0.001055356);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(9,0.0009201459);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(10,0.0006219351);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(11,0.0006567552);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(12,0.0006350693);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(14,0.0002993123);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(16,0.000409187);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(20,0.0002995277);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002954059);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(22,0.0003136188);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(23,0.0003572505);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(25,0.0003034595);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetBinError(33,0.0003153252);
   VbbHcc_tags_Z_jetmass_JEC_stack_12->SetEntries(127);

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
