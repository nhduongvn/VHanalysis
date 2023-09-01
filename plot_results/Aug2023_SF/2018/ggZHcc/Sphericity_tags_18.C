#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-0.005219043,1.133333,0.04697139);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__225 = new TH1D("VbbHcc_tags_Sphericity__225","",25,0,1);
   VbbHcc_tags_Sphericity__225->SetBinContent(1,0.03976414);
   VbbHcc_tags_Sphericity__225->SetBinContent(2,0.02375485);
   VbbHcc_tags_Sphericity__225->SetBinContent(3,0.0143629);
   VbbHcc_tags_Sphericity__225->SetBinContent(4,0.01216837);
   VbbHcc_tags_Sphericity__225->SetBinContent(5,0.006682061);
   VbbHcc_tags_Sphericity__225->SetBinContent(6,0.003221564);
   VbbHcc_tags_Sphericity__225->SetBinContent(7,0.002412382);
   VbbHcc_tags_Sphericity__225->SetBinContent(8,0.0005862092);
   VbbHcc_tags_Sphericity__225->SetBinContent(9,0.001707757);
   VbbHcc_tags_Sphericity__225->SetBinContent(11,0.001410095);
   VbbHcc_tags_Sphericity__225->SetBinContent(14,0.0003332567);
   VbbHcc_tags_Sphericity__225->SetBinContent(15,0.0004185758);
   VbbHcc_tags_Sphericity__225->SetBinError(1,0.004036816);
   VbbHcc_tags_Sphericity__225->SetBinError(2,0.003053671);
   VbbHcc_tags_Sphericity__225->SetBinError(3,0.002651274);
   VbbHcc_tags_Sphericity__225->SetBinError(4,0.002283166);
   VbbHcc_tags_Sphericity__225->SetBinError(5,0.001962659);
   VbbHcc_tags_Sphericity__225->SetBinError(6,0.001087064);
   VbbHcc_tags_Sphericity__225->SetBinError(7,0.001258952);
   VbbHcc_tags_Sphericity__225->SetBinError(8,0.0004208515);
   VbbHcc_tags_Sphericity__225->SetBinError(9,0.000712571);
   VbbHcc_tags_Sphericity__225->SetBinError(11,0.0006349887);
   VbbHcc_tags_Sphericity__225->SetBinError(14,0.0003332567);
   VbbHcc_tags_Sphericity__225->SetBinError(15,0.0004185758);
   VbbHcc_tags_Sphericity__225->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity__225->SetFillColor(ci);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__225->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__225->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__225->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
