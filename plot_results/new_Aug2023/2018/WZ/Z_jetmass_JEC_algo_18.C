void Z_jetmass_JEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_algo_18/Z_jetmass_JEC_algo_18
//=========  (Tue Aug 22 09:22:22 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_algo_18 = new TCanvas("Z_jetmass_JEC_algo_18", "Z_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_algo_18->SetHighLightColor(2);
   Z_jetmass_JEC_algo_18->Range(-60,-2.372426,340,21.35183);
   Z_jetmass_JEC_algo_18->SetFillColor(0);
   Z_jetmass_JEC_algo_18->SetBorderMode(0);
   Z_jetmass_JEC_algo_18->SetBorderSize(2);
   Z_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_algo_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(4,2.712106);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(5,5.012638);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(6,9.050286);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(7,18.07563);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(8,15.52637);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(9,9.289943);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(10,7.897216);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(11,5.154658);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(12,6.50266);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(13,2.588939);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(14,3.728213);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(15,1.448064);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(16,0.7768064);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(17,0.327958);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(18,0.3503577);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(19,1.148391);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(20,0.9663542);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(24,0.3453961);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(26,0.4208354);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(27,0.3805224);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(31,0.3174184);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinContent(44,0.4394432);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(4,1.246763);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(5,1.485467);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(6,1.916705);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(7,2.716602);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(8,2.457958);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(9,1.853137);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(10,1.700637);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(11,1.405464);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(12,1.61374);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(13,0.9493001);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(14,1.150073);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(15,0.7357001);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(16,0.4506369);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(17,0.327958);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(18,0.3503577);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(19,0.6686937);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(20,0.7100563);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(24,0.3453961);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(26,0.4208354);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(27,0.3805224);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(31,0.3174184);
   VbbHcc_algo_Z_jetmass_JEC_stack_7->SetBinError(44,0.4394432);
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
