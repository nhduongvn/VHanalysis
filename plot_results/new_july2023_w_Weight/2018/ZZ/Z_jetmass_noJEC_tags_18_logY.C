void Z_jetmass_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Thu Aug 10 12:20:33 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-1.372987,340,1.746099);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLogy();
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(4,5.122618);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(5,11.05785);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(6,14.34305);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(7,9.919069);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(8,7.057641);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(9,6.977431);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(10,5.959431);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(11,2.891572);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(12,2.464643);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(13,1.602527);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(14,1.621464);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(15,1.239554);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.3913378);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(18,0.3171006);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(19,0.2125962);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(20,0.5838508);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(21,0.3001798);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(22,0.1737609);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinContent(32,0.2895328);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(4,1.341814);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(5,1.906502);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(6,2.195685);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(7,1.882726);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(8,1.512164);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(9,1.501602);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(10,1.352629);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(11,0.9173698);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(12,0.939064);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(13,0.7215286);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(14,0.7314106);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(15,0.6232269);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(17,0.3256746);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(18,0.3171006);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(19,0.2125962);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(20,0.4128587);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(21,0.3001798);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(22,0.1737609);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetBinError(32,0.2895328);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_18->Modified();
   Z_jetmass_noJEC_tags_18->cd();
   Z_jetmass_noJEC_tags_18->SetSelected(Z_jetmass_noJEC_tags_18);
}
