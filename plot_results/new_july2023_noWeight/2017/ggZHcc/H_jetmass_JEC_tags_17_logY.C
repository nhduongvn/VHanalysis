void H_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Thu Aug 10 12:31:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-4.278382,340,-1.332469);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLogy();
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(3,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(4,0.003944507);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(5,0.01245634);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(6,0.008304226);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(7,0.007889015);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(8,0.006850987);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(9,0.00477493);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(10,0.002906479);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(12,0.002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(13,0.001660845);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(15,0.00145324);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(16,0.0004152113);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(17,0.0008304226);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(24,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(3,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(4,0.0009049321);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(5,0.001608106);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(6,0.001313013);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(7,0.001279767);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(8,0.001192604);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(9,0.0009956417);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(10,0.0007767892);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(11,0.000622817);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(12,0.0006565067);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(13,0.0005871975);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(15,0.0005492729);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(16,0.0002935987);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(17,0.0004152113);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(24,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
