void H_dR_both_18_logY()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Thu Aug 10 12:21:35 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-3.222618,6.8,-0.9977625);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLogy();
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.01717296);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.01237217);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.0317836);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01971219);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01341314);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.007746397);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.02323055);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.01160406);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.01384943);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.005717142);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.002811088);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.01023855);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.008868068);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.005558708);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.008457936);
   VbbHcc_both_H_dR_stack_11->SetBinContent(19,0.001999389);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.007092572);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.006268267);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.00966364);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.008117162);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.006763034);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.004793915);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.008249322);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.005759392);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.006197704);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.004042812);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.002811088);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.005231492);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.004613822);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003941056);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.004885269);
   VbbHcc_both_H_dR_stack_11->SetBinError(19,0.001999389);
   VbbHcc_both_H_dR_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
