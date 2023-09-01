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
   Aplanarity_tags_16->Range(-0.2,-15670.64,1.133333,141035.7);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__229 = new TH1D("VbbHcc_tags_Aplanarity__229","",50,0,1);
   VbbHcc_tags_Aplanarity__229->SetBinContent(1,119395.3);
   VbbHcc_tags_Aplanarity__229->SetBinContent(2,20038.89);
   VbbHcc_tags_Aplanarity__229->SetBinContent(3,3035.857);
   VbbHcc_tags_Aplanarity__229->SetBinContent(4,709.8607);
   VbbHcc_tags_Aplanarity__229->SetBinContent(5,150.9505);
   VbbHcc_tags_Aplanarity__229->SetBinContent(6,99.16248);
   VbbHcc_tags_Aplanarity__229->SetBinContent(7,86.27657);
   VbbHcc_tags_Aplanarity__229->SetBinContent(8,37.51264);
   VbbHcc_tags_Aplanarity__229->SetBinContent(9,53.89228);
   VbbHcc_tags_Aplanarity__229->SetBinContent(10,5.444134);
   VbbHcc_tags_Aplanarity__229->SetBinContent(11,28.11715);
   VbbHcc_tags_Aplanarity__229->SetBinContent(15,19.05954);
   VbbHcc_tags_Aplanarity__229->SetBinError(1,5255.153);
   VbbHcc_tags_Aplanarity__229->SetBinError(2,3020.534);
   VbbHcc_tags_Aplanarity__229->SetBinError(3,684.6264);
   VbbHcc_tags_Aplanarity__229->SetBinError(4,206.068);
   VbbHcc_tags_Aplanarity__229->SetBinError(5,40.40415);
   VbbHcc_tags_Aplanarity__229->SetBinError(6,33.15594);
   VbbHcc_tags_Aplanarity__229->SetBinError(7,31.51676);
   VbbHcc_tags_Aplanarity__229->SetBinError(8,17.74727);
   VbbHcc_tags_Aplanarity__229->SetBinError(9,34.15415);
   VbbHcc_tags_Aplanarity__229->SetBinError(10,4.297516);
   VbbHcc_tags_Aplanarity__229->SetBinError(11,23.90067);
   VbbHcc_tags_Aplanarity__229->SetBinError(15,19.05954);
   VbbHcc_tags_Aplanarity__229->SetEntries(9563);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity__229->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->Draw("HIST");
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
