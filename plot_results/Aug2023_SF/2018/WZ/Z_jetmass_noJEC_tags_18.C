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
   Z_jetmass_noJEC_tags_18->Range(-60,-0.8031871,340,7.228684);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__340 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__340","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(4,1.977327);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(5,6.11952);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(6,1.077799);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(7,1.092245);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(8,4.275613);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(9,1.290473);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(10,1.212033);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(11,1.310932);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(13,0.6143759);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(15,0.5004492);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinContent(16,0.9532567);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(4,1.173402);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(5,3.064303);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(6,0.7903517);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(7,0.7920131);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(8,2.073977);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(9,1.290473);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(10,0.876882);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(11,0.8962497);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(13,0.6143759);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(15,0.5004492);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetBinError(16,0.9532567);
   VbbHcc_tags_Z_jetmass_noJEC__340->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_noJEC__340->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__340->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__340->Draw("HIST");
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
