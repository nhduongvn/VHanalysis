#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-2.913189,1.133333,26.2187);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__238 = new TH1D("VbbHcc_tags_Aplanarity__238","",50,0,1);
   VbbHcc_tags_Aplanarity__238->SetBinContent(1,22.19572);
   VbbHcc_tags_Aplanarity__238->SetBinContent(2,2.298951);
   VbbHcc_tags_Aplanarity__238->SetBinContent(3,0.5485809);
   VbbHcc_tags_Aplanarity__238->SetBinContent(4,0.2045617);
   VbbHcc_tags_Aplanarity__238->SetBinContent(5,0.07799534);
   VbbHcc_tags_Aplanarity__238->SetBinContent(6,0.0419113);
   VbbHcc_tags_Aplanarity__238->SetBinContent(7,0.02569859);
   VbbHcc_tags_Aplanarity__238->SetBinContent(8,0.01313623);
   VbbHcc_tags_Aplanarity__238->SetBinContent(9,0.01267815);
   VbbHcc_tags_Aplanarity__238->SetBinContent(10,0.007648478);
   VbbHcc_tags_Aplanarity__238->SetBinContent(11,0.002797402);
   VbbHcc_tags_Aplanarity__238->SetBinContent(12,0.002305181);
   VbbHcc_tags_Aplanarity__238->SetBinContent(13,0.002391218);
   VbbHcc_tags_Aplanarity__238->SetBinContent(14,0.00111153);
   VbbHcc_tags_Aplanarity__238->SetBinContent(15,0.0005972935);
   VbbHcc_tags_Aplanarity__238->SetBinContent(16,0.0006388652);
   VbbHcc_tags_Aplanarity__238->SetBinContent(17,0.0004398179);
   VbbHcc_tags_Aplanarity__238->SetBinContent(18,0.001974588);
   VbbHcc_tags_Aplanarity__238->SetBinError(1,0.1097966);
   VbbHcc_tags_Aplanarity__238->SetBinError(2,0.03500534);
   VbbHcc_tags_Aplanarity__238->SetBinError(3,0.01740526);
   VbbHcc_tags_Aplanarity__238->SetBinError(4,0.01057481);
   VbbHcc_tags_Aplanarity__238->SetBinError(5,0.006612416);
   VbbHcc_tags_Aplanarity__238->SetBinError(6,0.004856928);
   VbbHcc_tags_Aplanarity__238->SetBinError(7,0.003657421);
   VbbHcc_tags_Aplanarity__238->SetBinError(8,0.002677797);
   VbbHcc_tags_Aplanarity__238->SetBinError(9,0.002691682);
   VbbHcc_tags_Aplanarity__238->SetBinError(10,0.002111987);
   VbbHcc_tags_Aplanarity__238->SetBinError(11,0.001291525);
   VbbHcc_tags_Aplanarity__238->SetBinError(12,0.001174139);
   VbbHcc_tags_Aplanarity__238->SetBinError(13,0.001083358);
   VbbHcc_tags_Aplanarity__238->SetBinError(14,0.0007893573);
   VbbHcc_tags_Aplanarity__238->SetBinError(15,0.0005972935);
   VbbHcc_tags_Aplanarity__238->SetBinError(16,0.0006388652);
   VbbHcc_tags_Aplanarity__238->SetBinError(17,0.0004398179);
   VbbHcc_tags_Aplanarity__238->SetBinError(18,0.001163792);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
