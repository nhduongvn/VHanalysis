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
   Aplanarity_tags_16->Range(-0.2,-63.70452,1.133333,573.3407);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__230 = new TH1D("VbbHcc_tags_Aplanarity__230","",50,0,1);
   VbbHcc_tags_Aplanarity__230->SetBinContent(1,485.3678);
   VbbHcc_tags_Aplanarity__230->SetBinContent(2,60.08439);
   VbbHcc_tags_Aplanarity__230->SetBinContent(3,17.49409);
   VbbHcc_tags_Aplanarity__230->SetBinContent(4,7.906044);
   VbbHcc_tags_Aplanarity__230->SetBinContent(5,2.871773);
   VbbHcc_tags_Aplanarity__230->SetBinContent(6,1.419308);
   VbbHcc_tags_Aplanarity__230->SetBinContent(7,1.802344);
   VbbHcc_tags_Aplanarity__230->SetBinContent(8,0.402132);
   VbbHcc_tags_Aplanarity__230->SetBinContent(9,0.3351008);
   VbbHcc_tags_Aplanarity__230->SetBinContent(10,0.04647556);
   VbbHcc_tags_Aplanarity__230->SetBinContent(11,0.09349577);
   VbbHcc_tags_Aplanarity__230->SetBinContent(13,0.04576914);
   VbbHcc_tags_Aplanarity__230->SetBinError(1,8.74496);
   VbbHcc_tags_Aplanarity__230->SetBinError(2,2.913451);
   VbbHcc_tags_Aplanarity__230->SetBinError(3,1.547151);
   VbbHcc_tags_Aplanarity__230->SetBinError(4,1.114113);
   VbbHcc_tags_Aplanarity__230->SetBinError(5,0.6529133);
   VbbHcc_tags_Aplanarity__230->SetBinError(6,0.4021599);
   VbbHcc_tags_Aplanarity__230->SetBinError(7,0.5603126);
   VbbHcc_tags_Aplanarity__230->SetBinError(8,0.1367737);
   VbbHcc_tags_Aplanarity__230->SetBinError(9,0.2004481);
   VbbHcc_tags_Aplanarity__230->SetBinError(10,0.04647556);
   VbbHcc_tags_Aplanarity__230->SetBinError(11,0.0662938);
   VbbHcc_tags_Aplanarity__230->SetBinError(13,0.04576914);
   VbbHcc_tags_Aplanarity__230->SetEntries(9292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity__230->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__230->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__230->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__230->Draw("HIST");
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
