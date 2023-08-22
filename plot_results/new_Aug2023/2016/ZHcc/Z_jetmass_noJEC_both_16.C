void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Tue Aug 22 09:23:44 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-0.00283379,340,0.02550411);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.006568217);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.01409967);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.02159078);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.0128163);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.004279551);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.002109186);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.004511511);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.002381752);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.004803923);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(23,0.002369166);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinContent(37,0.002067091);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(4,0.003809537);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(5,0.005366377);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(6,0.006922179);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(7,0.005248241);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(8,0.003026183);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(9,0.002109186);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(10,0.00319021);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(11,0.002381752);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(13,0.003397576);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(23,0.002369166);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetBinError(37,0.002067091);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
