void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Thu Aug 10 12:23:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-2.066615,340,18.59953);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,2.084998);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,10.1199);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,15.74564);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,10.67287);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,9.834937);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,7.570021);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,5.492267);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,2.454962);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,2.350007);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,0.9912957);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,1.700415);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(15,1.239554);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.07423717);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(18,0.3171006);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(19,0.8240148);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.5897126);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(23,0.1737609);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(33,0.2895328);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.8624992);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.814753);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,2.316254);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.920028);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.81555);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,1.564904);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,1.271613);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.8787342);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.8979548);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.5752361);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.7685187);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(15,0.6232269);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.07423717);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(18,0.3171006);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(19,0.4820508);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.4170577);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(23,0.1737609);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(33,0.2895328);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
