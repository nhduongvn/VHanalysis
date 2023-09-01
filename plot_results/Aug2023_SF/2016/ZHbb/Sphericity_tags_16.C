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
   Sphericity_tags_16->Range(-0.2,-1.346302,1.133333,12.11671);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__222 = new TH1D("VbbHcc_tags_Sphericity__222","",25,0,1);
   VbbHcc_tags_Sphericity__222->SetBinContent(1,10.25753);
   VbbHcc_tags_Sphericity__222->SetBinContent(2,9.053038);
   VbbHcc_tags_Sphericity__222->SetBinContent(3,5.026356);
   VbbHcc_tags_Sphericity__222->SetBinContent(4,3.44379);
   VbbHcc_tags_Sphericity__222->SetBinContent(5,2.267242);
   VbbHcc_tags_Sphericity__222->SetBinContent(6,1.151553);
   VbbHcc_tags_Sphericity__222->SetBinContent(7,0.4384553);
   VbbHcc_tags_Sphericity__222->SetBinContent(8,0.1963045);
   VbbHcc_tags_Sphericity__222->SetBinContent(9,0.1443202);
   VbbHcc_tags_Sphericity__222->SetBinContent(10,0.109552);
   VbbHcc_tags_Sphericity__222->SetBinContent(11,0.05491223);
   VbbHcc_tags_Sphericity__222->SetBinContent(12,0.0391364);
   VbbHcc_tags_Sphericity__222->SetBinContent(13,0.03635248);
   VbbHcc_tags_Sphericity__222->SetBinContent(14,0.02650314);
   VbbHcc_tags_Sphericity__222->SetBinContent(15,0.02424216);
   VbbHcc_tags_Sphericity__222->SetBinContent(16,0.01407463);
   VbbHcc_tags_Sphericity__222->SetBinContent(17,0.0108512);
   VbbHcc_tags_Sphericity__222->SetBinContent(18,0.01022342);
   VbbHcc_tags_Sphericity__222->SetBinContent(19,0.002822981);
   VbbHcc_tags_Sphericity__222->SetBinError(1,0.1142621);
   VbbHcc_tags_Sphericity__222->SetBinError(2,0.1065315);
   VbbHcc_tags_Sphericity__222->SetBinError(3,0.07962396);
   VbbHcc_tags_Sphericity__222->SetBinError(4,0.06621484);
   VbbHcc_tags_Sphericity__222->SetBinError(5,0.05363325);
   VbbHcc_tags_Sphericity__222->SetBinError(6,0.03855081);
   VbbHcc_tags_Sphericity__222->SetBinError(7,0.02355401);
   VbbHcc_tags_Sphericity__222->SetBinError(8,0.01590837);
   VbbHcc_tags_Sphericity__222->SetBinError(9,0.01417261);
   VbbHcc_tags_Sphericity__222->SetBinError(10,0.01232843);
   VbbHcc_tags_Sphericity__222->SetBinError(11,0.008408464);
   VbbHcc_tags_Sphericity__222->SetBinError(12,0.007135614);
   VbbHcc_tags_Sphericity__222->SetBinError(13,0.007099463);
   VbbHcc_tags_Sphericity__222->SetBinError(14,0.006167292);
   VbbHcc_tags_Sphericity__222->SetBinError(15,0.005728178);
   VbbHcc_tags_Sphericity__222->SetBinError(16,0.004322894);
   VbbHcc_tags_Sphericity__222->SetBinError(17,0.003883234);
   VbbHcc_tags_Sphericity__222->SetBinError(18,0.003693566);
   VbbHcc_tags_Sphericity__222->SetBinError(19,0.002088906);
   VbbHcc_tags_Sphericity__222->SetEntries(28391);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity__222->SetFillColor(ci);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__222->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__222->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__222->Draw("HIST");
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
