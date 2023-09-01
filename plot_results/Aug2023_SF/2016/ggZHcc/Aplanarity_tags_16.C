#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-0.00410838,1.133333,0.03697541);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__240 = new TH1D("VbbHcc_tags_Aplanarity__240","",50,0,1);
   VbbHcc_tags_Aplanarity__240->SetBinContent(1,0.03130194);
   VbbHcc_tags_Aplanarity__240->SetBinContent(2,0.002834715);
   VbbHcc_tags_Aplanarity__240->SetBinContent(3,0.0008295756);
   VbbHcc_tags_Aplanarity__240->SetBinContent(4,0.0005827289);
   VbbHcc_tags_Aplanarity__240->SetBinContent(5,0.0002016328);
   VbbHcc_tags_Aplanarity__240->SetBinContent(8,9.942088e-05);
   VbbHcc_tags_Aplanarity__240->SetBinError(1,0.003015065);
   VbbHcc_tags_Aplanarity__240->SetBinError(2,0.0009184804);
   VbbHcc_tags_Aplanarity__240->SetBinError(3,0.0004795644);
   VbbHcc_tags_Aplanarity__240->SetBinError(4,0.0004122316);
   VbbHcc_tags_Aplanarity__240->SetBinError(5,0.0002016328);
   VbbHcc_tags_Aplanarity__240->SetBinError(8,9.942088e-05);
   VbbHcc_tags_Aplanarity__240->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity__240->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
