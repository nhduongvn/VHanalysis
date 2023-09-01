#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_18/H_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_18 = new TCanvas("H_jetmass_JEC_tags_18", "H_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_18->SetHighLightColor(2);
   H_jetmass_JEC_tags_18->Range(-60,-0.005984499,340,0.05386049);
   H_jetmass_JEC_tags_18->SetFillColor(0);
   H_jetmass_JEC_tags_18->SetBorderMode(0);
   H_jetmass_JEC_tags_18->SetBorderSize(2);
   H_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__299 = new TH1D("VbbHcc_tags_H_jetmass_JEC__299","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(4,0.01157438);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(5,0.02243475);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(6,0.04559618);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(7,0.03494971);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(8,0.01683276);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(9,0.008727013);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(10,0.0178417);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(11,0.009726196);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(12,0.005263039);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(14,0.005585677);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(15,0.002607196);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(16,0.002440408);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(18,0.002371103);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(19,0.002028649);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(21,0.001690799);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinContent(27,0.002848447);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(4,0.005827653);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(5,0.007752393);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(6,0.01227165);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(7,0.009241544);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(8,0.006507908);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(9,0.005178262);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(10,0.00683521);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(11,0.004975948);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(12,0.003078324);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(14,0.004141458);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(15,0.002607196);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(16,0.002440408);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(18,0.002371103);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(19,0.002028649);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(21,0.001690799);
   VbbHcc_tags_H_jetmass_JEC__299->SetBinError(27,0.002848447);
   VbbHcc_tags_H_jetmass_JEC__299->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC__299->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__299->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__299->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__299->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_18->Modified();
   H_jetmass_JEC_tags_18->cd();
   H_jetmass_JEC_tags_18->SetSelected(H_jetmass_JEC_tags_18);
}
