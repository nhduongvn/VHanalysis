void Z_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Thu Aug 10 10:43:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-0.9140667,340,1.001613);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLogy();
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(3,0.4786962);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(4,0.5144501);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(5,3.407973);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(6,2.298939);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(7,2.747768);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(8,1.681725);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(9,0.3941116);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(10,0.3816532);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(11,1.225324);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(13,0.3789058);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(14,0.9164222);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(15,0.3805224);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(3,0.4786962);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(4,0.5144501);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(5,1.468547);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(6,1.044205);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(7,1.162449);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(8,0.8462629);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(9,0.3941116);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(10,0.3816532);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(11,0.6697834);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(13,0.3789058);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(14,0.6528709);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(15,0.3805224);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
