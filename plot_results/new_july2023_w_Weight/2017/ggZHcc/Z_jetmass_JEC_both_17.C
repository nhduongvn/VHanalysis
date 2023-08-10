void Z_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_17/Z_jetmass_JEC_both_17
//=========  (Thu Aug 10 12:25:23 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_17 = new TCanvas("Z_jetmass_JEC_both_17", "Z_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_17->SetHighLightColor(2);
   Z_jetmass_JEC_both_17->Range(-60,-0.002397139,340,0.02157425);
   Z_jetmass_JEC_both_17->SetFillColor(0);
   Z_jetmass_JEC_both_17->SetBorderMode(0);
   Z_jetmass_JEC_both_17->SetBorderSize(2);
   Z_jetmass_JEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.001381032);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.01207182);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01826392);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01191832);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.009183806);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.006743729);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.002923379);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.002814628);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001802695);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(13,0.001726785);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.00102596);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0004779282);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0005220531);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0005246283);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002758581);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0002609992);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.0005704935);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.001706737);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.002126139);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.001718976);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.001490351);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.00127698);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.0008537674);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.0007604876);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.0006184158);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(13,0.0006656067);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004825275);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(15,0.0003385923);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.0003691506);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0003709744);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002758581);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(23,0.0002609992);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(308);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_17->Modified();
   Z_jetmass_JEC_both_17->cd();
   Z_jetmass_JEC_both_17->SetSelected(Z_jetmass_JEC_both_17);
}
