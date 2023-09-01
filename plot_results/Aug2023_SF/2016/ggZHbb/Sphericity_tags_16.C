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
   Sphericity_tags_16->Range(-0.2,-0.6618513,1.133333,5.956662);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__223 = new TH1D("VbbHcc_tags_Sphericity__223","",25,0,1);
   VbbHcc_tags_Sphericity__223->SetBinContent(1,5.042677);
   VbbHcc_tags_Sphericity__223->SetBinContent(2,4.10912);
   VbbHcc_tags_Sphericity__223->SetBinContent(3,2.289548);
   VbbHcc_tags_Sphericity__223->SetBinContent(4,1.502572);
   VbbHcc_tags_Sphericity__223->SetBinContent(5,0.9037935);
   VbbHcc_tags_Sphericity__223->SetBinContent(6,0.522041);
   VbbHcc_tags_Sphericity__223->SetBinContent(7,0.2742065);
   VbbHcc_tags_Sphericity__223->SetBinContent(8,0.1602966);
   VbbHcc_tags_Sphericity__223->SetBinContent(9,0.120251);
   VbbHcc_tags_Sphericity__223->SetBinContent(10,0.0892716);
   VbbHcc_tags_Sphericity__223->SetBinContent(11,0.05957801);
   VbbHcc_tags_Sphericity__223->SetBinContent(12,0.04962585);
   VbbHcc_tags_Sphericity__223->SetBinContent(13,0.03997444);
   VbbHcc_tags_Sphericity__223->SetBinContent(14,0.03221615);
   VbbHcc_tags_Sphericity__223->SetBinContent(15,0.03050388);
   VbbHcc_tags_Sphericity__223->SetBinContent(16,0.01828671);
   VbbHcc_tags_Sphericity__223->SetBinContent(17,0.01353825);
   VbbHcc_tags_Sphericity__223->SetBinContent(18,0.01251851);
   VbbHcc_tags_Sphericity__223->SetBinContent(19,0.005418343);
   VbbHcc_tags_Sphericity__223->SetBinContent(20,0.001386998);
   VbbHcc_tags_Sphericity__223->SetBinContent(21,0.0009917636);
   VbbHcc_tags_Sphericity__223->SetBinContent(22,0.000742389);
   VbbHcc_tags_Sphericity__223->SetBinContent(23,0.0002641559);
   VbbHcc_tags_Sphericity__223->SetBinError(1,0.04077025);
   VbbHcc_tags_Sphericity__223->SetBinError(2,0.03630574);
   VbbHcc_tags_Sphericity__223->SetBinError(3,0.02719678);
   VbbHcc_tags_Sphericity__223->SetBinError(4,0.02204375);
   VbbHcc_tags_Sphericity__223->SetBinError(5,0.01713598);
   VbbHcc_tags_Sphericity__223->SetBinError(6,0.0131137);
   VbbHcc_tags_Sphericity__223->SetBinError(7,0.009524475);
   VbbHcc_tags_Sphericity__223->SetBinError(8,0.007416336);
   VbbHcc_tags_Sphericity__223->SetBinError(9,0.006373543);
   VbbHcc_tags_Sphericity__223->SetBinError(10,0.005512759);
   VbbHcc_tags_Sphericity__223->SetBinError(11,0.004491823);
   VbbHcc_tags_Sphericity__223->SetBinError(12,0.004113702);
   VbbHcc_tags_Sphericity__223->SetBinError(13,0.003716855);
   VbbHcc_tags_Sphericity__223->SetBinError(14,0.003374858);
   VbbHcc_tags_Sphericity__223->SetBinError(15,0.003241008);
   VbbHcc_tags_Sphericity__223->SetBinError(16,0.002454667);
   VbbHcc_tags_Sphericity__223->SetBinError(17,0.002112293);
   VbbHcc_tags_Sphericity__223->SetBinError(18,0.002046697);
   VbbHcc_tags_Sphericity__223->SetBinError(19,0.001353258);
   VbbHcc_tags_Sphericity__223->SetBinError(20,0.0007100263);
   VbbHcc_tags_Sphericity__223->SetBinError(21,0.0005776847);
   VbbHcc_tags_Sphericity__223->SetBinError(22,0.0005402116);
   VbbHcc_tags_Sphericity__223->SetBinError(23,0.0002641559);
   VbbHcc_tags_Sphericity__223->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity__223->SetFillColor(ci);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__223->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__223->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__223->Draw("HIST");
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
