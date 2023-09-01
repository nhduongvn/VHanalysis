#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.1799932,1.133333,1.619938);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__220 = new TH1D("VbbHcc_tags_Sphericity__220","",25,0,1);
   VbbHcc_tags_Sphericity__220->SetBinContent(1,1.222745);
   VbbHcc_tags_Sphericity__220->SetBinContent(2,1.371376);
   VbbHcc_tags_Sphericity__220->SetBinContent(3,0.4267528);
   VbbHcc_tags_Sphericity__220->SetBinContent(4,0.7905875);
   VbbHcc_tags_Sphericity__220->SetBinContent(5,0.1763618);
   VbbHcc_tags_Sphericity__220->SetBinContent(6,0.08802072);
   VbbHcc_tags_Sphericity__220->SetBinContent(7,0.2669551);
   VbbHcc_tags_Sphericity__220->SetBinContent(9,0.1098299);
   VbbHcc_tags_Sphericity__220->SetBinContent(12,0.07500666);
   VbbHcc_tags_Sphericity__220->SetBinContent(14,0.06786106);
   VbbHcc_tags_Sphericity__220->SetBinError(1,0.3349124);
   VbbHcc_tags_Sphericity__220->SetBinError(2,0.3862983);
   VbbHcc_tags_Sphericity__220->SetBinError(3,0.2138402);
   VbbHcc_tags_Sphericity__220->SetBinError(4,0.2872977);
   VbbHcc_tags_Sphericity__220->SetBinError(5,0.1252613);
   VbbHcc_tags_Sphericity__220->SetBinError(6,0.08802072);
   VbbHcc_tags_Sphericity__220->SetBinError(7,0.1543134);
   VbbHcc_tags_Sphericity__220->SetBinError(9,0.1098299);
   VbbHcc_tags_Sphericity__220->SetBinError(12,0.07500666);
   VbbHcc_tags_Sphericity__220->SetBinError(14,0.06786106);
   VbbHcc_tags_Sphericity__220->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity__220->SetFillColor(ci);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__220->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__220->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__220->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
