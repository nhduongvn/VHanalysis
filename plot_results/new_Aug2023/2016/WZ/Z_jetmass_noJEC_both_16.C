void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Tue Aug 22 09:23:44 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-0.1123439,340,1.011095);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(3,0.07819951);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(4,0.6868683);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(5,0.8559533);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(6,0.6650157);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(7,0.4627189);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(8,0.6478126);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(9,0.2840307);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(10,0.3779537);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(14,0.09753612);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinContent(18,0.2099408);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(3,0.07819951);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(4,0.2436111);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(5,0.2717906);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(6,0.2404441);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(7,0.2074877);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(8,0.2456558);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(9,0.1642941);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(10,0.189398);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(14,0.09753612);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetBinError(18,0.1485491);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_7->Draw("HIST");
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
