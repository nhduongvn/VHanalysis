void Z_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Tue Aug 22 09:19:12 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-4.240474,340,-1.299454);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLogy();
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.0005242431);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.002929304);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.01213979);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01345536);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.009709634);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.00697099);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.005177779);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.001764488);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.003453688);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.001339541);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.0009851019);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.001347735);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.0006733941);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0002448374);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0004780694);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0002598584);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(23,0.0002262863);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0003080752);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0007801164);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001564157);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(6,0.001701828);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001421475);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(8,0.001213827);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(9,0.00105887);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0005979399);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0008079171);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0005160478);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0004592441);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0005720634);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0003888236);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0002448374);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0003385394);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0002598584);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(23,0.0002262863);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
