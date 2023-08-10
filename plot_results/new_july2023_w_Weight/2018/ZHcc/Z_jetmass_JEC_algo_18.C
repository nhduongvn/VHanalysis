void Z_jetmass_JEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_18/Z_jetmass_JEC_algo_18
//=========  (Thu Aug 10 12:24:37 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_18 = new TCanvas("Z_jetmass_JEC_algo_18", "Z_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_18->SetHighLightColor(2);
   Z_jetmass_JEC_algo_18->Range(-60,-0.03466436,340,0.1915431);
   Z_jetmass_JEC_algo_18->SetFillColor(0);
   Z_jetmass_JEC_algo_18->SetBorderMode(0);
   Z_jetmass_JEC_algo_18->SetBorderSize(2);
   Z_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(4,0.005708753);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(5,0.04488049);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(6,0.09852332);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(7,0.1449297);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(8,0.160305);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(9,0.09482036);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(10,0.0824279);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(11,0.07854133);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(12,0.03366784);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(13,0.02812592);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(14,0.01025422);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(15,0.03029263);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(16,0.01550134);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(17,0.009582978);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(18,0.01216332);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(19,0.008359757);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(20,0.002823081);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(21,0.002175976);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(23,0.002923899);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(24,-0.003836532);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinContent(33,0.002923899);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(4,0.00403694);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(5,0.01152002);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(6,0.01908776);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(7,0.02090198);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(8,0.02214347);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(9,0.01683431);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(10,0.01572347);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(11,0.01563225);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(12,0.01072884);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(13,0.009015968);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(14,0.00533951);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(15,0.009657317);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(16,0.006986527);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(17,0.005612733);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(18,0.006156148);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(19,0.004827253);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(20,0.002823081);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(21,0.002175976);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(23,0.002923899);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(24,0.003836532);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetBinError(33,0.002923899);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetEntries(313);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_algo_18->Modified();
   Z_jetmass_JEC_algo_18->cd();
   Z_jetmass_JEC_algo_18->SetSelected(Z_jetmass_JEC_algo_18);
}
