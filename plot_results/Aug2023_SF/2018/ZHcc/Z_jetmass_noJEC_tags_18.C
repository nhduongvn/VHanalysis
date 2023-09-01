#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-0.004861895,340,0.04375706);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__344 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__344","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(3,0.002848447);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(4,0.006601815);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(5,0.02287859);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(6,0.03704301);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(7,0.03133781);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(8,0.02301676);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(9,0.02942303);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(10,0.007260558);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(11,0.01098553);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(12,0.006439859);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(13,0.00383355);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(14,0.002005537);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(15,0.003099963);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(17,0.003835449);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinContent(27,0.001908114);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(3,0.002848447);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(4,0.003813814);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(5,0.007321272);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(6,0.01056435);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(7,0.009512834);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(8,0.008026855);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(9,0.009086901);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(10,0.00419232);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(11,0.005879612);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(12,0.003733043);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(13,0.002715342);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(14,0.002005537);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(15,0.003099963);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(17,0.003835449);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetBinError(27,0.001908114);
   VbbHcc_tags_Z_jetmass_noJEC__344->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_jetmass_noJEC__344->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__344->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__344->Draw("HIST");
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
