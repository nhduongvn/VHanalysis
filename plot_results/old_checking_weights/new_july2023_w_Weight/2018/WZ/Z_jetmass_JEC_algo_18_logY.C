void Z_jetmass_JEC_algo_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_18/Z_jetmass_JEC_algo_18
//=========  (Thu Aug 10 10:42:50 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_18 = new TCanvas("Z_jetmass_JEC_algo_18", "Z_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_18->SetHighLightColor(2);
   Z_jetmass_JEC_algo_18->Range(-60,-1.050307,340,1.849325);
   Z_jetmass_JEC_algo_18->SetFillColor(0);
   Z_jetmass_JEC_algo_18->SetBorderMode(0);
   Z_jetmass_JEC_algo_18->SetBorderSize(2);
   Z_jetmass_JEC_algo_18->SetLogy();
   Z_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(4,2.419321);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(5,5.22038);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(6,9.367673);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(7,19.13432);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(8,16.54209);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(9,10.10618);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(10,8.568798);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(11,5.556142);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(12,7.067303);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(13,2.814733);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(14,4.037265);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(15,1.586469);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(16,0.8529922);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(17,0.3588162);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(18,0.3816532);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(19,1.258522);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(20,1.058098);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(24,0.3816532);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(26,0.4604326);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(27,0.3805224);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(31,0.3472849);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(44,0.4786962);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(4,1.088593);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(5,1.536199);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(6,1.971223);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(7,2.870336);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(8,2.611473);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(9,2.013087);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(10,1.84224);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(11,1.512584);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(12,1.754292);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(13,1.031687);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(14,1.2439);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(15,0.8059602);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(16,0.4949971);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(17,0.3588162);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(18,0.3816532);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(19,0.7326777);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(20,0.7761449);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(24,0.3816532);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(26,0.4604326);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(27,0.3805224);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(31,0.3472849);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(44,0.4786962);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetEntries(247);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->Draw("HIST");
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
