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
   Aplanarity_tags_18->Range(-0.2,-523.5939,1.133333,4712.345);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__232 = new TH1D("VbbHcc_tags_Aplanarity__232","",50,0,1);
   VbbHcc_tags_Aplanarity__232->SetBinContent(1,3989.286);
   VbbHcc_tags_Aplanarity__232->SetBinContent(2,408.105);
   VbbHcc_tags_Aplanarity__232->SetBinContent(3,115.6064);
   VbbHcc_tags_Aplanarity__232->SetBinContent(4,36.66085);
   VbbHcc_tags_Aplanarity__232->SetBinContent(5,12.64373);
   VbbHcc_tags_Aplanarity__232->SetBinContent(6,8.969242);
   VbbHcc_tags_Aplanarity__232->SetBinContent(7,3.635621);
   VbbHcc_tags_Aplanarity__232->SetBinContent(8,1.574127);
   VbbHcc_tags_Aplanarity__232->SetBinContent(9,3.483942);
   VbbHcc_tags_Aplanarity__232->SetBinContent(10,4.764898);
   VbbHcc_tags_Aplanarity__232->SetBinContent(11,0.2621142);
   VbbHcc_tags_Aplanarity__232->SetBinContent(12,0.4551654);
   VbbHcc_tags_Aplanarity__232->SetBinContent(13,0.1327388);
   VbbHcc_tags_Aplanarity__232->SetBinContent(15,0.268349);
   VbbHcc_tags_Aplanarity__232->SetBinContent(16,0.08820658);
   VbbHcc_tags_Aplanarity__232->SetBinError(1,67.29512);
   VbbHcc_tags_Aplanarity__232->SetBinError(2,17.43797);
   VbbHcc_tags_Aplanarity__232->SetBinError(3,10.63955);
   VbbHcc_tags_Aplanarity__232->SetBinError(4,4.504336);
   VbbHcc_tags_Aplanarity__232->SetBinError(5,1.926897);
   VbbHcc_tags_Aplanarity__232->SetBinError(6,1.791893);
   VbbHcc_tags_Aplanarity__232->SetBinError(7,0.9087446);
   VbbHcc_tags_Aplanarity__232->SetBinError(8,0.4398108);
   VbbHcc_tags_Aplanarity__232->SetBinError(9,1.15486);
   VbbHcc_tags_Aplanarity__232->SetBinError(10,3.292421);
   VbbHcc_tags_Aplanarity__232->SetBinError(11,0.1878862);
   VbbHcc_tags_Aplanarity__232->SetBinError(12,0.2899285);
   VbbHcc_tags_Aplanarity__232->SetBinError(13,0.1327388);
   VbbHcc_tags_Aplanarity__232->SetBinError(15,0.1925592);
   VbbHcc_tags_Aplanarity__232->SetBinError(16,0.08820658);
   VbbHcc_tags_Aplanarity__232->SetEntries(18512);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity__232->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__232->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__232->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__232->Draw("HIST");
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
