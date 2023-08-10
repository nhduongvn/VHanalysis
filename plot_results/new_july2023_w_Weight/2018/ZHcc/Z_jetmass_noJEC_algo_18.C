void Z_jetmass_noJEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_18/Z_jetmass_noJEC_algo_18
//=========  (Thu Aug 10 12:24:35 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_algo_18 = new TCanvas("Z_jetmass_noJEC_algo_18", "Z_jetmass_noJEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_algo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_18->Range(-60,-0.03240914,340,0.1772501);
   Z_jetmass_noJEC_algo_18->SetFillColor(0);
   Z_jetmass_noJEC_algo_18->SetBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetBorderSize(2);
   Z_jetmass_noJEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(4,0.01804169);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(5,0.05884885);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(6,0.1121237);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(7,0.1482971);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(8,0.1421739);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(9,0.08561597);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(10,0.08805902);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(11,0.0537815);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(12,0.03684251);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(13,0.02848122);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(14,0.02309996);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(15,0.02012845);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(16,0.01248485);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(17,0.01632209);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(18,0.008147156);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(19,0.008459888);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(20,0.002175976);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(23,0.002923899);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(25,-0.003836532);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinContent(33,0.002923899);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(4,0.007421203);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(5,0.01417483);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(6,0.01941);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(7,0.02126184);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(8,0.02082917);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(9,0.01582425);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(10,0.01646737);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(11,0.01285984);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(12,0.01117735);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(13,0.009118932);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(14,0.008437581);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(15,0.007612065);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(16,0.006300567);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(17,0.007388745);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(18,0.004714003);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(19,0.004884435);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(20,0.002175976);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(23,0.002923899);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(25,0.003836532);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetBinError(33,0.002923899);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetEntries(313);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_18->Modified();
   Z_jetmass_noJEC_algo_18->cd();
   Z_jetmass_noJEC_algo_18->SetSelected(Z_jetmass_noJEC_algo_18);
}
