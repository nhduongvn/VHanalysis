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
   Aplanarity_tags_16->Range(-0.2,-3.831238,1.133333,34.48114);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__237 = new TH1D("VbbHcc_tags_Aplanarity__237","",50,0,1);
   VbbHcc_tags_Aplanarity__237->SetBinContent(1,29.19039);
   VbbHcc_tags_Aplanarity__237->SetBinContent(2,2.399755);
   VbbHcc_tags_Aplanarity__237->SetBinContent(3,0.4291549);
   VbbHcc_tags_Aplanarity__237->SetBinContent(4,0.1402821);
   VbbHcc_tags_Aplanarity__237->SetBinContent(5,0.05575735);
   VbbHcc_tags_Aplanarity__237->SetBinContent(6,0.03784431);
   VbbHcc_tags_Aplanarity__237->SetBinContent(7,0.01936552);
   VbbHcc_tags_Aplanarity__237->SetBinContent(8,0.01559951);
   VbbHcc_tags_Aplanarity__237->SetBinContent(9,0.01084379);
   VbbHcc_tags_Aplanarity__237->SetBinContent(10,0.002152102);
   VbbHcc_tags_Aplanarity__237->SetBinContent(11,0.004201055);
   VbbHcc_tags_Aplanarity__237->SetBinContent(17,0.001922685);
   VbbHcc_tags_Aplanarity__237->SetBinError(1,0.1924889);
   VbbHcc_tags_Aplanarity__237->SetBinError(2,0.05472926);
   VbbHcc_tags_Aplanarity__237->SetBinError(3,0.02305301);
   VbbHcc_tags_Aplanarity__237->SetBinError(4,0.01341152);
   VbbHcc_tags_Aplanarity__237->SetBinError(5,0.008478718);
   VbbHcc_tags_Aplanarity__237->SetBinError(6,0.006763452);
   VbbHcc_tags_Aplanarity__237->SetBinError(7,0.005028655);
   VbbHcc_tags_Aplanarity__237->SetBinError(8,0.00444694);
   VbbHcc_tags_Aplanarity__237->SetBinError(9,0.003935284);
   VbbHcc_tags_Aplanarity__237->SetBinError(10,0.001530796);
   VbbHcc_tags_Aplanarity__237->SetBinError(11,0.002502522);
   VbbHcc_tags_Aplanarity__237->SetBinError(17,0.001360416);
   VbbHcc_tags_Aplanarity__237->SetEntries(28391);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity__237->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__237->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__237->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__237->Draw("HIST");
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
