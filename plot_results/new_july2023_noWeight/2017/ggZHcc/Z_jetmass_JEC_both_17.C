void Z_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_17/Z_jetmass_JEC_both_17
//=========  (Thu Aug 10 12:29:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_17 = new TCanvas("Z_jetmass_JEC_both_17", "Z_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_17->SetHighLightColor(2);
   Z_jetmass_JEC_both_17->Range(-60,-0.002070867,340,0.0186378);
   Z_jetmass_JEC_both_17->SetFillColor(0);
   Z_jetmass_JEC_both_17->SetBorderMode(0);
   Z_jetmass_JEC_both_17->SetBorderSize(2);
   Z_jetmass_JEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.001245634);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.0110031);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.01577803);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.01017268);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.008096621);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.006020564);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.002698874);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.002906479);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001868451);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(13,0.00145324);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(15,0.0004152113);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0004152113);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.0005085279);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.001511392);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.001809864);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.00145324);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.001296497);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.001117991);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.0007485328);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.0007767892);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.000622817);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(13,0.0005492729);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(15,0.0002935987);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.0002935987);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(23,0.0002076057);
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
