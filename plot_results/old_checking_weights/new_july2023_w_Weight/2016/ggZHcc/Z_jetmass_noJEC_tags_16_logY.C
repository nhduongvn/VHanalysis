void Z_jetmass_noJEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_16/Z_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 10:41:31 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_16 = new TCanvas("Z_jetmass_noJEC_tags_16", "Z_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_16->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_16->Range(-60,-4.005514,340,-1.430948);
   Z_jetmass_noJEC_tags_16->SetFillColor(0);
   Z_jetmass_noJEC_tags_16->SetBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetBorderSize(2);
   Z_jetmass_noJEC_tags_16->SetLogy();
   Z_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.000428433);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.003863263);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.008024113);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01081551);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.00787966);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.003911976);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.004830862);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.001166459);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.001093148);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.002614618);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.0003912579);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0007558288);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(21,0.0003915395);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(22,0.0007738138);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(24,0.0003572505);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(26,0.0003751045);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinContent(33,0.0003897716);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(3,0.000428433);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(4,0.001222362);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001754339);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(6,0.002046728);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001730368);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(8,0.001203502);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001349754);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0006734805);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0006399921);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0009939663);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0003912579);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0005347989);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(21,0.0003915395);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(22,0.00054717);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(24,0.0003572505);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(26,0.0003751045);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetBinError(33,0.0003897716);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_16->Modified();
   Z_jetmass_noJEC_tags_16->cd();
   Z_jetmass_noJEC_tags_16->SetSelected(Z_jetmass_noJEC_tags_16);
}
