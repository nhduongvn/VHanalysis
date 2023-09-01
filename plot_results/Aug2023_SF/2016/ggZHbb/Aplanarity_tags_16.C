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
   Aplanarity_tags_16->Range(-0.2,-1.74967,1.133333,15.74703);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__238 = new TH1D("VbbHcc_tags_Aplanarity__238","",50,0,1);
   VbbHcc_tags_Aplanarity__238->SetBinContent(1,13.33082);
   VbbHcc_tags_Aplanarity__238->SetBinContent(2,1.380757);
   VbbHcc_tags_Aplanarity__238->SetBinContent(3,0.3294793);
   VbbHcc_tags_Aplanarity__238->SetBinContent(4,0.1228604);
   VbbHcc_tags_Aplanarity__238->SetBinContent(5,0.04684423);
   VbbHcc_tags_Aplanarity__238->SetBinContent(6,0.02517205);
   VbbHcc_tags_Aplanarity__238->SetBinContent(7,0.01543465);
   VbbHcc_tags_Aplanarity__238->SetBinContent(8,0.007889658);
   VbbHcc_tags_Aplanarity__238->SetBinContent(9,0.007614537);
   VbbHcc_tags_Aplanarity__238->SetBinContent(10,0.004593698);
   VbbHcc_tags_Aplanarity__238->SetBinContent(11,0.001680128);
   VbbHcc_tags_Aplanarity__238->SetBinContent(12,0.001384499);
   VbbHcc_tags_Aplanarity__238->SetBinContent(13,0.001436173);
   VbbHcc_tags_Aplanarity__238->SetBinContent(14,0.0006675882);
   VbbHcc_tags_Aplanarity__238->SetBinContent(15,0.0003587362);
   VbbHcc_tags_Aplanarity__238->SetBinContent(16,0.0003837043);
   VbbHcc_tags_Aplanarity__238->SetBinContent(17,0.0002641559);
   VbbHcc_tags_Aplanarity__238->SetBinContent(18,0.001185943);
   VbbHcc_tags_Aplanarity__238->SetBinError(1,0.06594415);
   VbbHcc_tags_Aplanarity__238->SetBinError(2,0.02102431);
   VbbHcc_tags_Aplanarity__238->SetBinError(3,0.01045365);
   VbbHcc_tags_Aplanarity__238->SetBinError(4,0.006351264);
   VbbHcc_tags_Aplanarity__238->SetBinError(5,0.003971436);
   VbbHcc_tags_Aplanarity__238->SetBinError(6,0.002917085);
   VbbHcc_tags_Aplanarity__238->SetBinError(7,0.002196658);
   VbbHcc_tags_Aplanarity__238->SetBinError(8,0.001608292);
   VbbHcc_tags_Aplanarity__238->SetBinError(9,0.001616632);
   VbbHcc_tags_Aplanarity__238->SetBinError(10,0.001268466);
   VbbHcc_tags_Aplanarity__238->SetBinError(11,0.0007756935);
   VbbHcc_tags_Aplanarity__238->SetBinError(12,0.0007051914);
   VbbHcc_tags_Aplanarity__238->SetBinError(13,0.000650668);
   VbbHcc_tags_Aplanarity__238->SetBinError(14,0.0004740903);
   VbbHcc_tags_Aplanarity__238->SetBinError(15,0.0003587362);
   VbbHcc_tags_Aplanarity__238->SetBinError(16,0.0003837043);
   VbbHcc_tags_Aplanarity__238->SetBinError(17,0.0002641559);
   VbbHcc_tags_Aplanarity__238->SetBinError(18,0.0006989771);
   VbbHcc_tags_Aplanarity__238->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity__238->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__238->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__238->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__238->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__238->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__238->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__238->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__238->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__238->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__238->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__238->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__238->Draw("HIST");
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
